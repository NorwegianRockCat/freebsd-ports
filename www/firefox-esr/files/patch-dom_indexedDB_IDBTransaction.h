--- dom/indexedDB/IDBTransaction.h.orig	2021-06-30 08:50:48 UTC
+++ dom/indexedDB/IDBTransaction.h
@@ -16,6 +16,8 @@
 #include "nsString.h"
 #include "nsTArray.h"
 
+#undef CLEANUP
+
 class nsPIDOMWindowInner;
 
 namespace mozilla {
