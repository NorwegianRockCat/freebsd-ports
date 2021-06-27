--- profiler/src/Remotery/lib/Remotery.c.orig	2021-04-06 18:45:47 UTC
+++ profiler/src/Remotery/lib/Remotery.c
@@ -1170,7 +1170,7 @@ static void rmtThread_Destructor(rmtThread* thread)
 typedef int errno_t;
 #endif
 
-#if (!defined(_WIN64) && !defined(__APPLE__)) || (defined(__MINGW32__) && !(defined(RSIZE_T_DEFINED) || defined(_RSIZE_T_DEFINED)))
+#if (!defined(_WIN64) && !defined(__APPLE__) && !defined(__FreeBSD__)) || (defined(__MINGW32__) && !(defined(RSIZE_T_DEFINED) || defined(_RSIZE_T_DEFINED)))
 typedef unsigned int rsize_t;
 #endif
 
