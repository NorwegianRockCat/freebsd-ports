--- src/webots/core/WbPreferences.hpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbPreferences.hpp
@@ -34,7 +34,7 @@ class WbPreferences : public QSettings { (public)
   void setMoviePreferences(int resolutionIndex, int quality, double acceleration, bool caption);
   void moviePreferences(int &resolutionIndex, int &quality, double &acceleration, bool &caption) const;
   QString accessErrorString() const;
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   // popup a warning message if the preferences file is not writable
   void checkIsWritable();
 #endif
