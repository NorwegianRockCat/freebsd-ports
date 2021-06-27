--- gazebo/transport/Connection.hh.orig	2021-04-02 01:08:12 UTC
+++ gazebo/transport/Connection.hh
@@ -17,7 +17,18 @@
 #ifndef _CONNECTION_HH_
 #define _CONNECTION_HH_
 
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
 #include <google/protobuf/message.h>
 
 #include <boost/asio.hpp>
@@ -54,7 +65,7 @@ namespace gazebo
     /// \cond
     /// \brief A task instance that is created when data is read from
     /// a socket and used by TBB
-    class GZ_TRANSPORT_VISIBLE ConnectionReadTask : public tbb::task
+    class GZ_TRANSPORT_VISIBLE ConnectionReadTask
     {
       /// \brief Constructor
       /// \param[_in] _func Boost function pointer, which is the function
@@ -68,12 +79,10 @@ namespace gazebo
               {
               }
 
-      /// \bried Overridden function from tbb::task that exectues the data
-      /// callback.
-      public: tbb::task *execute()
+      /// \brief Executes the data callback for TBB.
+      public: void operator()() const
               {
                 this->func(this->data);
-                return NULL;
               }
 
       /// \brief The boost function pointer
@@ -310,9 +319,9 @@ namespace gazebo
 
                 if (!_e && !transport::is_stopped())
                 {
-                  ConnectionReadTask *task = new(tbb::task::allocate_root())
-                        ConnectionReadTask(boost::get<0>(_handler), data);
-                  tbb::task::enqueue(*task);
+                  ConnectionReadTask *task =
+                        new ConnectionReadTask(boost::get<0>(_handler), data);
+                  taskGroup.run(*task);
 
                   // Non-tbb version:
                   // boost::get<0>(_handler)(data);
@@ -465,6 +474,9 @@ namespace gazebo
 
       /// \brief True if the connection is open.
       private: bool isOpen;
+
+      /// \brief TBB task group.
+      private: tbb::task_group taskGroup;
     };
     /// \}
   }
