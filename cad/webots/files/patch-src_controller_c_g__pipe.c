--- src/controller/c/g_pipe.c.orig	2020-12-15 08:37:01 UTC
+++ src/controller/c/g_pipe.c
@@ -69,7 +69,7 @@ GPipe *g_pipe_new(const char *name) {  // used by Webo
   struct sockaddr_un address;
   memset(&address, 0, sizeof(struct sockaddr_un));
   address.sun_family = AF_UNIX;
-  strncpy(address.sun_path, name, sizeof(address.sun_path));
+  strncpy(address.sun_path, name, sizeof(address.sun_path) - 1);
   if (connect(p->handle, (struct sockaddr *)&address, sizeof(struct sockaddr_un)) != 0) {
     fprintf(stderr, "socket connect() failed for %s, errno=%d\n", name, errno);
     close(p->handle);
