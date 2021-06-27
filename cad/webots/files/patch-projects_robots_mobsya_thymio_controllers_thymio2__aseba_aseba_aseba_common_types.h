--- projects/robots/mobsya/thymio/controllers/thymio2_aseba/aseba/aseba/common/types.h.orig	2021-02-12 14:30:52 UTC
+++ projects/robots/mobsya/thymio/controllers/thymio2_aseba/aseba/aseba/common/types.h
@@ -33,7 +33,9 @@
 /* gcc-specific extension, but anyway __BIG_ENDIAN__ is for Mac PPC, which use gcc */
 #define bswap16(v) ({uint16_t _v = v; _v = (_v << 8) | (_v >> 8);})
 #else
+#ifndef bswap16
 #define bswap16(v) (v)
+#endif
 #endif
 
 /*@}*/
