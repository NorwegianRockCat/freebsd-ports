--- src/webots/gui/WbRecentFilesList.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/gui/WbRecentFilesList.cpp
@@ -40,7 +40,7 @@ WbRecentFilesList::WbRecentFilesList(int size, QMenu *
     if (file.isEmpty())
       break;
     mList->append(file);
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
     mActions[i]->setText(escapedText(file));
 #else
     mActions[i]->setText(file);
@@ -61,7 +61,7 @@ void WbRecentFilesList::update() {
   for (int i = 0; i < mMax; i++) {
     if (i < mList->size()) {
       const QString file = mList->at(i);
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
       mActions[i]->setText(escapedText(file));
 #else
       mActions[i]->setText(file);
@@ -99,14 +99,14 @@ void WbRecentFilesList::actionTriggered() {
   if (!action)
     return;
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   emit fileChosen(unescapedText(action->text()));
 #else
   emit fileChosen(action->text());
 #endif
 }
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 // escape all underscores so that they don't get interpreted as hotkeys by Unity
 QString WbRecentFilesList::escapedText(const QString &text) {
   if (qgetenv("XDG_CURRENT_DESKTOP") == "Unity") {
