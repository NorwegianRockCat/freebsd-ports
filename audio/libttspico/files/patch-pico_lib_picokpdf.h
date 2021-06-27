--- pico/lib/picokpdf.h.orig	2013-03-26 11:18:28 UTC
+++ pico/lib/picokpdf.h
@@ -77,7 +77,7 @@ typedef enum {
     PICOKPDF_KPDFTYPE_PHS
 } picokpdf_kpdftype_t;
 
-pico_status_t picokpdf_specializePdfKnowledgeBase(picoknow_KnowledgeBase this,
+pico_status_t picokpdf_specializePdfKnowledgeBase(picoknow_KnowledgeBase self,
                                               picoos_Common common,
                                               const picokpdf_kpdftype_t type);
 
@@ -132,9 +132,9 @@ typedef struct picokpdf_pdfphs {
 } picokpdf_pdfphs_t;
 
 /* return kb pdf for usage in PU */
-picokpdf_PdfDUR picokpdf_getPdfDUR(picoknow_KnowledgeBase this);
-picokpdf_PdfMUL picokpdf_getPdfMUL(picoknow_KnowledgeBase this);
-picokpdf_PdfPHS picokpdf_getPdfPHS(picoknow_KnowledgeBase this);
+picokpdf_PdfDUR picokpdf_getPdfDUR(picoknow_KnowledgeBase self);
+picokpdf_PdfMUL picokpdf_getPdfMUL(picoknow_KnowledgeBase self);
+picokpdf_PdfPHS picokpdf_getPdfPHS(picoknow_KnowledgeBase self);
 
 
 /* ************************************************************/
@@ -142,7 +142,7 @@ picokpdf_PdfPHS picokpdf_getPdfPHS(picoknow_KnowledgeB
 /* ************************************************************/
 
 /* e.g. */
-/*picoos_uint8 picokpdf_pdfDURgetEle(const picokpdf_PdfDUR this,
+/*picoos_uint8 picokpdf_pdfDURgetEle(const picokpdf_PdfDUR self,
                                    const picoos_uint16 row,
                                    const picoos_uint16 col,
                                    picoos_uint16 *val);
