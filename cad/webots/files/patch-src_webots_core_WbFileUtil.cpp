--- src/webots/core/WbFileUtil.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbFileUtil.cpp
@@ -251,7 +251,7 @@ void WbFileUtil::revealInFileManager(const QString &fi
        << "-e"
        << "end tell";
   QProcess::startDetached("osascript", args);
-#else  // __linux__
+#else  // __linux__ || __FreeBSD__
   QProcess process;
   process.start("xdg-mime", QStringList() << "query"
                                           << "default"
