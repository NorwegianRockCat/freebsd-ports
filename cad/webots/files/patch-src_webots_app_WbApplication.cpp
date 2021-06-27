--- src/webots/app/WbApplication.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/app/WbApplication.cpp
@@ -133,7 +133,7 @@ void WbApplication::removeOldLibraries() {
   QString PATH(qgetenv("PATH"));
   PATH.remove(gProjectLibsInPath);
   qputenv("PATH", PATH.toUtf8());
-#else  // __linux__ || __APPLE__
+#else  // __linux__ || __APPLE__ || __FreeBSD__
   QDir tmpLibDir(WbStandardPaths::webotsTmpPath() + "lib/");
 
   // remove links to libraries of previous project
@@ -172,7 +172,7 @@ void WbApplication::linkLibraries(QString projectLibra
     }
     qputenv("PATH", PATH.toUtf8());
   }
-#else  // __linux__ || __APPLE__
+#else  // __linux__ || __APPLE__ || __FreeBSD__
   const QString tmpLibPath(WbStandardPaths::webotsTmpPath() + "lib/");
   const QString dynamicLibraryExtension(WbStandardPaths::dynamicLibraryExtension());
 
