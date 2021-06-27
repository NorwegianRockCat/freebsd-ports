--- src/controller/c/system.c.orig	2020-12-15 08:37:01 UTC
+++ src/controller/c/system.c
@@ -100,7 +100,7 @@ static const char *wbu_system_tmpdir() {
   const size_t len = strlen(LOCALAPPDATA) + 6;  // adding "\\Temp"
   tmpdir = malloc(len);
   snprintf(tmpdir, len, "%s\\Temp", LOCALAPPDATA);
-#elif defined(__linux__)
+#elif defined(__linux__) || defined(__FreeBSD__)
   // if the ~/.WEBOTS_TMPDIR directory exists and contains some webots-* files,
   // use it as the tmpdir, otherwise fallback to /tmp
   const char *HOME = getenv("HOME");
