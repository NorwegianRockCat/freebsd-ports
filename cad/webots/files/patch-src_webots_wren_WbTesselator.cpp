--- src/webots/wren/WbTesselator.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/wren/WbTesselator.cpp
@@ -33,7 +33,7 @@ typedef GLvoid (*GLU_function_pointer)();
 #endif
 #endif
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 #define GLU_function_pointer GLvoid (*)()
 #endif
 
