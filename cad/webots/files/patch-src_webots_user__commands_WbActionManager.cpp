--- src/webots/user_commands/WbActionManager.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/user_commands/WbActionManager.cpp
@@ -17,7 +17,7 @@
 #include "WbSimulationState.hpp"
 #include "WbUndoStack.hpp"
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 #include <QtCore/QCoreApplication>
 #endif
 #include <QtWidgets/QAction>
