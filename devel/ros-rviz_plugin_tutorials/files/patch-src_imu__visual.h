--- src/imu_visual.h.orig	2020-05-13 21:54:17 UTC
+++ src/imu_visual.h
@@ -30,13 +30,8 @@
 #ifndef IMU_VISUAL_H
 #define IMU_VISUAL_H
 
+#include <OGRE/OgrePrerequisites.h>
 #include <sensor_msgs/Imu.h>
-
-namespace Ogre
-{
-class Vector3;
-class Quaternion;
-}
 
 namespace rviz
 {
