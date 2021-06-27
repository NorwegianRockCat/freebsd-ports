--- src/webots/core/WbDesktopServices.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbDesktopServices.cpp
@@ -14,7 +14,7 @@
 
 #include "WbDesktopServices.hpp"
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 #include <QtCore/QProcess>
 #else
 #include <QtCore/QUrl>
@@ -22,7 +22,7 @@
 #endif
 
 bool WbDesktopServices::openUrl(const QString &url) {
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   QProcess process;
   process.setProgram("xdg-open");  // we need to use xdg-open to be snap compliant
   process.setArguments(QStringList() << url);
