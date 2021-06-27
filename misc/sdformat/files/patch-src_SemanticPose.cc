--- src/SemanticPose.cc.orig	2021-02-11 19:56:10 UTC
+++ src/SemanticPose.cc
@@ -125,7 +125,7 @@ Errors SemanticPose::Resolve(
 
   ignition::math::Pose3d pose;
   errors = resolvePose(pose, *graph, relativeTo, resolveTo);
-  pose *= this->RawPose();
+  pose = pose * this->RawPose();
 
   if (errors.empty())
   {
