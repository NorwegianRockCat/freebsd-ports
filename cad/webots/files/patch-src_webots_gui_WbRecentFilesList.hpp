--- src/webots/gui/WbRecentFilesList.hpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbRecentFilesList.hpp
@@ -47,7 +47,7 @@ signals: (private)
 
   void update();
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   static QString escapedText(const QString &text);
   static QString unescapedText(const QString &text);
 #endif
