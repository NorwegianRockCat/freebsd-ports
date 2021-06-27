--- src/webots/sound/WbWaveFile.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/sound/WbWaveFile.cpp
@@ -207,7 +207,7 @@ void WbWaveFile::loadFromFile(int side) {
     return;
   }
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   static QString ffmpeg("avconv");
   static QString percentageChar = "%";
 #elif defined(__APPLE__)
