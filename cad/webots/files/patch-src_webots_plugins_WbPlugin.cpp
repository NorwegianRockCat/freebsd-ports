--- src/webots/plugins/WbPlugin.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/plugins/WbPlugin.cpp
@@ -41,11 +41,7 @@ static HMODULE loadLibrary(const QString &library) {
 #else
 #include <dlfcn.h>
 
-#ifdef __linux__
-#define DLOPEN(a, b) dlopen(a.toUtf8(), b)
-#define DLSYM dlsym
-
-#elif defined(__APPLE__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__)
 #define DLOPEN(a, b) dlopen(a.toUtf8(), b)
 #define DLSYM dlsym
 #endif
