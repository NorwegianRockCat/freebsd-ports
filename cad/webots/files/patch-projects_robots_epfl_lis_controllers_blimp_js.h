--- projects/robots/epfl/lis/controllers/blimp/js.h.orig	2020-12-15 08:37:01 UTC
+++ projects/robots/epfl/lis/controllers/blimp/js.h
@@ -61,7 +61,11 @@
 #include <fcntl.h>
 #include <unistd.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__)
+#include <sys/joystick.h>
+#define JS_DATA_TYPE joystick
+#define JS_RETURN (sizeof(struct JS_DATA_TYPE))
+#elif defined(__NetBSD__)
 #include <machine/joystick.h>
 #define JS_DATA_TYPE joystick
 #define JS_RETURN (sizeof(struct JS_DATA_TYPE))
