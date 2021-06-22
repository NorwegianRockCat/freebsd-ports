--- src/plant_flag_tool.h.orig	2020-05-13 21:54:17 UTC
+++ src/plant_flag_tool.h
@@ -29,13 +29,8 @@
 #ifndef PLANT_FLAG_TOOL_H
 #define PLANT_FLAG_TOOL_H
 
+#include <OGRE/OgrePrerequisites.h>
 #include <rviz/tool.h>
-
-namespace Ogre
-{
-class SceneNode;
-class Vector3;
-}
 
 namespace rviz
 {
