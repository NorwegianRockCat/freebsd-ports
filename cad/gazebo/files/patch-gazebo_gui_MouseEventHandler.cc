--- gazebo/gui/MouseEventHandler.cc.orig	2021-07-28 18:53:01 UTC
+++ gazebo/gui/MouseEventHandler.cc
@@ -121,7 +121,7 @@ void MouseEventHandler::Add(const std::string &_name,
 void MouseEventHandler::Remove(const std::string &_name,
     std::list<Filter> &_list)
 {
-  _list.remove(Filter(_name, NULL));
+  _list.remove(Filter(_name, MouseEventFilter()));
 }
 
 /////////////////////////////////////////////////
