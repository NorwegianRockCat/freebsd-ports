--- pico/lib/picokdt.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picokdt.h
@@ -73,7 +73,7 @@ typedef enum {
     PICOKDT_KDTTYPE_PAM
 } picokdt_kdttype_t;
 
-pico_status_t picokdt_specializeDtKnowledgeBase(picoknow_KnowledgeBase this,
+pico_status_t picokdt_specializeDtKnowledgeBase(picoknow_KnowledgeBase self,
                                                 picoos_Common common,
                                                 const picokdt_kdttype_t type);
 
@@ -91,12 +91,12 @@ typedef struct picokdt_dtacc  * picokdt_DtACC;
 typedef struct picokdt_dtpam  * picokdt_DtPAM;
 
 /* return kb decision tree for usage in PU */
-picokdt_DtPosP picokdt_getDtPosP(picoknow_KnowledgeBase this);
-picokdt_DtPosD picokdt_getDtPosD(picoknow_KnowledgeBase this);
-picokdt_DtG2P  picokdt_getDtG2P (picoknow_KnowledgeBase this);
-picokdt_DtPHR  picokdt_getDtPHR (picoknow_KnowledgeBase this);
-picokdt_DtACC  picokdt_getDtACC (picoknow_KnowledgeBase this);
-picokdt_DtPAM  picokdt_getDtPAM (picoknow_KnowledgeBase this);
+picokdt_DtPosP picokdt_getDtPosP(picoknow_KnowledgeBase self);
+picokdt_DtPosD picokdt_getDtPosD(picoknow_KnowledgeBase self);
+picokdt_DtG2P  picokdt_getDtG2P (picoknow_KnowledgeBase self);
+picokdt_DtPHR  picokdt_getDtPHR (picoknow_KnowledgeBase self);
+picokdt_DtACC  picokdt_getDtACC (picoknow_KnowledgeBase self);
+picokdt_DtPAM  picokdt_getDtPAM (picoknow_KnowledgeBase self);
 
 
 /* number of attributes (= input vector size) for each tree type */
@@ -137,15 +137,15 @@ typedef struct {
    for every tree type there is a constructInVec function to construct
    the size-optimized input vector for the tree using the input map
    tables that are part of the decistion tree knowledge base. The
-   constructed input vector is stored in the tree object (this->invec
-   and this->inveclen) and will be used in the following call to the
+   constructed input vector is stored in the tree object (self->invec
+   and self->inveclen) and will be used in the following call to the
    classify function.
 
    classify:
    for every tree type there is a classify function to apply the
    decision tree to the previously constructed input vector. The
    size-optimized, encoded output is stored in the tree object
-   (this->outval) and will be used in the following call to the
+   (self->outval) and will be used in the following call to the
    decompose function. Where needed (hitory attribute) the direct tree
    output is returned by the classify function in a variable.
 
@@ -208,22 +208,22 @@ typedef struct {
    returns:       TRUE if okay, FALSE otherwise
    note:          use PICOKDT_OUTSIDEGRAPH* for att values outside context
 */
-picoos_uint8 picokdt_dtPosPconstructInVec(const picokdt_DtPosP this,
+picoos_uint8 picokdt_dtPosPconstructInVec(const picokdt_DtPosP self,
                                           const picoos_uint8 *graph,
                                           const picoos_uint16 graphlen,
                                           const picoos_uint8 specgraphflag);
 
 
-/* classify a previously constructed input vector using tree 'this'
+/* classify a previously constructed input vector using tree 'self'
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPosPclassify(const picokdt_DtPosP this);
+picoos_uint8 picokdt_dtPosPclassify(const picokdt_DtPosP self);
 
 /* decompose the tree output and return the class in dtres
    dtres:         POS or POSgroup ID classification result
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPosPdecomposeOutClass(const picokdt_DtPosP this,
+picoos_uint8 picokdt_dtPosPdecomposeOutClass(const picokdt_DtPosP self,
                                              picokdt_classify_result_t *dtres);
 
 
@@ -248,26 +248,26 @@ picoos_uint8 picokdt_dtPosPdecomposeOutClass(const pic
                     if POS in fol* unique use this POS instead of real
                     history, use reverse output mapping in these cases
 */
-picoos_uint8 picokdt_dtPosDconstructInVec(const picokdt_DtPosD this,
+picoos_uint8 picokdt_dtPosDconstructInVec(const picokdt_DtPosD self,
                                           const picoos_uint16 * input);
 
 
-/* classify a previously constructed input vector using tree 'this'
+/* classify a previously constructed input vector using tree 'self'
    treeout:       direct tree output value
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPosDclassify(const picokdt_DtPosD this,
+picoos_uint8 picokdt_dtPosDclassify(const picokdt_DtPosD self,
                                     picoos_uint16 *treeout);
 
 /* decompose the tree output and return the class in dtres
    dtres:         POS classification result
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPosDdecomposeOutClass(const picokdt_DtPosD this,
+picoos_uint8 picokdt_dtPosDdecomposeOutClass(const picokdt_DtPosD self,
                                              picokdt_classify_result_t *dtres);
 
 /* convert (unique) POS index into corresponding tree output index */
-picoos_uint8 picokdt_dtPosDreverseMapOutFixed(const picokdt_DtPosD this,
+picoos_uint8 picokdt_dtPosDreverseMapOutFixed(const picokdt_DtPosD self,
                                           const picoos_uint16 inval,
                                           picoos_uint16 *outval,
                                           picoos_uint16 *outfallbackval);
@@ -294,7 +294,7 @@ picoos_uint8 picokdt_dtPosDreverseMapOutFixed(const pi
    phonech1-3:    the three following phon chunks predicted (right-to-left)
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtG2PconstructInVec(const picokdt_DtG2P this,
+picoos_uint8 picokdt_dtG2PconstructInVec(const picokdt_DtG2P self,
                                          const picoos_uint8 *graph,
                                          const picoos_uint16 graphlen,
                                          const picoos_uint8 count,
@@ -306,18 +306,18 @@ picoos_uint8 picokdt_dtG2PconstructInVec(const picokdt
                                          const picoos_uint16 phonech2,
                                          const picoos_uint16 phonech3);
 
-/* classify a previously constructed input vector using tree 'this'
+/* classify a previously constructed input vector using tree 'self'
    treeout:       direct tree output value
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtG2Pclassify(const picokdt_DtG2P this,
+picoos_uint8 picokdt_dtG2Pclassify(const picokdt_DtG2P self,
                                    picoos_uint16 *treeout);
 
 /* decompose the tree output and return the class vector in dtvres
    dtvres:        phones vector classification result
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtG2PdecomposeOutClass(const picokdt_DtG2P this,
+picoos_uint8 picokdt_dtG2PdecomposeOutClass(const picokdt_DtG2P self,
                                   picokdt_classify_vecresult_t *dtvres);
 
 
@@ -345,7 +345,7 @@ picoos_uint8 picokdt_dtG2PdecomposeOutClass(const pico
    returns:         TRUE if okay, FALSE otherwise
    note:            use PICOKDT_EPSILON for att values outside context
 */
-picoos_uint8 picokdt_dtPHRconstructInVec(const picokdt_DtPHR this,
+picoos_uint8 picokdt_dtPHRconstructInVec(const picokdt_DtPHR self,
                                          const picoos_uint8 pre2,
                                          const picoos_uint8 pre1,
                                          const picoos_uint8 src,
@@ -355,16 +355,16 @@ picoos_uint8 picokdt_dtPHRconstructInVec(const picokdt
                                          const picoos_uint16 nrwordsfol,
                                          const picoos_uint16 nrsyllsfol);
 
-/* classify a previously constructed input vector using tree 'this'
+/* classify a previously constructed input vector using tree 'self'
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPHRclassify(const picokdt_DtPHR this);
+picoos_uint8 picokdt_dtPHRclassify(const picokdt_DtPHR self);
 
 /* decompose the tree output and return the class vector in dtres
    dtres:         phrasing classification result
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPHRdecomposeOutClass(const picokdt_DtPHR this,
+picoos_uint8 picokdt_dtPHRdecomposeOutClass(const picokdt_DtPHR self,
                                             picokdt_classify_result_t *dtres);
 
 
@@ -400,7 +400,7 @@ picoos_uint8 picokdt_dtPHRdecomposeOutClass(const pico
    returns:         TRUE if okay, FALSE otherwise
    note:            use PICOKDT_EPSILON for att 0-4 values outside context
 */
-picoos_uint8 picokdt_dtACCconstructInVec(const picokdt_DtACC this,
+picoos_uint8 picokdt_dtACCconstructInVec(const picokdt_DtACC self,
                                          const picoos_uint8 pre2,
                                          const picoos_uint8 pre1,
                                          const picoos_uint8 src,
@@ -415,18 +415,18 @@ picoos_uint8 picokdt_dtACCconstructInVec(const picokdt
                                          const picoos_uint16 footwordsfol,
                                          const picoos_uint16 footsyllsfol);
 
-/* classify a previously constructed input vector using tree 'this'
+/* classify a previously constructed input vector using tree 'self'
    treeout:       direct tree output value
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtACCclassify(const picokdt_DtACC this,
+picoos_uint8 picokdt_dtACCclassify(const picokdt_DtACC self,
                                    picoos_uint16 *treeout);
 
 /* decompose the tree output and return the class vector in dtres
    dtres:         phrasing classification result
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtACCdecomposeOutClass(const picokdt_DtACC this,
+picoos_uint8 picokdt_dtACCdecomposeOutClass(const picokdt_DtACC self,
                                             picokdt_classify_result_t *dtres);
 
 
@@ -440,20 +440,20 @@ picoos_uint8 picokdt_dtACCdecomposeOutClass(const pico
    veclen:        length of vec in number of bytes
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPAMconstructInVec(const picokdt_DtPAM this,
+picoos_uint8 picokdt_dtPAMconstructInVec(const picokdt_DtPAM self,
                                          const picoos_uint8 *vec,
                                          const picoos_uint8 veclen);
 
-/* classify a previously constructed input vector using tree 'this'
+/* classify a previously constructed input vector using tree 'self'
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPAMclassify(const picokdt_DtPAM this);
+picoos_uint8 picokdt_dtPAMclassify(const picokdt_DtPAM self);
 
 /* decompose the tree output and return the class in dtres
    dtres:         phones vector classification result
    returns:       TRUE if okay, FALSE otherwise
 */
-picoos_uint8 picokdt_dtPAMdecomposeOutClass(const picokdt_DtPAM this,
+picoos_uint8 picokdt_dtPAMdecomposeOutClass(const picokdt_DtPAM self,
                                             picokdt_classify_result_t *dtres);
 
 #ifdef __cplusplus
