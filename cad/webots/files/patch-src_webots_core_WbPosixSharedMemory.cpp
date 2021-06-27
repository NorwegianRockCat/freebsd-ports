--- src/webots/core/WbPosixSharedMemory.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbPosixSharedMemory.cpp
@@ -21,6 +21,8 @@
 WbPosixSharedMemory::WbPosixSharedMemory(const QString &name) :
 #ifdef __APPLE__
   mName(name),
+#elif defined(__FreeBSD__)
+  mName("/Webots/" + name.mid(7)),
 #else
   mName("snap.webots." + name.mid(7)),
 #endif
