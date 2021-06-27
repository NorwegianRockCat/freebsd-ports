--- gazebo/transport/ConnectionManager.cc.orig	2021-05-06 10:19:44 UTC
+++ gazebo/transport/ConnectionManager.cc
@@ -28,28 +28,26 @@ using namespace gazebo;
 using namespace transport;
 
 /// TBB task to process nodes.
-class TopicManagerProcessTask : public tbb::task
+class TopicManagerProcessTask
 {
   /// Implements the necessary execute function
-  public: tbb::task *execute()
+  public: void operator()() const
           {
             TopicManager::Instance()->ProcessNodes();
-            return NULL;
           }
 };
 
 /// TBB task to establish subscriber to publisher connection.
-class TopicManagerConnectionTask : public tbb::task
+class TopicManagerConnectionTask
 {
   /// \brief Constructor.
   /// \param[in] _pub Publish message
   public: explicit TopicManagerConnectionTask(msgs::Publish _pub) : pub(_pub) {}
 
   /// Implements the necessary execute function
-  public: tbb::task *execute()
+  public: void operator()() const
           {
             TopicManager::Instance()->ConnectSubToPub(pub);
-            return NULL;
           }
 
   /// \brief Publish message
@@ -69,7 +67,7 @@ ConnectionManager::ConnectionManager()
 }
 
 //////////////////////////////////////////////////
-ConnectionManager::~ConnectionManager()
+ConnectionManager::~ConnectionManager() noexcept
 {
   boost::mutex::scoped_lock lock(this->updateMutex);
   this->eventConnections.clear();
@@ -274,9 +272,8 @@ void ConnectionManager::RunUpdate()
 
   // Use TBB to process nodes. Need more testing to see if this makes
   // a difference.
-  // TopicManagerProcessTask *task = new(tbb::task::allocate_root())
-  //   TopicManagerProcessTask();
-  // tbb::task::enqueue(*task);
+  // TopicManagerProcessTask *task = new TopicManagerProcessTask();
+  // taskGroup.run(*task);
   boost::recursive_mutex::scoped_lock lock(this->connectionMutex);
 
   TopicManager::Instance()->ProcessNodes();
@@ -401,9 +398,8 @@ void ConnectionManager::ProcessMessage(const std::stri
     if (pub.host() != this->serverConn->GetLocalAddress() ||
         pub.port() != this->serverConn->GetLocalPort())
     {
-      TopicManagerConnectionTask *task = new(tbb::task::allocate_root())
-      TopicManagerConnectionTask(pub);
-      tbb::task::enqueue(*task);
+      TopicManagerConnectionTask *task = new TopicManagerConnectionTask(pub);
+      taskGroup.run(*task);
     }
   }
   // publisher_subscribe. This occurs when we try to subscribe to a topic, and
