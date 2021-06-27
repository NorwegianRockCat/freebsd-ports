--- src/webots/gui/WbGuiApplication.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbGuiApplication.cpp
@@ -116,7 +116,7 @@ void WbGuiApplication::restart() {
     qApp->quit();
   QStringList nonProgramArgs = qApp->arguments();
   nonProgramArgs.removeFirst();
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   QProcess::startDetached("./webots", nonProgramArgs);
 #else
   QProcess::startDetached(qApp->arguments()[0], nonProgramArgs);
@@ -459,7 +459,7 @@ bool WbGuiApplication::setup() {
   connect(mMainWindow, &WbMainWindow::splashScreenCloseRequested, this, &WbGuiApplication::closeSplashScreenIfNeeded);
   mApplication->setup();
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   // popup a warning message if the preferences file is not writable
   prefs->checkIsWritable();
   if (WbSysInfo::isRootUser())
@@ -553,6 +553,12 @@ void WbGuiApplication::udpateStyleSheet() {
   QFile linuxQssFile(WbStandardPaths::resourcesPath() + "stylesheet.linux.qss");
   linuxQssFile.open(QFile::ReadOnly);
   styleSheet += QString::fromUtf8(linuxQssFile.readAll());
+
+#elif defined(__FreeBSD__)
+  QFile freebsdQssFile(WbStandardPaths::resourcesPath() + "stylesheet.freebsd.qss");
+  freebsdQssFile.open(QFile::ReadOnly);
+  styleSheet += QString::fromUtf8(freebsdQssFile.readAll());
+
 #endif
 
   qApp->setStyleSheet(styleSheet);
