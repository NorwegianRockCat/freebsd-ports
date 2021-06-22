--- src/libros/subscription.cpp.orig	2021-04-06 18:38:49 UTC
+++ src/libros/subscription.cpp
@@ -583,7 +583,7 @@ void Subscription::pendingConnectionDone(const Pending
     if (pub_link->setHeader(h))
     {
       ConnectionPtr connection(boost::make_shared<Connection>());
-      connection->initialize(udp_transport, false, NULL);
+      connection->initialize(udp_transport, false, 0);
       connection->setHeader(h);
       pub_link->initialize(connection);
 
