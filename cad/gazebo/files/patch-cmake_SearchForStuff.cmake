--- cmake/SearchForStuff.cmake.orig	2021-04-02 01:08:12 UTC
+++ cmake/SearchForStuff.cmake
@@ -829,15 +829,17 @@ endif()
 find_path(QWT_INCLUDE_DIR NAMES qwt.h PATHS
   /usr/include
   /usr/local/include
+  /usr/local/include/qt5
   /usr/local/lib/qwt.framework/Headers
   ${QWT_WIN_INCLUDE_DIR}
 
-  PATH_SUFFIXES qwt qwt5
+  PATH_SUFFIXES qwt qwt6
 )
 
-find_library(QWT_LIBRARY NAMES qwt-qt5 qwt PATHS
+find_library(QWT_LIBRARY NAMES qwt qwt6 PATHS
   /usr/lib
   /usr/local/lib
+  /usr/local/lib/qt5
   /usr/local/lib/qwt.framework
   ${QWT_WIN_LIBRARY_DIR}
 )
