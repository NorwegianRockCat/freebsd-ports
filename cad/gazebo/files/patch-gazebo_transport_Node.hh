--- gazebo/transport/Node.hh.orig	2021-04-02 01:08:12 UTC
+++ gazebo/transport/Node.hh
@@ -18,7 +18,18 @@
 #ifndef GAZEBO_TRANSPORT_NODE_HH_
 #define GAZEBO_TRANSPORT_NODE_HH_
 
-#include <tbb/task.h>
+#ifdef emit
+#define HAD_EMIT
+#undef emit
+#endif
+
+#include <tbb/task_group.h>
+
+#ifdef HAD_EMIT
+#undef HAD_EMIT
+#define emit
+#endif
+
 #include <boost/bind.hpp>
 #include <boost/enable_shared_from_this.hpp>
 #include <map>
@@ -36,7 +47,7 @@ namespace gazebo
   {
     /// \cond
     /// \brief Task used by Node::Publish to publish on a one-time publisher
-    class GZ_TRANSPORT_VISIBLE PublishTask : public tbb::task
+    class GZ_TRANSPORT_VISIBLE PublishTask
     {
       /// \brief Constructor
       /// \param[in] _pub Publisher to publish the message on.
@@ -51,14 +62,13 @@ namespace gazebo
 
       /// \brief Overridden function from tbb::task that exectues the
       /// publish task.
-      public: tbb::task *execute()
+      public: void operator()()
               {
                 this->pub->WaitForConnection();
                 this->pub->Publish(*this->msg, true);
                 this->pub->SendMessage();
                 delete this->msg;
                 this->pub.reset();
-                return NULL;
               }
 
       /// \brief Pointer to the publisher.
@@ -159,10 +169,9 @@ namespace gazebo
                   const google::protobuf::Message &_message)
               {
                 transport::PublisherPtr pub = this->Advertise<M>(_topic);
-                PublishTask *task = new(tbb::task::allocate_root())
-                  PublishTask(pub, _message);
+                PublishTask *task = new PublishTask(pub, _message);
 
-                tbb::task::enqueue(*task);
+                taskGroup.run(*task);
                 return;
               }
 
@@ -428,6 +437,9 @@ namespace gazebo
       private: boost::recursive_mutex processIncomingMutex;
 
       private: bool initialized;
+
+      /// \brief TBB task group.
+      private: tbb::task_group taskGroup;
     };
     /// \}
   }
