--- pico/lib/picotrns.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picotrns.h
@@ -166,17 +166,17 @@ picotrns_SimpleTransducer picotrns_newSimpleTransducer
                                               picoos_Common common,
                                               picoos_uint16 maxAltDescLen);
 
-pico_status_t picotrns_disposeSimpleTransducer(picotrns_SimpleTransducer * this,
+pico_status_t picotrns_disposeSimpleTransducer(picotrns_SimpleTransducer * self,
         picoos_MemoryManager mm);
 
 pico_status_t  picotrns_stInitialize(picotrns_SimpleTransducer transducer);
 
-pico_status_t picotrns_stAddWithPlane(picotrns_SimpleTransducer this, picoos_char * inStr, picoos_uint8 plane);
+pico_status_t picotrns_stAddWithPlane(picotrns_SimpleTransducer self, picoos_char * inStr, picoos_uint8 plane);
 
-pico_status_t picotrns_stTransduce(picotrns_SimpleTransducer this, picokfst_FST fst);
+pico_status_t picotrns_stTransduce(picotrns_SimpleTransducer self, picokfst_FST fst);
 
 pico_status_t picotrns_stGetSymSequence(
-        picotrns_SimpleTransducer this,
+        picotrns_SimpleTransducer self,
         picoos_uint8 * outputSymIds,
         picoos_uint32 maxOutputSymIds);
 
