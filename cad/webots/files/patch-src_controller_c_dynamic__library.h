--- src/controller/c/dynamic_library.h.orig	2020-12-15 08:37:01 UTC
+++ src/controller/c/dynamic_library.h
@@ -24,7 +24,7 @@
 struct HINSTANCE__;
 typedef struct HINSTANCE__ *dlInstance;
 #define DYNAMIC_LIBRARY_HANDLE dlInstance
-#else  // __linux__ || __APPLE__
+#else  // __linux__ || __APPLE__ || __FreeBSD__
 #define DYNAMIC_LIBRARY_HANDLE void *
 #endif
 
