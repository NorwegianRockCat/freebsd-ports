--- src/webots/gui/WbVideoRecorder.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbVideoRecorder.cpp
@@ -459,7 +459,7 @@ QString WbVideoRecorder::nextFileName() {
 }
 
 void WbVideoRecorder::createMpeg() {
-#ifdef __linux__
+#if (__linux__) || defined(__FreeBSD__)
   static const QString ffmpeg("ffmpeg");
   static const QString percentageChar = "%";
   mScriptPath = "ffmpeg_script.sh";
@@ -525,7 +525,7 @@ void WbVideoRecorder::createMpeg() {
     stream << "del ffmpeg2pass-0.log\n";
     stream << "del ffmpeg2pass-0.log.mbtree\n";
     stream << "Exit 0\n";
-#else  // __APPLE__ and __linux__
+#else  // __APPLE__ || __linux__ || __FreeBSD__
     stream << "rm -f *2pass-0.log*\n";
     stream << "exit 0\n";
 #endif
