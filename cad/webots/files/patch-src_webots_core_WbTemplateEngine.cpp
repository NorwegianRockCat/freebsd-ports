--- src/webots/core/WbTemplateEngine.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbTemplateEngine.cpp
@@ -48,7 +48,7 @@ void WbTemplateEngine::copyModuleToTemporaryFile(QStri
 #ifdef _WIN32
     filters << "*.dll";
 #endif
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
     filters << "*.so";
 #endif
 #ifdef __APPLE__
@@ -130,7 +130,7 @@ bool WbTemplateEngine::generate(QHash<QString, QString
 #ifdef _WIN32
   tags["cpath"] = "package.cpath = package.cpath .. \";?.dll\"";
 #endif
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   tags["cpath"] = "";
 #endif
 #ifdef __APPLE__
