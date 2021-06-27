--- scripts/packaging/webots_distro.c.orig	2020-12-15 08:37:01 UTC
+++ scripts/packaging/webots_distro.c
@@ -31,7 +31,7 @@
 
 #ifdef __APPLE__
 #include <CommonCrypto/CommonDigest.h>
-#elif defined(__linux__)
+#elif defined(__linux__) || defined(__FreeBSD__)
 #include <openssl/md5.h>
 #else  // _WIN32
 #include <windows.h>
@@ -74,7 +74,7 @@
 // globals
 
 static FILE *fd;
-static int mode;  // either DEB, ISS or MAC
+static int mode;  // either ISS, MAC, DEB, SNAP, or BSD
 #ifdef __x86_64__
 static const char *arch = "amd64";
 static const char *arch2 = "x86-64";
@@ -92,13 +92,15 @@ static char distribution_path[256];
 #define MAC 2   // macOS shell script to create dmg file                    -> webots*.mac
 #define DEB 3   // Linux shell script to create a deb and a tarball package -> webots.deb
 #define SNAP 4  // Linux shell script to create a snap package              -> webots.snap
+#define BSD 5   // BSD shell script to install everything                   -> webots.bsd
 
-// ORable flags for file type defined in files.txt [linux,mac,windows,exe,dll,sig]
+// ORable flags for file type defined in files.txt [bsd,linux,mac,windows,exe,dll,sig]
 #define TYPE_LINUX 1
 #define TYPE_MAC 2
 #define TYPE_WINDOWS 4
 #define TYPE_EXE 8
 #define TYPE_DLL 16
