--- src/webots/core/WbMacAddress.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbMacAddress.cpp
@@ -158,6 +158,42 @@ WbMacAddress::WbMacAddress() {
   close(fd);
 }
 
+#elif defined(__FreeBSD__)
+
+#include <ifaddrs.h>
+#include <sys/socket.h>
+#include <sys/types.h>
+#include <net/ethernet.h>
+#include <net/if_dl.h>
+#include <net/if_types.h>
+
+WbMacAddress::WbMacAddress() {
+  for (int i = 0; i < 6; i++)
+    mAddress[i] = 0;
+  struct ifaddrs *ifap, *ifaphead;
+  const struct sockaddr_dl *sdl;
+  c_caddr_t ap;
+
+  if (getifaddrs(&ifaphead) != 0) {
+    perror(NULL);
+    return;
+  }
+  for (ifap = ifaphead; ifap; ifap = ifap->ifa_next) {
+    if (ifap->ifa_addr->sa_family == AF_LINK) {
+      sdl = reinterpret_cast<const struct sockaddr_dl *>(ifap->ifa_addr);
+      if (sdl->sdl_alen == ETHER_ADDR_LEN &&
+         (sdl->sdl_type == IFT_ETHER ||
+          sdl->sdl_type == IFT_L2VLAN ||
+          sdl->sdl_type == IFT_BRIDGE)) {
+        ap = CLLADDR(sdl);
+        for (int i = 0; i < 6; i++, ap++)
+          mAddress[i] = 0xff & (*ap);
+      }
+    }
+  }
+  freeifaddrs(ifaphead);
+}
+
 #elif defined(__APPLE__)
 
 #include <ifaddrs.h>
