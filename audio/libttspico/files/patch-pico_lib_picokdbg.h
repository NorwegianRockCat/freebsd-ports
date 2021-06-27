--- pico/lib/picokdbg.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picokdbg.h
@@ -49,7 +49,7 @@ extern "C" {
 /**
  * to be used by picorsrc only
  */
-pico_status_t picokdbg_specializeDbgKnowledgeBase(picoknow_KnowledgeBase this,
+pico_status_t picokdbg_specializeDbgKnowledgeBase(picoknow_KnowledgeBase self,
                                                   picoos_Common common);
 
 typedef struct picokdbg_dbg *picokdbg_Dbg;
@@ -57,7 +57,7 @@ typedef struct picokdbg_dbg *picokdbg_Dbg;
 /**
  * return kb Phones for usage in PU
  */
-picokdbg_Dbg picokdbg_getDbg(picoknow_KnowledgeBase this);
+picokdbg_Dbg picokdbg_getDbg(picoknow_KnowledgeBase self);
 
 
 /* phone ID - phone symbol conversion functions */
