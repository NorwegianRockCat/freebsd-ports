--- src/webots/plugins/WbPhysicsPlugin.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/plugins/WbPhysicsPlugin.cpp
@@ -31,7 +31,7 @@
 
 WbPhysicsPlugin *gInstance = NULL;
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 #include "../../../include/plugins/physics.h"
 #else
 extern "C" {
@@ -166,7 +166,7 @@ bool WbPhysicsPlugin::load() {
   if (!WbPlugin::load())
     return false;
 
-#ifndef __linux__
+#if !defined(__linux__) && !defined(__FreeBSD__)
   if (!mFunctions[SPECIAL_INIT]) {
     WbLog::error(tr("Could not find physics_special_init() in '%1' plugin.").arg(name()));
     return false;
