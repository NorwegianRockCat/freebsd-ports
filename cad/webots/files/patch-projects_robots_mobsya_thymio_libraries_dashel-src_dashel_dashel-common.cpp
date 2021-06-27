--- projects/robots/mobsya/thymio/libraries/dashel-src/dashel/dashel-common.cpp.orig	2021-02-12 14:30:52 UTC
+++ projects/robots/mobsya/thymio/libraries/dashel-src/dashel/dashel-common.cpp
@@ -50,6 +50,9 @@
 #ifndef _WIN32
 	#include <netdb.h>
 	#include <sys/socket.h>
+#ifdef __FreeBSD__
+	#include <netinet/in.h>
+#endif
 	#include <arpa/inet.h>
 #else
 	#include <winsock2.h>
