--- pico/bin/pico2wave.c.orig	2021-02-21 10:03:41 UTC
+++ pico/bin/pico2wave.c
@@ -100,6 +100,7 @@ int main(int argc, const char *argv[]) {
     char * lang = "en-US";
     int langIndex = -1, langIndexTmp = -1;
     char * text = NULL;
+    int allocated = 0;
     int8_t * buffer;
     size_t bufferSize = 256;
 
@@ -163,6 +164,7 @@ int main(int argc, const char *argv[]) {
     } else {
         // read from stdin
         size_t len = myread(stdin, &text);
+        allocated = 1;
         // debug buffered read: make this command a pass-though cat-like command and compare input with output
         // printf("read %ld characters\n", len);
         // fwrite(text, 1, len, stdout);
@@ -371,7 +373,7 @@ terminate:
         pico_terminate(&picoSystem);
         picoSystem = NULL;
     }
-    if (text)
+    if (allocated)
       free(text);
     exit(ret);
 }
