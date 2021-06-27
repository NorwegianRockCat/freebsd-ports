--- src/webots/gui/WbMainWindow.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbMainWindow.cpp
@@ -1005,7 +1005,7 @@ void WbMainWindow::createMenus() {
 
 void WbMainWindow::restorePreferredGeometry(bool minimizedOnStart) {
   WbPreferences *prefs = WbPreferences::instance();
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   if (minimizedOnStart && prefs->value("MainWindow/maximized", false).toBool())
     return;
 #endif
