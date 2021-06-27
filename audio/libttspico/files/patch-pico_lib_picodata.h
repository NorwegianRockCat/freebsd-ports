--- pico/lib/picodata.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picodata.h
@@ -80,16 +80,16 @@ picodata_CharBuffer picodata_newCharBuffer(picoos_Memo
         picoos_Common common, picoos_objsize_t size);
 
 void picodata_disposeCharBuffer(picoos_MemoryManager mm,
-                                picodata_CharBuffer * this);
+                                picodata_CharBuffer * self);
 
 /* should not be used for PUs but only for feeding the initial cb */
-pico_status_t picodata_cbPutCh(register picodata_CharBuffer this, picoos_char ch);
+pico_status_t picodata_cbPutCh(picodata_CharBuffer self, picoos_char ch);
 
 /* should not be used for PUs other than first PU in the chain (picotok) */
-picoos_int16 picodata_cbGetCh(register picodata_CharBuffer this);
+picoos_int16 picodata_cbGetCh(picodata_CharBuffer self);
 
 /* reset cb (as if after newCharBuffer) */
-pico_status_t picodata_cbReset (register picodata_CharBuffer this);
+pico_status_t picodata_cbReset (picodata_CharBuffer self);
 
 /* ** CharBuffer item functions, cf. below in items section ****/
 
@@ -298,7 +298,7 @@ typedef struct picodata_itemhead
      PICO_EXC_BUF_UNDERFLOW  <- cb not empty, but no valid item
      PICO_EXC_BUF_OVERFLOW   <- buf not large enough
 */
-pico_status_t picodata_cbGetItem(register picodata_CharBuffer this,
+pico_status_t picodata_cbGetItem(picodata_CharBuffer self,
         picoos_uint8 *buf, const picoos_uint16 blenmax,
         picoos_uint16 *blen);
 
@@ -310,7 +310,7 @@ pico_status_t picodata_cbGetItem(register picodata_Cha
      PICO_EXC_BUF_UNDERFLOW  <- cb not empty, but no valid item
      PICO_EXC_BUF_OVERFLOW   <- buf not large enough
 */
-pico_status_t picodata_cbGetSpeechData(register picodata_CharBuffer this,
+pico_status_t picodata_cbGetSpeechData(picodata_CharBuffer self,
         picoos_uint8 *buf, const picoos_uint16 blenmax,
         picoos_uint16 *blen);
 
@@ -321,12 +321,12 @@ pico_status_t picodata_cbGetSpeechData(register picoda
      PICO_EXC_BUF_UNDERFLOW  <- no valid item in buf
      PICO_EXC_BUF_OVERFLOW   <- cb not large enough
 */
-pico_status_t picodata_cbPutItem(register picodata_CharBuffer this,
+pico_status_t picodata_cbPutItem(picodata_CharBuffer self,
         const picoos_uint8 *buf, const picoos_uint16 blenmax,
         picoos_uint16 *blen);
 
 /* unsafe, just for measuring purposes */
-picoos_uint8 picodata_cbGetFrontItemType(register picodata_CharBuffer this);
+picoos_uint8 picodata_cbGetFrontItemType(picodata_CharBuffer self);
 
 /* ***************************************************************
  *                   items: support function                     *
@@ -490,18 +490,18 @@ picodata_ProcessingUnit picodata_newProcessingUnit(
 
 void picodata_disposeProcessingUnit(
         picoos_MemoryManager mm,
-        picodata_ProcessingUnit * this);
+        picodata_ProcessingUnit * self);
 
-picodata_CharBuffer picodata_getCbIn(picodata_ProcessingUnit this);
-picodata_CharBuffer picodata_getCbOut(picodata_ProcessingUnit this);
-pico_status_t picodata_setCbIn(picodata_ProcessingUnit this, picodata_CharBuffer cbIn);
-pico_status_t picodata_setCbOut(picodata_ProcessingUnit this, picodata_CharBuffer cbOut);
+picodata_CharBuffer picodata_getCbIn(picodata_ProcessingUnit self);
+picodata_CharBuffer picodata_getCbOut(picodata_ProcessingUnit self);
+pico_status_t picodata_setCbIn(picodata_ProcessingUnit self, picodata_CharBuffer cbIn);
+pico_status_t picodata_setCbOut(picodata_ProcessingUnit self, picodata_CharBuffer cbOut);
 
 /* protected */
-typedef pico_status_t (* picodata_puInitializeMethod) (register picodata_ProcessingUnit this, picoos_int32 mode);
-typedef pico_status_t (* picodata_puTerminateMethod) (register picodata_ProcessingUnit this);
-typedef picodata_step_result_t (* picodata_puStepMethod) (register picodata_ProcessingUnit this, picoos_int16 mode, picoos_uint16 * numBytesOutput);
-typedef pico_status_t (* picodata_puSubDeallocateMethod) (register picodata_ProcessingUnit this, picoos_MemoryManager mm);
+typedef pico_status_t (* picodata_puInitializeMethod) (picodata_ProcessingUnit self, picoos_int32 mode);
+typedef pico_status_t (* picodata_puTerminateMethod) (picodata_ProcessingUnit self);
+typedef picodata_step_result_t (* picodata_puStepMethod) (picodata_ProcessingUnit self, picoos_int16 mode, picoos_uint16 * numBytesOutput);
+typedef pico_status_t (* picodata_puSubDeallocateMethod) (picodata_ProcessingUnit self, picoos_MemoryManager mm);
 
 typedef struct picodata_processing_unit
 {
