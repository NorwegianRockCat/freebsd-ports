--- src/libros/connection_manager.cpp.orig	2021-04-06 18:38:49 UTC
+++ src/libros/connection_manager.cpp
@@ -178,7 +178,7 @@ void ConnectionManager::udprosIncomingConnection(const
   ConnectionPtr conn(boost::make_shared<Connection>());
   addConnection(conn);
 
-  conn->initialize(transport, true, NULL);
+  conn->initialize(transport, true, 0);
   onConnectionHeaderReceived(conn, header);
 }
 
