--- pico/lib/picokfst.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picokfst.h
@@ -87,7 +87,7 @@ enum picofst_transduction_mode {
 /* calculates a small number of data (e.g. addresses) from kb for fast access.
  * This data is encapsulated in a picokfst_FST that can later be retrieved
  * with picokfst_getFST. */
-pico_status_t picokfst_specializeFSTKnowledgeBase(picoknow_KnowledgeBase this,
+pico_status_t picokfst_specializeFSTKnowledgeBase(picoknow_KnowledgeBase self,
                                                   picoos_Common common);
 
 
@@ -99,7 +99,7 @@ pico_status_t picokfst_specializeFSTKnowledgeBase(pico
 typedef struct picokfst_fst * picokfst_FST;
 
 /* return kb FST for usage in PU */
-picokfst_FST picokfst_getFST(picoknow_KnowledgeBase this);
+picokfst_FST picokfst_getFST(picoknow_KnowledgeBase self);
 
 
 /* ************************************************************/
@@ -108,31 +108,31 @@ picokfst_FST picokfst_getFST(picoknow_KnowledgeBase th
 
 /* returns transduction mode specified with rule sources;
    result to be interpreted as set of picofst_transduction_mode */
-picoos_uint8 picokfst_kfstGetTransductionMode(picokfst_FST this);
+picoos_uint8 picokfst_kfstGetTransductionMode(picokfst_FST self);
 
 /* returns number of states and number of pair classes in FST;
    legal states are 1..nrStates, legal classes are 1..nrClasses */
-void picokfst_kfstGetFSTSizes (picokfst_FST this, picoos_int32 *nrStates, picoos_int32 *nrClasses);
+void picokfst_kfstGetFSTSizes (picokfst_FST self, picoos_int32 *nrStates, picoos_int32 *nrClasses);
 
 /* starts search for all pairs with input symbol 'inSym'; '*inSymFound' returns whether
    such pairs exist at all; '*searchState' returns a search state to be used in
    subsequent calls to function 'picokfst_kfstGetNextPair', which must be used
    to get the symbol pairs */
-void picokfst_kfstStartPairSearch (picokfst_FST this, picokfst_symid_t inSym,
+void picokfst_kfstStartPairSearch (picokfst_FST self, picokfst_symid_t inSym,
                                           picoos_bool * inSymFound, picoos_int32 * searchState);
 
 /* gets next pair for input symbol specified with preceding call to 'picokfst_kfstStartPairSearch';
    '*searchState' maintains the search state, 'pairFound' returns whether any more pair was found,
    '*outSym' returns the output symbol of the found pair, and '*pairClass' returns the
    transition class of the found symbol pair */
-void picokfst_kfstGetNextPair (picokfst_FST this, picoos_int32 * searchState,
+void picokfst_kfstGetNextPair (picokfst_FST self, picoos_int32 * searchState,
                                       picoos_bool * pairFound,
                                       picokfst_symid_t * outSym, picokfst_class_t * pairClass);
 
 /* attempts to do FST transition from state 'startState' with pair class 'transClass';
    if such a transition exists, 'endState' returns the end state of the transition (> 0),
    otherwise 'endState' returns <= 0 */
-void picokfst_kfstGetTrans (picokfst_FST this, picokfst_state_t startState, picokfst_class_t transClass,
+void picokfst_kfstGetTrans (picokfst_FST self, picokfst_state_t startState, picokfst_class_t transClass,
                                    picokfst_state_t * endState);
 
 /* starts search for all pairs with input epsilon symbol and all correponding
@@ -141,7 +141,7 @@ void picokfst_kfstGetTrans (picokfst_FST this, picokfs
    '*inEpsTransFound' returns whether any such transition was found at all;
    if so, '*searchState' returns a search state to be used in subsequent calls
    to 'picokfst_kfstGetNextInEpsTrans' */
-void picokfst_kfstStartInEpsTransSearch (picokfst_FST this, picokfst_state_t startState,
+void picokfst_kfstStartInEpsTransSearch (picokfst_FST self, picokfst_state_t startState,
                                                 picoos_bool * inEpsTransFound, picoos_int32 * searchState);
 
 /* gets next FST transition with a pair with empty input symbol starting from a state
@@ -150,7 +150,7 @@ void picokfst_kfstStartInEpsTransSearch (picokfst_FST 
    whether a new transition with input epsilon was found, '*outSym 'returns
    the output symbol of the found pair, and '*endState' returns the end state
    of the found transition with that pair */
-void picokfst_kfstGetNextInEpsTrans (picokfst_FST this, picoos_int32 * searchState,
+void picokfst_kfstGetNextInEpsTrans (picokfst_FST self, picoos_int32 * searchState,
                                             picoos_bool * inEpsTransFound,
                                             picokfst_symid_t * outSym, picokfst_state_t * endState);
 
@@ -159,7 +159,7 @@ void picokfst_kfstGetNextInEpsTrans (picokfst_FST this
    always do a last transition with a termination symbol pair, this function
    defines a state as an accepting state if there is transition to state 1
    with the terminator symbol pair */
-picoos_bool picokfst_kfstIsAcceptingState (picokfst_FST this, picokfst_state_t state);
+picoos_bool picokfst_kfstIsAcceptingState (picokfst_FST self, picokfst_state_t state);
 
 #ifdef __cplusplus
 }
