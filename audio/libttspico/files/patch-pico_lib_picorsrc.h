--- pico/lib/picorsrc.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picorsrc.h
@@ -97,7 +97,7 @@ typedef struct picorsrc_resource         * picorsrc_Re
 
 picorsrc_ResourceManager picorsrc_newResourceManager(picoos_MemoryManager mm, picoos_Common common /* , picoos_char * configFile */);
 
-void picorsrc_disposeResourceManager(picoos_MemoryManager mm, picorsrc_ResourceManager * this);
+void picorsrc_disposeResourceManager(picoos_MemoryManager mm, picorsrc_ResourceManager * self);
 
 
 /* **************************************************************************
@@ -113,14 +113,14 @@ picoos_int16 picoctrl_isValidResourceHandle(picorsrc_R
 
 /* load resource file. the type of resource file, magic numbers, checksum etc. are in the header, then follows the directory
  * (with fixed structure per resource type), then the knowledge bases themselves (as byte streams) */
-pico_status_t picorsrc_loadResource(picorsrc_ResourceManager this,
+pico_status_t picorsrc_loadResource(picorsrc_ResourceManager self,
         picoos_char * fileName, picorsrc_Resource * resource);
 
 /* unload resource file. (warn if resource file is busy) */
-pico_status_t picorsrc_unloadResource(picorsrc_ResourceManager this, picorsrc_Resource * rsrc);
+pico_status_t picorsrc_unloadResource(picorsrc_ResourceManager self, picorsrc_Resource * rsrc);
 
 
-pico_status_t picorsrc_createDefaultResource(picorsrc_ResourceManager this /*,
+pico_status_t picorsrc_createDefaultResource(picorsrc_ResourceManager self /*,
         picorsrc_Resource * resource */);
 
 
@@ -134,14 +134,14 @@ pico_status_t picorsrc_rsrcGetName(picorsrc_Resource r
  ****************************************************************************/
 
 
-pico_status_t picorsrc_createVoiceDefinition(picorsrc_ResourceManager this,
+pico_status_t picorsrc_createVoiceDefinition(picorsrc_ResourceManager self,
         picoos_char * voiceName);
 
 
-pico_status_t picorsrc_releaseVoiceDefinition(picorsrc_ResourceManager this,
+pico_status_t picorsrc_releaseVoiceDefinition(picorsrc_ResourceManager self,
         picoos_char * voiceName);
 
-pico_status_t picorsrc_addResourceToVoiceDefinition(picorsrc_ResourceManager this,
+pico_status_t picorsrc_addResourceToVoiceDefinition(picorsrc_ResourceManager self,
         picoos_char * voiceName, picoos_char * resourceName);
 
 /* **************************************************************************
@@ -171,10 +171,10 @@ typedef struct picorsrc_voice {
 
 
 /* create voice, given a voice name. the corresponding lock counts are incremented */
-pico_status_t picorsrc_createVoice(picorsrc_ResourceManager this, const picoos_char * voiceName, picorsrc_Voice * voice);
+pico_status_t picorsrc_createVoice(picorsrc_ResourceManager self, const picoos_char * voiceName, picorsrc_Voice * voice);
 
 /* dispose voice. the corresponding lock counts are decremented. */
-pico_status_t picorsrc_releaseVoice(picorsrc_ResourceManager this, picorsrc_Voice * voice);
+pico_status_t picorsrc_releaseVoice(picorsrc_ResourceManager self, picorsrc_Voice * voice);
 
 #ifdef __cplusplus
 }
