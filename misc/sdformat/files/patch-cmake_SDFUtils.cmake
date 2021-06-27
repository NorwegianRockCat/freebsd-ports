--- cmake/SDFUtils.cmake.orig	2021-02-11 19:56:10 UTC
+++ cmake/SDFUtils.cmake
@@ -152,9 +152,11 @@ macro (sdf_build_tests)
       message(FATAL_ERROR "Unsupported platform")
     endif()
 
-    add_dependencies(${BINARY_NAME}
-      gtest gtest_main ${sdf_target}
-      )
+    if (BUILD_TESTING)
+      add_dependencies(${BINARY_NAME}
+        gtest gtest_main ${sdf_target}
+        )
+    endif()
 
     link_directories(${IGNITION-MATH_LIBRARY_DIRS})
 
