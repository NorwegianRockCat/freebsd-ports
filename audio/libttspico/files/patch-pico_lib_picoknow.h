--- pico/lib/picoknow.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picoknow.h
@@ -164,7 +164,7 @@ typedef enum picoknow_kb_id {
  */
 typedef struct picoknow_knowledge_base * picoknow_KnowledgeBase;
 
-typedef pico_status_t (* picoknow_kbSubDeallocate) (register picoknow_KnowledgeBase this, picoos_MemoryManager mm);
+typedef pico_status_t (* picoknow_kbSubDeallocate) (picoknow_KnowledgeBase self, picoos_MemoryManager mm);
 
 typedef struct picoknow_knowledge_base {
     /* public */
@@ -180,7 +180,7 @@ typedef struct picoknow_knowledge_base {
 
 extern picoknow_KnowledgeBase picoknow_newKnowledgeBase(picoos_MemoryManager mm);
 
-extern void picoknow_disposeKnowledgeBase(picoos_MemoryManager mm, picoknow_KnowledgeBase * this);
+extern void picoknow_disposeKnowledgeBase(picoos_MemoryManager mm, picoknow_KnowledgeBase * self);
 
 #ifdef __cplusplus
 }
