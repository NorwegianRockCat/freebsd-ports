--- storage/innobase/snappy.cmake.orig	2021-08-02 18:07:03 UTC
+++ storage/innobase/snappy.cmake
@@ -17,13 +17,19 @@ SET(WITH_INNODB_SNAPPY AUTO CACHE STRING
 
 MACRO (MYSQL_CHECK_SNAPPY)
   IF (WITH_INNODB_SNAPPY STREQUAL "ON" OR WITH_INNODB_SNAPPY STREQUAL "AUTO")
-    CHECK_INCLUDE_FILES(snappy-c.h HAVE_SNAPPY_H)
-    CHECK_LIBRARY_EXISTS(snappy snappy_uncompress "" HAVE_SNAPPY_SHARED_LIB)
+    find_path(SNAPPY_INCLUDE_DIR NAMES snappy-c.h)
+    find_library(SNAPPY_LIBRARY NAMES snappy)
+    get_filename_component(SNAPPY_LIBDIR ${SNAPPY_LIBRARY} DIRECTORY)
+    IF (SNAPPY_INCLUDE_DIR)
+      SET(HAVE_SNAPPY_H 1)
+    ENDIF()
+    CHECK_LIBRARY_EXISTS(snappy snappy_uncompress ${SNAPPY_LIBDIR} HAVE_SNAPPY_SHARED_LIB)
+#MESSAGE(STATUS "HAVE_SNAPPY_H=${HAVE_SNAPPY_H} HAVE_SNAPPY_SHARED_LIB=${HAVE_SNAPPY_SHARED_LIB} SNAPPY_LIBDIR=${SNAPPY_LIBDIR} ")
 
     IF(HAVE_SNAPPY_SHARED_LIB AND HAVE_SNAPPY_H)
       SET(HAVE_INNODB_SNAPPY TRUE)
       ADD_DEFINITIONS(-DHAVE_SNAPPY=1)
-      LINK_LIBRARIES(snappy)
+      LINK_LIBRARIES(${SNAPPY_LIBRARY})
     ELSE()
       IF (WITH_INNODB_SNAPPY STREQUAL "ON")
         MESSAGE(FATAL_ERROR "Required snappy library is not found")
