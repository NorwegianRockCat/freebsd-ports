--- src/webots/gui/WbSplashScreen.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbSplashScreen.cpp
@@ -39,7 +39,7 @@ WbSplashScreen::~WbSplashScreen() {
 }
 
 void WbSplashScreen::drawContents(QPainter *painter) {
-#ifndef __linux__
+#if !defined(__linux__) && !defined(__FreeBSD__)
   // fix manually the dpi scaling.
   const double dotsPerInchRatio = 96.0 / logicalDpiX();
 #else
