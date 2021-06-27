--- pico/lib/picoklex.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picoklex.h
@@ -45,7 +45,7 @@ extern "C" {
 /* to be used by picorsrc only */
 /* ************************************************************/
 
-pico_status_t picoklex_specializeLexKnowledgeBase(picoknow_KnowledgeBase this,
+pico_status_t picoklex_specializeLexKnowledgeBase(picoknow_KnowledgeBase self,
                                                   picoos_Common common);
 
 
@@ -57,7 +57,7 @@ pico_status_t picoklex_specializeLexKnowledgeBase(pico
 typedef struct picoklex_lex * picoklex_Lex;
 
 /* return kb lex for usage in PU */
-picoklex_Lex picoklex_getLex(picoknow_KnowledgeBase this);
+picoklex_Lex picoklex_getLex(picoknow_KnowledgeBase self);
 
 
 /* ************************************************************/
@@ -106,7 +106,7 @@ typedef struct {
    PICOKLEX_IND_SIZE bytes are used for the index, these ind bytes are
    saved in the WORDINDEX items. If at least one entry is found TRUE
    is returned, FALSE otherwise */
-picoos_uint8 picoklex_lexLookup(const picoklex_Lex this,
+picoos_uint8 picoklex_lexLookup(const picoklex_Lex self,
                                 const picoos_uint8 *graph,
                                 const picoos_uint16 graphlen,
                                 picoklex_lexl_result_t *lexres);
@@ -114,7 +114,7 @@ picoos_uint8 picoklex_lexLookup(const picoklex_Lex thi
 /** lookup lex entry by index ind; ind is a sequence of bytes with
    length indlen (must be equal PICOKLEX_IND_SIZE) that is the content
    of a WORDINDEX item. Returns TRUE if okay, FALSE otherwise */
-picoos_uint8 picoklex_lexIndLookup(const picoklex_Lex this,
+picoos_uint8 picoklex_lexIndLookup(const picoklex_Lex self,
                                    const picoos_uint8 *ind,
                                    const picoos_uint8 indlen,
                                    picoos_uint8 *pos,
