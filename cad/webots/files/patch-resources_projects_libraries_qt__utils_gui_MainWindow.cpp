--- resources/projects/libraries/qt_utils/gui/MainWindow.cpp.orig	2020-12-15 08:37:01 UTC
+++ resources/projects/libraries/qt_utils/gui/MainWindow.cpp
@@ -13,6 +13,8 @@
 #include <windows.h>
 #elif __linux__
 #include <X11/Xlib.h>
+#elif __FreeBSD__
+#include <X11/Xlib.h>
 #endif
 
 using namespace webotsQtUtils;
@@ -57,7 +59,7 @@ void MainWindow::showWindow() {
 #elif defined(__APPLE__)
   show();
   raise();
-#else  // __linux__
+#else  // __linux__ || __FreeBSD__
   // Warning:
   // on Ubuntu 12.04 the isMinimized() function doesn't return
   // the correct value if the window has been manually minimized
