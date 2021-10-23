https://cgit.freebsd.org/ports/commit/audio/pulseaudio/files/patch-src_modules_oss-util.c?id=4ba786e49ded8d06cd62b603daf9951de5f88f1d

Upstream patches from 14.2 to 15.0:
https://github.com/pulseaudio/pulseaudio/commit/ef8fa7c99752e0c404039a4c0f0c188d7033c431#diff-6c30591ff7b76f1d351f192894d3a1c2ade897dfe3f077af6cea7108ad1f6dbd
https://github.com/pulseaudio/pulseaudio/commit/0f70a6f519fa0c499d1bbc194ea8be5195033c3e

--- src/modules/oss/oss-util.c.orig	2018-07-13 19:06:14 UTC
+++ src/modules/oss/oss-util.c
@@ -39,7 +39,24 @@
 
 #include "oss-util.h"
 
+#ifndef DSP_CAP_COPROC
+#define DSP_CAP_COPROC 0x00000800
+#endif
+#ifndef DSP_CAP_TRIGGER
+#define DSP_CAP_TRIGGER 0x00001000
+#endif
+#ifndef DSP_CAP_MMAP
+#define DSP_CAP_MMAP 0x00002000
+#endif
+#ifndef DSP_CAP_MULTI
+#define DSP_CAP_MULTI 0x00004000
+#endif
+#ifndef DSP_CAP_BIND
+#define DSP_CAP_BIND  0x00008000
+#endif
+
 int pa_oss_open(const char *device, int *mode, int* pcaps) {
+    static const int nonblock_io = 1;
     int fd = -1;
     int caps;
     char *t;
@@ -89,6 +106,10 @@
     }
 
 success:
+    if (ioctl(fd, FIONBIO, &nonblock_io) < 0) {
+        pa_log("FIONBIO: %s", pa_cstrerror(errno));
+        goto fail;
+    }
 
     t = pa_sprintf_malloc(
             "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
@@ -164,8 +185,13 @@
         [PA_SAMPLE_FLOAT32BE] = AFMT_QUERY, /* not supported */
         [PA_SAMPLE_S32LE] = AFMT_QUERY, /* not supported */
         [PA_SAMPLE_S32BE] = AFMT_QUERY, /* not supported */
+#if defined(AFMT_S24_LE) && defined(AFMT_S24_BE)
+        [PA_SAMPLE_S24LE] = AFMT_S24_LE,
+        [PA_SAMPLE_S24BE] = AFMT_S24_BE,
+#else
         [PA_SAMPLE_S24LE] = AFMT_QUERY, /* not supported */
         [PA_SAMPLE_S24BE] = AFMT_QUERY, /* not supported */
+#endif
         [PA_SAMPLE_S24_32LE] = AFMT_QUERY, /* not supported */
         [PA_SAMPLE_S24_32BE] = AFMT_QUERY, /* not supported */
     };
@@ -290,41 +316,35 @@
 }
 
 static int get_device_number(const char *dev) {
-    const char *p, *e;
+    const char *p;
+    const char *e;
     char *rp = NULL;
-    int r;
+    int r = -1;
 
     if (!(p = rp = pa_readlink(dev))) {
-#ifdef ENOLINK
-        if (errno != EINVAL && errno != ENOLINK) {
-#else
-        if (errno != EINVAL) {
-#endif
-            r = -1;
-            goto finish;
-        }
-
+        if (errno != EINVAL && errno != ENOLINK)
+            return -2;
         p = dev;
     }
 
-    if ((e = strrchr(p, '/')))
-        p = e+1;
-
-    if (p == 0) {
-        r = 0;
-        goto finish;
-    }
-
-    p = strchr(p, 0) -1;
-
-    if (*p >= '0' && *p <= '9') {
-        r = *p - '0';
-        goto finish;
+    /* find the last forward slash */
+    while ((e = strrchr(p, '/')))
+        p = e + 1;
+
+    /* collect unit number at end, if any */
+    while (*p) {
+        if (*p >= '0' && *p <= '9') {
+            if (r < 0)
+                r = 0;
+            else
+                r *= 10;
+            r += *p - '0';
+        } else {
+            r = -1;
+        }
+        p++;
     }
 
-    r = -1;
-
-finish:
     pa_xfree(rp);
     return r;
 }
@@ -334,7 +354,7 @@
     int n, r = -1;
     int b = 0;
 
-    if ((n = get_device_number(dev)) < 0)
+    if ((n = get_device_number(dev)) == -2)
         return -1;
 
     if (!(f = pa_fopen_cloexec("/dev/sndstat", "r")) &&
@@ -348,8 +368,8 @@
     }
 
     while (!feof(f)) {
-        char line[64];
-        int device;
+        char line[1024] = { 0 };
+        unsigned device;
 
         if (!fgets(line, sizeof(line), f))
             break;
@@ -357,26 +377,29 @@
         line[strcspn(line, "\r\n")] = 0;
 
         if (!b) {
-            b = pa_streq(line, "Audio devices:");
+            b = pa_streq(line, "Audio devices:") || pa_streq(line, "Installed devices:");
             continue;
         }
 
         if (line[0] == 0)
             break;
 
-        if (sscanf(line, "%i: ", &device) != 1)
+        if (sscanf(line, "%u: ", &device) != 1 && sscanf(line, "pcm%u: ", &device) != 1)
             continue;
 
         if (device == n) {
             char *k = strchr(line, ':');
             pa_assert(k);
             k++;
-            k += strspn(k, " ");
+            k += strspn(k, " <");
 
             if (pa_endswith(k, " (DUPLEX)"))
                 k[strlen(k)-9] = 0;
 
-            pa_strlcpy(name, k, l);
+            k[strcspn(k, ">")] = 0;
+
+            // Include the number to disambiguate devices with the same name
+            pa_snprintf(name, l, "%u - %s", device, k);
             r = 0;
             break;
         }
@@ -400,10 +423,10 @@
     char *fn;
     int fd;
 
-    if ((n = get_device_number(device)) < 0)
+    if ((n = get_device_number(device)) == -2)
         return -1;
 
-    if (n == 0)
+    if (n == -1)
         if ((fd = open_mixer("/dev/mixer")) >= 0)
             return fd;
 
