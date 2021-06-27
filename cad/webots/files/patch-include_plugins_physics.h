--- include/plugins/physics.h.orig	2020-12-15 08:37:01 UTC
+++ include/plugins/physics.h
@@ -39,7 +39,7 @@ DLLEXPORT void webots_physics_cleanup();
 DLLEXPORT void webots_physics_draw(int pass, const char *view);
 
 /* utility functions to be used in your callback functions */
-#ifndef __linux__
+#if !defined(__linux__) && !defined(__FreeBSD__)
 extern dGeomID (*dWebotsGetGeomFromDEFProc)(const char *);
 extern dBodyID (*dWebotsGetBodyFromDEFProc)(const char *);
 extern dJointGroupID (*dWebotsGetContactJointGroupProc)();
