--- src/webots/gui/WbRobotWindow.hpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbRobotWindow.hpp
@@ -63,7 +63,7 @@ public slots: (private)
   static QString escapeString(const QString &text);
 
 private slots:
-#if defined(__APPLE__) || defined(__linux__)
+#if defined(__APPLE__) || defined(__linux__) || defined(__FreeBSD__)
   void notifyLoadCompleted();
   void notifyAckReceived();
 #endif
