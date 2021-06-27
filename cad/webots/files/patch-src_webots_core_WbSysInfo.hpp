--- src/webots/core/WbSysInfo.hpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbSysInfo.hpp
@@ -20,10 +20,10 @@
 class QOpenGLFunctions;
 
 namespace WbSysInfo {
-  enum WbPlatform { LINUX_PLATFORM, MACOS_PLATFORM, WIN32_PLATFORM };
+  enum WbPlatform { LINUX_PLATFORM, MACOS_PLATFORM, WIN32_PLATFORM, FREEBSD_PLATFORM };
 
   const QString &sysInfo();
-  const QString &platformShortName();  // either "windows", "mac", "linux32" or "linux64"
+  const QString &platformShortName();  // either "windows", "mac", "linux32", "linux64", or "freebsd"
   const QString &processor();
   bool isVirtualMachine();
 #ifdef __linux__
@@ -31,6 +31,9 @@ namespace WbSysInfo {
   bool isRootUser();
   inline bool isSnap() { return qgetenv("SNAP_NAME") == "webots"; }
 #else
+#if __FreeBSD__
+  bool isRootUser();
+#endif
   inline bool isSnap() { return false; }
 #endif
   QString environmentVariable(const QString &name);
