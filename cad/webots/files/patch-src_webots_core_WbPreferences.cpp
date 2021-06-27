--- src/webots/core/WbPreferences.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/webots/core/WbPreferences.cpp
@@ -35,7 +35,7 @@ WbPreferences *WbPreferences::createInstance(const QSt
   if (gInstance)
     delete gInstance;
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
   if (WbSysInfo::isRootUser())
     QSettings::setPath(QSettings::NativeFormat, QSettings::UserScope, "/root/.config/");
 #endif
@@ -65,7 +65,7 @@ WbPreferences::WbPreferences(const QString &companyNam
   setDefault("General/rendering", true);
   setDefault("General/language", "");
   setDefault("General/numberOfThreads", WbSysInfo::coreCount());
-  setDefault("General/checkWebotsUpdateOnStartup", true);
+  setDefault("General/checkWebotsUpdateOnStartup", false);
   setDefault("General/disableSaveWarning", false);
   setDefault("Sound/mute", true);
   setDefault("Sound/volume", 80);
@@ -171,7 +171,7 @@ QString WbPreferences::findPreviousSettingsLocation() 
 
 #ifdef __APPLE__
   QDir preferencesDirectory(QStandardPaths::writableLocation(QStandardPaths::ConfigLocation));
-#else  // __linux__
+#else  // __linux__ || __FreeBSD__
   QDir preferencesDirectory(QStandardPaths::writableLocation(QStandardPaths::ConfigLocation) + "/" + mCompanyName);
 #endif
 
@@ -179,7 +179,7 @@ QString WbPreferences::findPreviousSettingsLocation() 
   QStringList filters;
 #ifdef __APPLE__
   filters << QString("com.%1.%2*.plist").arg(mCompanyName.toLower()).arg(mApplicationName);
-#else  // __linux__
+#else  // __linux__ || __FreeBSD__
   filters << QString("%1*.conf").arg(mApplicationName);
 #endif
   preferencesDirectory.setNameFilters(filters);
@@ -218,7 +218,7 @@ QString WbPreferences::findPreviousSettingsLocation() 
   return lastLocation;
 }
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 void WbPreferences::checkIsWritable() {
   if (!isWritable())
     WbLog::warning(tr("\nPreferences file cannot be overwritten.\n"
