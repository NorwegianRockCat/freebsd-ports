--- src/webots/gui/WbWrenWindow.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbWrenWindow.cpp
@@ -445,7 +445,7 @@ void WbWrenWindow::feedMultimediaStreamer() {
 }
 
 void WbWrenWindow::readPixels(int width, int height, unsigned int format, void *buffer) {
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   if (WbSysInfo::isVirtualMachine()) {
     // Reading the front buffer is not supported by all OpenGL implementations (especially on Linux running in a VM).
     // In that case, to read the front buffer, we need to swap the buffers, read the back buffer and swap the buffers again.
