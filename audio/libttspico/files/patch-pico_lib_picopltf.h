--- pico/lib/picopltf.h.orig	2021-02-10 14:15:54 UTC
+++ pico/lib/picopltf.h
@@ -38,6 +38,7 @@
 #define PICO_Windows    1   /* Windows */
 #define PICO_MacOSX     5   /* Macintosh OS X */
 #define PICO_Linux      7   /* Linux */
+#define PICO_FreeBSD    9   /* FreeBSD */
 
 #define PICO_GENERIC    99  /* Generic */
 
@@ -49,6 +50,8 @@
 #define PICO_PLATFORM    PICO_MacOSX
 #elif defined(linux) || defined(__linux__) || defined(__linux)
 #define PICO_PLATFORM    PICO_Linux
+#elif defined(__FreeBSD__)
+#define PICO_PLATFORM    PICO_FreeBSD
 #else
 #define PICO_PLATFORM    PICO_GENERIC
 #endif
@@ -62,15 +65,30 @@
 #define PICO_PLATFORM_STRING "MacOSX"
 #elif (PICO_PLATFORM == PICO_Linux)
 #define PICO_PLATFORM_STRING "Linux"
+#elif (PICO_PLATFORM == PICO_FreeBSD)
+#define PICO_PLATFORM_STRING "FreeBSD"
 #elif (PICO_PLATFORM == PICO_GENERIC)
 #define PICO_PLATFORM_STRING "UnknownPlatform"
 #endif
 
+#if (PICO_PLATFORM == PICO_FreeBSD)
+
+#include <sys/endian.h>
+#if _BYTE_ORDER == _BIG_ENDIAN
+#define PICO_ENDIANNESS ENDIANNESS_BIG
+#else
+#define PICO_ENDIANNESS ENDIANNESS_LITTLE
+#endif
+
+#else
+
 #include <endian.h>
 #if __BYTE_ORDER == __BIG_ENDIAN
 #define PICO_ENDIANNESS ENDIANNESS_BIG
 #else
 #define PICO_ENDIANNESS ENDIANNESS_LITTLE
+#endif
+
 #endif
 
 #endif /* !defined(__PICOPLTF_H__) */
