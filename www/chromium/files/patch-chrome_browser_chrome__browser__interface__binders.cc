--- chrome/browser/chrome_browser_interface_binders.cc.orig	2021-07-19 18:45:08 UTC
+++ chrome/browser/chrome_browser_interface_binders.cc
@@ -146,7 +146,7 @@
 #include "mojo/public/cpp/bindings/self_owned_receiver.h"
 #endif  // defined(OS_ANDROID)
 
-#if defined(OS_WIN) || defined(OS_MAC) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_MAC) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS)
 #include "chrome/browser/ui/webui/discards/discards.mojom.h"
 #include "chrome/browser/ui/webui/discards/discards_ui.h"
@@ -612,7 +612,7 @@ void PopulateChromeFrameBinders(
       base::BindRepeating(&BindSpeechRecognitionRecognizerClientHandler));
 #endif
 
-#if defined(OS_WIN) || defined(OS_MAC) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MAC) || defined(OS_LINUX) || defined(OS_BSD)
   if (base::FeatureList::IsEnabled(features::kWebAppWindowControlsOverlay) &&
       !render_frame_host->GetParent()) {
     map->Add<chrome::mojom::DraggableRegions>(
@@ -854,7 +854,7 @@ void PopulateChromeWebUIFrameBinders(
   }
 #endif
 
-#if defined(OS_WIN) || defined(OS_MAC) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_MAC) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS)
   RegisterWebUIControllerInterfaceBinder<discards::mojom::DetailsProvider,
                                          DiscardsUI>(map);
