--- src/controller/c/scheduler.c.orig	2020-12-15 08:37:01 UTC
+++ src/controller/c/scheduler.c
@@ -27,7 +27,7 @@
 #include "scheduler.h"
 #ifdef _WIN32
 #include <wininet.h>
-#else  // __APPLE__ || __linux__
+#else  // __APPLE__ || __linux__ || __FreeBSD__
 #include <arpa/inet.h>
 #include <netdb.h>
 #include <unistd.h>
