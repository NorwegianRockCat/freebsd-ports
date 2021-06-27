--- gazebo/transport/ConnectionManager.hh.orig	2021-04-02 01:08:12 UTC
+++ gazebo/transport/ConnectionManager.hh
@@ -50,7 +50,7 @@ namespace gazebo
       private: ConnectionManager();
 
       /// \brief Destructor
-      private: virtual ~ConnectionManager();
+      private: virtual ~ConnectionManager() noexcept;
 
       /// \brief Initialize the connection manager.
       /// \param[in] _masterHost Host where the master is running.
@@ -193,6 +193,9 @@ namespace gazebo
 
       /// \brief Condition used for synchronization
       private: boost::condition_variable namespaceCondition;
+
+      /// \brief TBB task group.
+      private: tbb::task_group taskGroup;
 
       // Singleton implementation
       private: friend class SingletonT<ConnectionManager>;
