--- projects/robots/robotis/darwin-op/libraries/robotis-op2/robotis/Framework/src/minIni/minIni.c.orig	2020-12-15 08:37:01 UTC
+++ projects/robots/robotis/darwin-op/libraries/robotis-op2/robotis/Framework/src/minIni/minIni.c
@@ -126,7 +126,7 @@ static TCHAR *save_strncpy(TCHAR *dest, const TCHAR *s
 
   switch (option) {
   case QUOTE_NONE:
-    _tcsncpy(dest,source,maxlen);
+    _tcsncpy(dest,source,maxlen-1);
     dest[maxlen-1]='\0';
     break;
   case QUOTE_ENQUOTE:
