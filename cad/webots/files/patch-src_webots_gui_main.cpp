--- src/webots/gui/main.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/main.cpp
@@ -68,7 +68,7 @@ static void catchMessageOutput(QtMsgType type, const Q
 
   QString message = msg;
   if (context.file != NULL)
-    message += QString("(%s:%u, %s)").arg(context.file).arg(context.line).arg(context.function);
+    message += QString("(%1:%2, %3)").arg(context.file).arg(context.line).arg(context.function);
   switch (type) {
     case QtInfoMsg:
       fprintf(stderr, "Info: %s\n", message.toUtf8().constData());
@@ -115,6 +115,9 @@ int main(int argc, char *argv[]) {
 
 #ifdef __linux__
   // on Linux, the webots binary is located in $WEBOTS_HOME/bin/webots-bin
+  const QString webotsDirPath = QDir(QFileInfo(argv[0]).absolutePath() + "/..").canonicalPath();
+#elif defined(__FreeBSD__)
+  // on FreeBSD, the webots binary is also located in $WEBOTS_HOME/bin/webots-bin
   const QString webotsDirPath = QDir(QFileInfo(argv[0]).absolutePath() + "/..").canonicalPath();
 #elif defined(__APPLE__)
   // on macOS, the webots binary is located in $WEBOTS_HOME/Contents/MacOS/webots-bin
