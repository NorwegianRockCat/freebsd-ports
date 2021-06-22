--- cmake/genmsg-extras.cmake.em.orig	2020-04-07 00:56:17 UTC
+++ cmake/genmsg-extras.cmake.em
@@ -275,8 +275,7 @@ macro(generate_messages)
 
     unset(_dep_msg_paths_file CACHE)
     set(filename "share/${dep}/cmake/${dep}-msg-paths.cmake")
-    find_file(_dep_msg_paths_file ${filename} PATHS ${workspaces}
-      NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
+    find_file(_dep_msg_paths_file ${filename} PATHS ${workspaces})
     if("${_dep_msg_paths_file}" STREQUAL "_dep_msg_paths_file-NOTFOUND")
       message(FATAL_ERROR "Could not find '${filename}' (searched in '${workspaces}').")
     endif()
