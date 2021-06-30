--- media/mtransport/third_party/nICEr/src/stun/stun.h.orig	2021-06-30 08:47:19 UTC
+++ media/mtransport/third_party/nICEr/src/stun/stun.h
@@ -41,7 +41,7 @@ OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY O
 #include <sys/socket.h>
 #ifndef LINUX
 #include <net/if.h>
-#if !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__FreeBSD__)
 #include <net/if_var.h>
 #endif
 #include <net/if_dl.h>