+#define TYPE_BSD 32
 
 #define UNIX2DOS(s, d)  \
   {                     \
@@ -179,7 +181,7 @@ static void test_file(const char *file) {
 }
 
 static void test_dir(const char *dir) {
-  char dir1[BUFFER_SIZE];
+  char dir1[2 * BUFFER_SIZE];
   if (strcmp(dir, "util") == 0)
     return;  // this one is created and copied from elsewhere
   sprintf(dir1, "../../%s", dir);
@@ -258,6 +260,9 @@ static void copy_file(const char *file) {
       fprintf(fd, "cp -a $WEBOTS_HOME/%s $DESTDIR/usr/share/%s/%s\n", protected_filename2,
               application_name_lowercase_and_dashes, dest2);
       break;
+    case BSD:
+      fprintf(fd, "cp -a ${WEBOTS_HOME}/%s ${DESTDIR}${PREFIX}/share/%s/%s\n",
+              protected_filename2, application_name_lowercase_and_dashes, dest2);
 #endif
     default:
       break;
@@ -318,6 +323,8 @@ static void make_dir(const char *directory) {
       break;
     case SNAP:
       fprintf(fd, "mkdir $DESTDIR/usr/share/%s/%s\n", application_name_lowercase_and_dashes, directory);
+    case BSD:
+      fprintf(fd, "mkdir -p ${DESTDIR}${PREFIX}/share/%s/%s\n", application_name_lowercase_and_dashes, directory);
     default:
       break;
   }
@@ -503,6 +510,9 @@ static void create_file(const char *name, int m) {
     case SNAP:
       snprintf(filename, 256, "%s.snap", application_name_lowercase_and_dashes);
       break;
+    case BSD:
+      snprintf(filename, 256, "%s.bsd", application_name_lowercase_and_dashes);
+      break;
     default:
       break;
   }
@@ -604,6 +614,18 @@ static void create_file(const char *name, int m) {
       fprintf(fd, "mkdir -p $DESTDIR/usr/lib\n");
       fprintf(fd, "mkdir -p $DESTDIR/usr/lib/x86_64-linux-gnu\n");
       fprintf(fd, "mkdir $DESTDIR/usr/share/%s\n", application_name_lowercase_and_dashes);
+      break;
+    case BSD:
+      fprintf(fd, "#!/bin/sh -e\n");
+      fprintf(fd, "# run this auto-generated script to install %s for BSD in \"$DESTDIR\"\n\n", application_name);
+      fprintf(fd, "if [ -z \"${DESTDIR}\" ]; then echo \"No DESTDIR!\"; exit 1; fi\n");
+      fprintf(fd, "if [ -z \"${WEBOTS_HOME}\" ]; then echo \"No WEBOTS_HOME!\"; exit 1; fi\n\n");
+      fprintf(fd, "mkdir -p ${DESTDIR}${PREFIX}\n");
+      fprintf(fd, "mkdir -p ${DESTDIR}${PREFIX}/bin\n");
+      fprintf(fd, "mkdir -p ${DESTDIR}${PREFIX}/lib\n");
+      fprintf(fd, "mkdir -p ${DESTDIR}${PREFIX}/share\n");
+      fprintf(fd, "mkdir -p ${DESTDIR}${PREFIX}/share/%s\n", application_name_lowercase_and_dashes);
+      break;
     default:
       break;
   }
@@ -636,6 +658,9 @@ static void create_file(const char *name, int m) {
       l++;
       do {
         switch (buffer[l++]) {
+          case 'b':
+            type |= TYPE_BSD;
+            break;
           case 'l':
             type |= TYPE_LINUX;
             break;
@@ -661,18 +686,18 @@ static void create_file(const char *name, int m) {
           else
             l++;
       } while (buffer[l] != ']');
-      if ((type & (TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS)) == 0)
-        type |= (TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS);
+      if ((type & (TYPE_BSD | TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS)) == 0)
+        type |= (TYPE_BSD | TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS);
       l = i;
     } else {
       l++;
-      type = TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS;
+      type = TYPE_BSD | TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS;
     }
     buffer[l--] = '\0';
     if (buffer[l] == '/') {
       buffer[l] = '\0';
       if (((type & TYPE_LINUX) && (mode == DEB || mode == SNAP)) || ((type & TYPE_WINDOWS) && (mode == ISS)) ||
-          ((type & TYPE_MAC) && (mode == MAC)))
+          ((type & TYPE_MAC) && (mode == MAC)) || ((type & TYPE_BSD) && (mode == BSD)))
         make_dir(buffer);
     }
   }
@@ -708,6 +733,9 @@ static void create_file(const char *name, int m) {
       l++;
       do {
         switch (buffer[l++]) {
+          case 'b':
+            type |= TYPE_BSD;
+            break;
           case 'l':
             type |= TYPE_LINUX;
             break;
@@ -736,9 +764,9 @@ static void create_file(const char *name, int m) {
           else
             l++;
       } while (buffer[l] != ']');
-      if ((type & (TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS)) == 0)
-        type |= (TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS);
-      if (type & TYPE_DLL && (mode == MAC || mode == DEB || mode == SNAP)) {  // prefix "lib" to the basename
+      if ((type & (TYPE_BSD | TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS)) == 0)
+        type |= (TYPE_BSD | TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS);
+      if (type & TYPE_DLL && (mode == MAC || mode == BSD || mode == DEB || mode == SNAP)) {  // prefix "lib" to the basename
         j = i - 1;
         while (buffer[j] != '/' && j >= 0)
           j--;
@@ -778,7 +806,7 @@ static void create_file(const char *name, int m) {
           buffer[i++] = 'i';
           buffer[i++] = 'b';
         }
-      } else { /* linux */
+      } else { /* linux or bsd */
         if (type & TYPE_DLL) {
           buffer[i++] = '.';
           buffer[i++] = 's';
@@ -788,13 +816,13 @@ static void create_file(const char *name, int m) {
       l = i;
     } else {
       l++;
-      type = TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS;
+      type = TYPE_BSD | TYPE_LINUX | TYPE_MAC | TYPE_WINDOWS;
     }
     buffer[l] = '\0';
     if (buffer[l - 1] == '/')
       continue;
     if (((type & TYPE_LINUX) && (mode == DEB || mode == SNAP)) || ((type & TYPE_WINDOWS) && (mode == ISS)) ||
-        ((type & TYPE_MAC) && (mode == MAC))) {
+        ((type & TYPE_MAC) && (mode == MAC)) || ((type & TYPE_BSD) && (mode == BSD))) {
       copy_file(buffer);
       // copy the .*.wbproj hidden files
       if (strcasecmp(&buffer[l - 4], ".wbt") == 0 && strstr(buffer, "/worlds/")) {
@@ -1324,6 +1352,9 @@ static void create_file(const char *name, int m) {
       add_ros_dependencies("$DESTDIR/usr/share/webots");
       break;
     }
+    case BSD:
+      fprintf(fd, "cp ${WEBOTS_HOME}/scripts/packaging/webots_snap.desktop ${DESTDIR}${PREFIX}/share/webots/resources/webots.desktop\n");
+      break;
     default:
       break;
   }
@@ -1337,6 +1368,9 @@ static void create_file(const char *name, int m) {
   } else if (mode == SNAP) {
     snprintf(buffer, BUFFER_SIZE, "chmod a+x %s.snap", application_name_lowercase_and_dashes);
     system(buffer);
+  } else if (mode == BSD) {
+    snprintf(buffer, BUFFER_SIZE, "chmod a+x %s.bsd", application_name_lowercase_and_dashes);
+    system(buffer);
   }
   printf(": done\n");
   fflush(stdout);
@@ -1459,6 +1493,9 @@ int main(int argc, char *argv[]) {
 #endif
 #ifdef __APPLE__
   create_distributions(MAC);
+#endif
+#ifdef __FreeBSD__
+  create_distributions(BSD);
 #endif
 #ifdef __linux__
   create_distributions(DEB);
