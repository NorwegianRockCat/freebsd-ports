--- src/webots/control/WbLanguageTools.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/control/WbLanguageTools.cpp
@@ -97,7 +97,7 @@ QString WbLanguageTools::pythonCommand(QString &shortV
     pythonCommand = "!";
   } else
     shortVersion = QString(version[0][0]) + version[0][2];
-#else  // macOS and Linux
+#else  // macOS, Linux, or FreeBSD
   QProcess process;
   process.setProcessEnvironment(env);
   process.start(pythonCommand, QStringList() << "-c"
