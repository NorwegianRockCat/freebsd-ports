--- projects/robots/mobsya/thymio/libraries/dashel-src/dashel/dashel-posix.cpp.orig	2021-02-12 14:30:52 UTC
+++ projects/robots/mobsya/thymio/libraries/dashel-src/dashel/dashel-posix.cpp
@@ -57,6 +57,9 @@
 #include <netdb.h>
 #include <signal.h>
 #include <sys/select.h>
+#ifdef __FreeBSD__
+#include <sys/socket.h>
+#endif
 #include <sys/time.h>
 #include <sys/types.h>
 #include <sys/stat.h>
@@ -1066,13 +1069,27 @@ namespace Dashel
 				case 115200: newtio.c_cflag |= B115200; break;
 				case 230400: newtio.c_cflag |= B230400; break;
 				case 460800: newtio.c_cflag |= B460800; break;
+#ifdef B500000
 				case 500000: newtio.c_cflag |= B500000; break;
+#endif // B500000
+#ifdef B576000
 				case 576000: newtio.c_cflag |= B576000; break;
+#endif // B576000
+#ifdef B921600
 				case 921600: newtio.c_cflag |= B921600; break;
+#endif // B921600
+#ifdef B1000000
 				case 1000000: newtio.c_cflag |= B1000000; break;
+#endif // B1000000
+#ifdef B1152000
 				case 1152000: newtio.c_cflag |= B1152000; break;
+#endif // B1152000
+#ifdef B1500000
 				case 1500000: newtio.c_cflag |= B1500000; break;
+#endif // B1500000
+#ifdef B2000000
 				case 2000000: newtio.c_cflag |= B2000000; break;
+#endif // B2000000
 #ifdef B2500000
 				case 2500000: newtio.c_cflag |= B2500000; break;
 #endif // B2500000
