--- pico/lib/picoctrl.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picoctrl.h
@@ -48,7 +48,7 @@ extern "C" {
 
 typedef struct picoctrl_engine * picoctrl_Engine;
 
-picoos_int16 picoctrl_isValidEngineHandle(picoctrl_Engine this);
+picoos_int16 picoctrl_isValidEngineHandle(picoctrl_Engine self);
 
 picoctrl_Engine picoctrl_newEngine (
         picoos_MemoryManager mm,
@@ -59,7 +59,7 @@ picoctrl_Engine picoctrl_newEngine (
 void picoctrl_disposeEngine(
         picoos_MemoryManager mm,
         picorsrc_ResourceManager rm,
-        picoctrl_Engine * this
+        picoctrl_Engine * self
         );
 
 pico_status_t picoctrl_engFeedText(
@@ -72,7 +72,7 @@ pico_status_t picoctrl_engReset(
         picoctrl_Engine engine,
         picoos_int32 resetMode);
 
-picoos_Common picoctrl_engGetCommon(picoctrl_Engine this);
+picoos_Common picoctrl_engGetCommon(picoctrl_Engine self);
 
 picodata_step_result_t picoctrl_engFetchOutputItemBytes(
         picoctrl_Engine engine,
@@ -82,7 +82,7 @@ picodata_step_result_t picoctrl_engFetchOutputItemByte
 );
 
 void picoctrl_engResetExceptionManager(
-        picoctrl_Engine this
+        picoctrl_Engine self
         );
 
 
