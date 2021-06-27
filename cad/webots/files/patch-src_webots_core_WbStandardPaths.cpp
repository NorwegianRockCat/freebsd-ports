--- src/webots/core/WbStandardPaths.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbStandardPaths.cpp
@@ -35,6 +35,9 @@ const QString &WbStandardPaths::webotsHomePath() {
 #ifdef __linux__
   // on Linux,    the webots binary is located in $WEBOTS_HOME/bin/webots-bin
   const int depth = 1;
+#elif defined(__FreeBSD__)
+  // on FreeBSD, the webots binary is also located in $WEBOTS_HOME/bin/webots-bin
+  const int depth = 1;
 #elif defined(__APPLE__)
   // on macOS, the webots binary is located in $WEBOTS_HOME/Contents/MacOS/webots-bin
   const int depth = 2;
@@ -148,7 +151,7 @@ const QString &WbStandardPaths::dynamicLibraryExtensio
   static QString extension(".dylib");
 #elif defined(_WIN32)
   static QString extension(".dll");
-#else  // __linux__
+#else  // __linux__ || __FreeBSD__
   static QString extension(".so");
 #endif
   return extension;
@@ -210,7 +213,7 @@ const QString &WbStandardPaths::webotsTmpPath() {
                     QString("/Temp/webots-%1/").arg(QCoreApplication::applicationPid());
 #elif defined(__APPLE__)
     webotsTmpPath = QString("/var/tmp/webots-%1/").arg(QCoreApplication::applicationPid());
-#else  // __linux__
+#else  // __linux__ || __FreeBSD__
     const QString WEBOTS_TMP_PATH = WbSysInfo::environmentVariable("WEBOTS_TMP_PATH");
     if (!WEBOTS_TMP_PATH.isEmpty() && QDir(WEBOTS_TMP_PATH).exists())
       webotsTmpPath = WEBOTS_TMP_PATH;
