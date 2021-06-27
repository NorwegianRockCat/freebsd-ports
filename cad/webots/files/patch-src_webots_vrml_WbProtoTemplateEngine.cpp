--- src/webots/vrml/WbProtoTemplateEngine.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/vrml/WbProtoTemplateEngine.cpp
@@ -64,6 +64,9 @@ bool WbProtoTemplateEngine::generate(const QString &lo
 #ifdef __linux__
   tags["context"] = QString("os = \"linux\",");
 #endif
+#ifdef __FreeBSD__
+  tags["context"] = QString("os = \"freebsd\",");
+#endif
 #ifdef __APPLE__
   tags["context"] = QString("os = \"mac\",");
 #endif
