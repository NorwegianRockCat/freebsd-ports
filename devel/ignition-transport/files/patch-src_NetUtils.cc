--- src/NetUtils.cc.orig	2021-01-05 20:17:33 UTC
+++ src/NetUtils.cc
@@ -29,6 +29,11 @@
   #include <unistd.h>
 #endif
 
+#ifdef __FreeBSD__
+  #include <netinet/in.h>
+  #define ifr_ifindex ifr_index
+#endif
+
 #include <algorithm>
 #include <cstdlib>
 #include <cstring>
