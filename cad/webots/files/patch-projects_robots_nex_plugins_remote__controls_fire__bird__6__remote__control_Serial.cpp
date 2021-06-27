--- projects/robots/nex/plugins/remote_controls/fire_bird_6_remote_control/Serial.cpp.orig	2020-12-15 08:37:01 UTC
+++ projects/robots/nex/plugins/remote_controls/fire_bird_6_remote_control/Serial.cpp
@@ -32,6 +32,10 @@
 #include <unistd.h>
 #include <winreg.h>
 
+#elif __FreeBSD__
+#include <errno.h>
+#include <termios.h>
+
 #else  // __linux__ || __APPLE__
 
 #include <errno.h>
@@ -126,7 +130,7 @@ Serial::Serial(const string &port) : mName(port) {
   }
 
 #else
-  // __linux__
+  // __linux__ || __FreeBSD__
   mFd = open(mName.c_str(), O_RDWR | O_NOCTTY);
   if (mFd > 0) {
     tcflush(mFd, TCIOFLUSH);  // flush old data
