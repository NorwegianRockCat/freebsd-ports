/*-
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2021 Henrik Gulbrandsen <henrik@gulbra.net>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <netinet/in.h>
#include <sys/socket.h>

#include <camlib.h>
#include <libgeom.h>

#define SMART_READ_LOG  0xD5
#define SMART_SCT_PAGE  0x00C24FE0

bool get_device_and_ccb(const char *device_name,
    struct cam_device **device, union ccb **ccb)
{
    char name[30];
    int unit;

    /* Break the device name into name and unit number */
    if (cam_get_device(device_name, name, sizeof(name), &unit) == -1) {
        fprintf(stderr, "%s\n", cam_errbuf);
        return false;
    }

    /* Use them to open a passthrough device for CAM CCBs */
    *device = cam_open_spec_device(name, unit, O_RDWR, NULL);
    if (*device == NULL) {
        fprintf(stderr, "%s\n", cam_errbuf);
        return false;
    }

    /* Get a CCB for the device */
    *ccb = cam_getccb(*device);
    if (*ccb == NULL) {
        fprintf(stderr, "CCB allocation failed!\n");
        cam_close_device(*device);
        return false;
    }

    return true;
}

bool get_temperature(const char *device_name, int *temperature) {
    struct cam_device *device = NULL;
    bool success = true;
    uint8_t buffer[512];
    union ccb *ccb;

    /* Do some initialization */
    memset(buffer, 0, sizeof(buffer));
    if (!get_device_and_ccb(device_name, &device, &ccb))
        return false;

    /* Prepare the basic ATA I/O fields */
    cam_fill_ataio(&ccb->ataio, 0, NULL, CAM_DIR_IN, 0,
        buffer, sizeof(buffer), 60000);

    /* Use SMART Command Transport to read log data */
    ata_28bit_cmd(&ccb->ataio, ATA_SMART_CMD,
        SMART_READ_LOG, SMART_SCT_PAGE, 1);

    /* Send the CCB and get the result */
    if (cam_send_ccb(device, ccb) == -1) {
        perror("Failed to send CCB");
        success = false;
    }

    /* Get the current temperature in degrees Celsius */
    if (success && buffer[200] != 0x80) {
        *temperature = buffer[200];
    } else {
        success = false;
    }

    cam_close_device(device);
    cam_freeccb(ccb);
    return success;
}

int start_server(uint32_t host, uint16_t port) {
   struct sockaddr_in address;
   int one = 1;
   int s;

   address.sin_len = sizeof(address);
   address.sin_family = AF_INET;
   address.sin_addr.s_addr = htonl(host);
   address.sin_port = htons(port);
 
   s = socket(PF_INET, SOCK_STREAM, 0);
   if (s == -1) {
       perror("socket");
       return -1;
   }

   if (setsockopt(s, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one)) != 0) {
       perror("setsockopt");
       close(s);
       return -1;
   }

   if (bind(s, (struct sockaddr*)&address, sizeof(address)) != 0) {
       perror("bind");
       close(s);
       return -1;
   }

   if (listen(s, 10) != 0) {
       perror("listen");
       close(s);
       return -1;
   }

   return s;
}

FILE *accept_connection(int server_socket) {
    FILE *output;
    int s;

    s = accept(server_socket, NULL, NULL);
    if (s == -1) {
        perror("accept");
        return NULL;
    }

    output = fdopen(s, "w");
    if (!output) {
        perror("fdopen");
        return NULL;
    }

    return output;
}

void print_temperature_info(FILE *output) {
    struct gmesh mesh;
    struct gclass *classp;
    int temperature = 0;
    int error;

    /* Get the current GEOM class tree */
    error = geom_gettree(&mesh);
    if (error != 0) {
        fprintf(stderr, "Error: geom_gettree() -> %d\n", error);
        exit(1);
    }

    /* Locate the disk class */
    LIST_FOREACH(classp, &mesh.lg_class, lg_class) {
        if (strcmp(classp->lg_name, "DISK") == 0) {
            struct ggeom *gp;

            /* Find the provider for each disk */
            LIST_FOREACH(gp, &classp->lg_geom, lg_geom) {
                struct gprovider *pp = LIST_FIRST(&gp->lg_provider);
                struct gconfig *configp;
                char *description = "";

                /* Find the disk description */
                LIST_FOREACH(configp, &pp->lg_config, lg_config) {
                    if (strcmp(configp->lg_name, "descr") == 0) {
                        description = configp->lg_val;
                        break;
                    }
                }

                /* Get the current disk temperature; skip if unknown */
                get_temperature(gp->lg_name, &temperature);
                if (!temperature) continue; 

                /* Format the result like the Linux hddtemp utility would */
                fprintf(output, "|/dev/%s|%s|%d|C|\n", gp->lg_name,
                    description, temperature);
            }
            break;
        }
    }

    geom_deletetree(&mesh);
}

int main(int argc, char *argv[]) {
    bool daemon_mode = false;
    int server_socket;
    FILE *output;

    /* Check if we should run in daemon mode */
    if (argc == 2 && strcmp(argv[1], "-d") == 0) {
        daemon_mode = true;
        argc--;
    }

    /* That's the only option we allow so far */
    if (argc > 1) {
        char *slash = strrchr(argv[0], '/');
        char *program = (slash)? slash + 1 : argv[0];
        printf("Usage: %s [-d]\n\n", program);
        exit(0);
    }

    /* Use the daemon fork as ordered */
    if (daemon_mode) {
        switch(fork()) {
            case -1: perror("fork"); exit(1);
            case  0: break; /* child */
            default: exit(0);
        }
    }

    /* Open a server on the same port as the Linux hddtemp utility */
    server_socket = start_server(INADDR_LOOPBACK, 7634);
    if (server_socket == -1) {
        fprintf(stderr, "Could not start server\n");
        exit(1);
    }

    /* Give current HDD temperatures to clients connecting to the port */
    while ((output = accept_connection(server_socket)) != NULL) {
        print_temperature_info(output);
        fclose(output);
    }
}
