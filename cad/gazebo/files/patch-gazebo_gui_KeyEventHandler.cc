--- gazebo/gui/KeyEventHandler.cc.orig	2021-04-02 01:08:12 UTC
+++ gazebo/gui/KeyEventHandler.cc
@@ -101,7 +101,7 @@ void KeyEventHandler::Add(const std::string &_name,
 void KeyEventHandler::Remove(const std::string &_name,
     std::list<Filter> &_list)
 {
-  _list.remove(Filter(_name, NULL));
+  _list.remove(Filter(_name, 0));
 }
 
 /////////////////////////////////////////////////
