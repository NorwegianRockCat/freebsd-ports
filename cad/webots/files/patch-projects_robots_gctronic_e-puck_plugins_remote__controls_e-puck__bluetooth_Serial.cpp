--- projects/robots/gctronic/e-puck/plugins/remote_controls/e-puck_bluetooth/Serial.cpp.orig	2020-12-15 08:37:01 UTC
+++ projects/robots/gctronic/e-puck/plugins/remote_controls/e-puck_bluetooth/Serial.cpp
@@ -32,6 +32,10 @@
 #include <unistd.h>
 #include <winreg.h>
 
+#elif __FreeBSD__
+#include <errno.h>
+#include <termios.h>
+
 #else  // __linux__ || __APPLE__
 
 #include <errno.h>
@@ -66,7 +70,7 @@ Serial::Serial(const string &port) : mName(port) {
 #ifdef _WIN32
   DCB dcb;
   COMMTIMEOUTS commTimeouts;
-#else  // __linux__ || __APPLE__
+#else  // __linux__ || __APPLE__ || __FreeBSD__
   struct termios term;
 #endif
 
@@ -126,7 +130,7 @@ Serial::Serial(const string &port) : mName(port) {
   }
 
 #else
-  // __linux__
+  // __linux__ || __FreeBSD__
   int rval;
 
   // test device file existence
@@ -168,7 +172,7 @@ Serial::Serial(const string &port) : mName(port) {
     mFd = -1;
     throwFatalException("Unable to set serial attributes");
   }
-#endif  // __linux__
+#endif  // __linux__ || __FreeBSD__
 }
 
 Serial::~Serial() {
