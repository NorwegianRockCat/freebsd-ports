--- include/actionlib/server/simple_action_server_imp.h.orig	2020-08-21 15:47:46 UTC
+++ include/actionlib/server/simple_action_server_imp.h
@@ -64,7 +64,7 @@ SimpleActionServer<ActionSpec>::SimpleActionServer(std
 template<class ActionSpec>
 SimpleActionServer<ActionSpec>::SimpleActionServer(std::string name, bool auto_start)
 : new_goal_(false), preempt_request_(false), new_goal_preempt_request_(false), execute_callback_(
-    NULL), execute_thread_(NULL), need_to_terminate_(false)
+    0), execute_thread_(NULL), need_to_terminate_(false)
 {
   // create the action server
   as_ = boost::shared_ptr<ActionServer<ActionSpec> >(new ActionServer<ActionSpec>(n_, name,
@@ -117,7 +117,7 @@ template<class ActionSpec>
 SimpleActionServer<ActionSpec>::SimpleActionServer(ros::NodeHandle n, std::string name,
   bool auto_start)
 : n_(n), new_goal_(false), preempt_request_(false), new_goal_preempt_request_(false),
-  execute_callback_(NULL), execute_thread_(NULL), need_to_terminate_(false)
+  execute_callback_(0), execute_thread_(NULL), need_to_terminate_(false)
 {
   // create the action server
   as_ = boost::shared_ptr<ActionServer<ActionSpec> >(new ActionServer<ActionSpec>(n, name,
