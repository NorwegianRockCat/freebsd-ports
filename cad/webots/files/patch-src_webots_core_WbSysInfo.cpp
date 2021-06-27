--- src/webots/core/WbSysInfo.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbSysInfo.cpp
@@ -27,6 +27,10 @@
 #include <QtCore/QFile>
 #endif
 
+#ifdef __FreeBSD__
+#include <unistd.h>
+#endif
+
 #ifdef _WIN32
 #include "WbWindowsRegistry.hpp"
 
@@ -43,6 +47,11 @@ typedef void(WINAPI *PGNSI)(LPSYSTEM_INFO);
 #include <sys/sysctl.h>
 #endif
 
+#ifdef __FreeBSD__
+#include <sys/types.h>
+#include <sys/sysctl.h>
+#endif
+
 #ifdef __WIN32
 static quint32 gDeviceId = 0;
 static quint32 gVendorId = 0;
@@ -166,6 +175,8 @@ WbSysInfo::WbPlatform WbSysInfo::platform() {
   return MACOS_PLATFORM;
 #elif defined(_WIN32)
   return WIN32_PLATFORM;
+#elif defined(__FreeBSD__)
+  return FREEBSD_PLATFORM;
 #else
 #error unsupported platform
 #endif
@@ -187,6 +198,9 @@ const QString &WbSysInfo::platformShortName() {
 #elif defined(_WIN32)
   static const QString platformShortName = "windows";
   return platformShortName;
+#elif defined(__FreeBSD__)
+  static const QString platformShortName = "freebsd";
+  return platformShortName;
 #else
 #error unsupported platform
 #endif
@@ -206,6 +220,11 @@ const QString &WbSysInfo::processor() {
   processor = buf;
 #elif defined(__linux__)
   processor = linuxCpuModelName();
+#elif defined(__FreeBSD__)
+  size_t buflen = 100;
+  char buf[buflen];
+  sysctlbyname("hw.model", &buf, &buflen, NULL, 0);
+  processor = buf;
 #endif
   return processor;
 }
@@ -297,6 +316,10 @@ int WbSysInfo::coreCount() {
   kr = host_info(mach_host_self(), HOST_BASIC_INFO, (host_info_t)&hostinfo, &count);
   if (kr == KERN_SUCCESS)
     coreCount = hostinfo.avail_cpus;
+
+#elif defined(__FreeBSD__)
+  size_t buflen = sizeof(coreCount);
+  sysctlbyname("kern.smp.cores", &coreCount, &buflen, NULL, 0);
 #endif
 
   if (coreCount < 1)
@@ -321,7 +344,9 @@ const QString &WbSysInfo::linuxCpuModelName() {
   }
   return cpuinfo;
 }
+#endif
 
+#if defined(__linux__) || defined(__FreeBSD__)
 bool WbSysInfo::isRootUser() {
   return geteuid() == 0;
 }
@@ -391,6 +416,18 @@ bool WbSysInfo::isVirtualMachine() {
 #ifdef __APPLE__
   if (system("ioreg -l | grep -e Manufacturer -e 'Vendor Name' | grep -E 'VMware|VirtualBox|Oracle|Parallels' > /dev/null") ==
       0) {
+    virtualMachine = 1;
+    return true;
+  }
+#endif
+#ifdef __FreeBSD
+  size_t buflen = 100;
+  char buf[buflen];
+  if (sysctlbyname("kern.vm_guest", &buf, &buflen, NULL, 0) != 0) {
+    virtualMachine = 1;
+    return true;  // unable to determine, assuming true
+  }
+  if (strcmp(buf, "none") != 0) {
     virtualMachine = 1;
     return true;
   }
