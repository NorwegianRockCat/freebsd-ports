--- chrome/browser/ui/webui/settings/settings_localized_strings_provider.cc.orig	2021-07-19 18:45:10 UTC
+++ chrome/browser/ui/webui/settings/settings_localized_strings_provider.cc
@@ -337,7 +337,7 @@ void AddAppearanceStrings(content::WebUIDataSource* ht
     {"huge", IDS_SETTINGS_HUGE_FONT_SIZE},
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if defined(OS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS)
+#if (defined(OS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS)) || defined(OS_BSD)
     {"systemTheme", IDS_SETTINGS_SYSTEM_THEME},
     {"useSystemTheme", IDS_SETTINGS_USE_SYSTEM_THEME},
     {"classicTheme", IDS_SETTINGS_CLASSIC_THEME},
@@ -345,7 +345,7 @@ void AddAppearanceStrings(content::WebUIDataSource* ht
 #else
     {"resetToDefaultTheme", IDS_SETTINGS_RESET_TO_DEFAULT_THEME},
 #endif
-#if defined(OS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS)
+#if (defined(OS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS)) || defined(OS_BSD)
     {"showWindowDecorations", IDS_SHOW_WINDOW_DECORATIONS},
 #endif
 #if defined(OS_MAC)
