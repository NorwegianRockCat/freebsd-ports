--- gazebo/common/CommonIface.cc.orig	2021-04-02 01:08:12 UTC
+++ gazebo/common/CommonIface.cc
@@ -31,6 +31,10 @@
 #include <sys/sendfile.h>
 #endif
 
+#ifdef __FreeBSD__
+#include <sys/socket.h>
+#endif
+
 #include <ignition/common/Filesystem.hh>
 
 #include <boost/filesystem/operations.hpp>
@@ -385,9 +389,23 @@ bool common::copyFile(const std::string &_existingFile
   while (offset >= 0 && offset < statBuf.st_size)
   {
     // Send the bytes from one file to the other.
+#ifdef __linux__
     ssize_t written = sendfile(writeFd, readFd, &offset, statBuf.st_size);
+
     if (written < 0)
       break;
+#else // FreeBSD
+    off_t written;
+    int result;
+
+    result = sendfile(readFd, writeFd, offset,
+        statBuf.st_size, nullptr, &written, 0);
+
+    if (result != 0)
+        break;
+
+    offset += written;
+#endif
   }
 
   close(readFd);
