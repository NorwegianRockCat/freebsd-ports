--- src/webots/control/WbController.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/control/WbController.cpp
@@ -231,7 +231,7 @@ void WbController::start() {
 
   info(tr("Starting controller: %1").arg(commandLine()));
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   if (!qgetenv("WEBOTS_FIREJAIL_CONTROLLERS").isEmpty() && mRobot->findField("controller")) {
     mArguments.prepend(mCommand);
     mCommand = "firejail";
@@ -346,7 +346,7 @@ bool WbController::removeFromPathEnvironmentVariable(Q
 }
 
 void WbController::setProcessEnvironment() {
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   static const QString ldEnvironmentVariable("LD_LIBRARY_PATH");
 #elif defined(__APPLE__)
   static const QString ldEnvironmentVariable("DYLD_LIBRARY_PATH");
