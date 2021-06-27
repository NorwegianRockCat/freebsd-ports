--- pico/lib/picoapid.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picoapid.h
@@ -57,7 +57,7 @@ typedef struct pico_system {
 
 /* declared in picoapi.c */
 extern int is_valid_system_handle(pico_System system);
-extern picoos_Common pico_sysGetCommon(pico_System this);
+extern picoos_Common pico_sysGetCommon(pico_System self);
 
 
 #if 0
