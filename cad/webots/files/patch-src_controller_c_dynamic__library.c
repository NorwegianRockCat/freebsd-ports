--- src/controller/c/dynamic_library.c.orig	2020-12-15 08:37:01 UTC
+++ src/controller/c/dynamic_library.c
@@ -16,7 +16,7 @@
 
 #ifdef _WIN32
 #include <windows.h>
-#else  // __linux__ || __APPLE__
+#else  // __linux__ || __APPLE__ || __FreeBSD__
 #include <dlfcn.h>
 #endif
 
@@ -30,7 +30,7 @@
 #define DYNAMIC_LIBRARY_GETSYM(a, b) GetProcAddress(a, b)
 #define DYNAMIC_LIBRARY_UNLOAD(a) FreeLibrary(a)
 
-#else  // __linux__ || __APPLE__
+#else  // __linux__ || __APPLE__ || __FreeBSD__
 #define DYNAMIC_LIBRARY_LOAD(a) dlopen(a, RTLD_LAZY | RTLD_GLOBAL)
 #define DYNAMIC_LIBRARY_GETSYM(a, b) dlsym(a, b)
 #define DYNAMIC_LIBRARY_UNLOAD(a) dlclose(a)
@@ -61,7 +61,7 @@ DYNAMIC_LIBRARY_HANDLE dynamic_library_init(const char
     return NULL;
   memcpy(tmpname, libname, length);
   tmpname[length] = '\0';
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   // dlopen() does not add .so to the filename, like windows does for .dll
   if (length > 3 && (libname[length - 3] != '.' || libname[length - 2] != 's' || libname[length - 1] != 'o'))
     strcat(tmpname, ".so");
