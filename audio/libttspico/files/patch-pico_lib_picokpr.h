--- pico/lib/picokpr.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picokpr.h
@@ -51,7 +51,7 @@ extern "C" {
 /* to be used by picorsrc only */
 /* ************************************************************/
 
-pico_status_t picokpr_specializePreprocKnowledgeBase(picoknow_KnowledgeBase this,
+pico_status_t picokpr_specializePreprocKnowledgeBase(picoknow_KnowledgeBase self,
                                                      picoos_Common common);
 
 
@@ -87,7 +87,7 @@ typedef picoos_uint32 picokpr_TokSetWP;
 typedef struct picokpr_preproc * picokpr_Preproc;
 
 /* return kb preproc for usage in PU */
-picokpr_Preproc picokpr_getPreproc(picoknow_KnowledgeBase this);
+picokpr_Preproc picokpr_getPreproc(picoknow_KnowledgeBase self);
 
 
 /* *****************************************************************************/
