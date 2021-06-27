--- resources/projects/plugins/physics/physics.c.orig	2020-12-15 08:37:01 UTC
+++ resources/projects/plugins/physics/physics.c
@@ -13,7 +13,7 @@ extern "C" {
 
 /* The rest of this file is necessary to make the plugin work under */
 /* Windows and macOS */
-#ifndef __linux__
+#if !defined(__linux__) && !defined(__FreeBSD__)
 
 dGeomID (*dWebotsGetGeomFromDEFProc)(const char *) = NULL;
 dBodyID (*dWebotsGetBodyFromDEFProc)(const char *) = NULL;
