--- pico/lib/picoos.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picoos.h
@@ -129,7 +129,7 @@ typedef struct picoos_common {
 
 picoos_Common picoos_newCommon(picoos_MemoryManager mm);
 
-void picoos_disposeCommon(picoos_MemoryManager mm, picoos_Common * this);
+void picoos_disposeCommon(picoos_MemoryManager mm, picoos_Common * self);
 
 
 /* *****************************************************************/
@@ -161,8 +161,8 @@ picoos_MemoryManager picoos_newMemoryManager(
 void picoos_disposeMemoryManager(picoos_MemoryManager * mm);
 
 
-void * picoos_allocate(picoos_MemoryManager this, picoos_objsize_t byteSize);
-void picoos_deallocate(picoos_MemoryManager this, void * * adr);
+void * picoos_allocate(picoos_MemoryManager self, picoos_objsize_t byteSize);
+void picoos_deallocate(picoos_MemoryManager self, void * * adr);
 
 /* the following memory manager routines are for testing and
    debugging purposes */
@@ -190,14 +190,14 @@ void picoos_protectMem(
         picoos_bool enable);
 
 void picoos_getMemUsage(
-        picoos_MemoryManager this,
+        picoos_MemoryManager self,
         picoos_bool resetIncremental,
         picoos_int32 *usedBytes,
         picoos_int32 *incrUsedBytes,
         picoos_int32 *maxUsedBytes);
 
 void picoos_showMemUsage(
-        picoos_MemoryManager this,
+        picoos_MemoryManager self,
         picoos_bool incremental,
         picoos_bool resetIncremental);
 
@@ -221,30 +221,30 @@ void picoos_setErrorMsg(picoos_char * dst, picoos_objs
 picoos_ExceptionManager picoos_newExceptionManager(picoos_MemoryManager mm);
 
 void picoos_disposeExceptionManager(picoos_MemoryManager mm,
-        picoos_ExceptionManager * this);
+        picoos_ExceptionManager * self);
 
 
-void picoos_emReset(picoos_ExceptionManager this);
+void picoos_emReset(picoos_ExceptionManager self);
 
-/* For convenience, this function returns the resulting exception code of 'this'
+/* For convenience, this function returns the resulting exception code of 'self'
  * (as would be returned by emGetExceptionCode).
  * The return value therefore is NOT the status of raising
  * the error! */
-pico_status_t picoos_emRaiseException(picoos_ExceptionManager this,
+pico_status_t picoos_emRaiseException(picoos_ExceptionManager self,
         pico_status_t exceptionCode, picoos_char * baseMessage, picoos_char * fmt, ...);
 
-pico_status_t picoos_emGetExceptionCode(picoos_ExceptionManager this);
+pico_status_t picoos_emGetExceptionCode(picoos_ExceptionManager self);
 
-void picoos_emGetExceptionMessage(picoos_ExceptionManager this, picoos_char * msg, picoos_uint16 maxsize);
+void picoos_emGetExceptionMessage(picoos_ExceptionManager self, picoos_char * msg, picoos_uint16 maxsize);
 
-void picoos_emRaiseWarning(picoos_ExceptionManager this,
+void picoos_emRaiseWarning(picoos_ExceptionManager self,
         pico_status_t warningCode, picoos_char * baseMessage, picoos_char * fmt, ...);
 
-picoos_uint8 picoos_emGetNumOfWarnings(picoos_ExceptionManager this);
+picoos_uint8 picoos_emGetNumOfWarnings(picoos_ExceptionManager self);
 
-pico_status_t picoos_emGetWarningCode(picoos_ExceptionManager this, picoos_uint8 warnNum);
+pico_status_t picoos_emGetWarningCode(picoos_ExceptionManager self, picoos_uint8 warnNum);
 
-void picoos_emGetWarningMessage(picoos_ExceptionManager this, picoos_uint8 warnNum, picoos_char * msg, picoos_uint16 maxsize);
+void picoos_emGetWarningMessage(picoos_ExceptionManager self, picoos_uint8 warnNum, picoos_char * msg, picoos_uint16 maxsize);
 
 
 
