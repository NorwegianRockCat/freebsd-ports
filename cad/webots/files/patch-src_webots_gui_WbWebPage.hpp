--- src/webots/gui/WbWebPage.hpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbWebPage.hpp
@@ -17,7 +17,7 @@
 
 #ifdef _WIN32
 #include <QtWebKitWidgets/QWebPage>
-#elif defined(__APPLE__) || defined(__linux__)
+#elif defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__)
 #include <QtWebEngineWidgets/QWebEnginePage>
 #define QWebPage QWebEnginePage
 #endif
