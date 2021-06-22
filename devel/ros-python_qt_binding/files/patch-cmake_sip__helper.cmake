--- cmake/sip_helper.cmake.orig	2020-06-11 18:51:15 UTC
+++ cmake/sip_helper.cmake
@@ -1,3 +1,7 @@
+# This file includes the following SIPv5 patch by Sean Yen at Microsoft:
+#   https://github.com/ros-visualization/python_qt_binding/pull/94
+#
+
 if(__PYTHON_QT_BINDING_SIP_HELPER_INCLUDED)
   return()
 endif()
@@ -10,15 +14,20 @@ find_package(PythonInterp "${PYTHON_VERSION_MAJOR}.${P
 assert(PYTHON_EXECUTABLE)
 find_package(PythonLibs "${PYTHON_VERSION_MAJOR}.${PYTHON_VERSION_MINOR}" REQUIRED)
 
-execute_process(
-  COMMAND ${PYTHON_EXECUTABLE} -c "import sipconfig; print(sipconfig.Configuration().sip_bin)"
-  OUTPUT_VARIABLE PYTHON_SIP_EXECUTABLE
-  ERROR_QUIET)
+# Prefer SIP 5+ if we have it
+find_program(SIP_EXECUTABLE NAMES sip-build)
 
-if(PYTHON_SIP_EXECUTABLE)
-  string(STRIP ${PYTHON_SIP_EXECUTABLE} SIP_EXECUTABLE)
-else()
-  find_program(SIP_EXECUTABLE sip)
+if(NOT SIP_EXECUTABLE)
+  execute_process(
+    COMMAND ${PYTHON_EXECUTABLE} -c "import sipconfig; print(sipconfig.Configuration().sip_bin)"
+    OUTPUT_VARIABLE PYTHON_SIP_EXECUTABLE
+    ERROR_QUIET)
+
+  if(PYTHON_SIP_EXECUTABLE)
+    string(STRIP ${PYTHON_SIP_EXECUTABLE} SIP_EXECUTABLE)
+  else()
+    find_program(SIP_EXECUTABLE NAMES sip)
+  endif()
 endif()
 
 if(SIP_EXECUTABLE)
@@ -29,6 +38,15 @@ else()
   set(sip_helper_NOTFOUND TRUE)
 endif()
 
+if(sip_helper_FOUND)
+  execute_process(
+    COMMAND ${SIP_EXECUTABLE} -V
+    OUTPUT_VARIABLE SIP_VERSION
+    ERROR_QUIET)
+  string(STRIP ${SIP_VERSION} SIP_VERSION)
+  message(STATUS "SIP binding generator version: ${SIP_VERSION}")
+endif()
+
 #
 # Run the SIP generator and compile the generated code into a library.
 #
@@ -89,31 +107,104 @@ function(build_sip_binding PROJECT_NAME SIP_FILE)
     # SIP configure doesn't handle CMake targets
     catkin_replace_imported_library_targets(LIBRARIES ${LIBRARIES})
 
-    add_custom_command(
-        OUTPUT ${SIP_BUILD_DIR}/Makefile
-        COMMAND ${PYTHON_EXECUTABLE} ${sip_SIP_CONFIGURE} ${SIP_BUILD_DIR} ${SIP_FILE} ${sip_LIBRARY_DIR} \"${INCLUDE_DIRS}\" \"${LIBRARIES}\" \"${LIBRARY_DIRS}\" \"${LDFLAGS_OTHER}\" \"${EXTRA_DEFINES}\"
-        DEPENDS ${sip_SIP_CONFIGURE} ${SIP_FILE} ${sip_DEPENDS}
-        WORKING_DIRECTORY ${sip_SOURCE_DIR}
-        COMMENT "Running SIP generator for ${PROJECT_NAME} Python bindings..."
-    )
+    if(${SIP_VERSION} VERSION_GREATER_EQUAL "5.0.0")
+        # Since v5, SIP implements the backend per PEP 517, PEP 518
+        # Here we synthesize `pyproject.toml` and run `sip-install`
 
-    if(NOT EXISTS "${sip_LIBRARY_DIR}")
+        find_program(QMAKE_EXECUTABLE NAMES qmake REQUIRED)
+
+        file(REMOVE_RECURSE ${SIP_BUILD_DIR})
         file(MAKE_DIRECTORY ${sip_LIBRARY_DIR})
-    endif()
 
-    if(WIN32)
-      set(MAKE_EXECUTABLE NMake.exe)
+        set(SIP_FILES_DIR ${sip_SOURCE_DIR})
+
+        set(SIP_INCLUDE_DIRS "")
+        foreach(_x ${INCLUDE_DIRS})
+          set(SIP_INCLUDE_DIRS "${SIP_INCLUDE_DIRS},\"${_x}\"")
+        endforeach()
+        string(REGEX REPLACE "^," "" SIP_INCLUDE_DIRS ${SIP_INCLUDE_DIRS})
+
+        # SIP expects the libraries WITHOUT the file extension.
+        set(SIP_LIBRARIES "")
+        foreach(_x ${LIBRARIES} ${PYTHON_LIBRARIES})
+          if(WIN32)
+            get_filename_component(_x_NAME "${_x}" NAME_WLE)
+            get_filename_component(_x_DIR "${_x}" DIRECTORY)
+            get_filename_component(_x "${_x_DIR}/${_x_NAME}" ABSOLUTE)
+            set(SIP_LIBRARIES "${SIP_LIBRARIES},\"${_x}\"")
+          else()
+            get_filename_component(_x_NAME "${_x}" NAME)
+            string(REGEX REPLACE "^lib" "" _x_NAME ${_x_NAME})
+            string(REGEX REPLACE "\\.so.*$" "" _x_NAME ${_x_NAME})
+            set(SIP_LIBRARIES "${SIP_LIBRARIES},\"${_x_NAME}\"")
+          endif()
+        endforeach()
+        string(REGEX REPLACE "^," "" SIP_LIBRARIES ${SIP_LIBRARIES})
+
+        set(SIP_LIBRARY_DIRS "")
+        foreach(_x ${LIBRARY_DIRS})
+          set(SIP_LIBRARY_DIRS "${SIP_LIBRARY_DIRS},\"${_x}\"")
+        endforeach()
+        string(REGEX REPLACE "^," "" SIP_LIBRARY_DIRS ${SIP_LIBRARY_DIRS})
+
+        set(SIP_EXTRA_DEFINES "")
+        foreach(_x ${EXTRA_DEFINES})
+          set(SIP_EXTRA_DEFINES "${SIP_EXTRA_DEFINES},\"${_x}\"")
+        endforeach()
+        string(REGEX REPLACE "^," "" SIP_EXTRA_DEFINES ${SIP_EXTRA_DEFINES})
+
+        set(SIP_BINDING_DIRS "\"${CMAKE_INSTALL_PREFIX}/${PYTHON_INSTALL_DIR}/PyQt5/bindings\"")
+
+        if(WIN32)
+          set(SIP_TAGS "\"WS_WIN\"")
+        elseif(APPLE)
+          set(SIP_TAGS "\"WS_MACX\"")
+        else()
+          set(SIP_TAGS "\"WS_X11\"")
+        endif()
+
+        # TODO:
+        #   I don't know what to do about LDFLAGS_OTHER
+        #   what's the equivalent construct in sip5?
+
+        configure_file(
+            ${__PYTHON_QT_BINDING_SIP_HELPER_DIR}/pyproject.toml.in
+            ${sip_BINARY_DIR}/sip/pyproject.toml
+        )
+        add_custom_command(
+            OUTPUT ${sip_LIBRARY_DIR}/lib${PROJECT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}
+            COMMAND sip-install --target-dir ${sip_LIBRARY_DIR}
+            DEPENDS ${SIP_FILE} ${sip_DEPENDS}
+            WORKING_DIRECTORY ${sip_BINARY_DIR}/sip
+            COMMENT "Running SIP-build generator for ${PROJECT_NAME} Python bindings..."
+        )
     else()
-      set(MAKE_EXECUTABLE "\$(MAKE)")
-    endif()
+        add_custom_command(
+            OUTPUT ${SIP_BUILD_DIR}/Makefile
+            COMMAND ${PYTHON_EXECUTABLE} ${sip_SIP_CONFIGURE} ${SIP_BUILD_DIR} ${SIP_FILE} ${sip_LIBRARY_DIR} \"${INCLUDE_DIRS}\" \"${LIBRARIES}\" \"${LIBRARY_DIRS}\" \"${LDFLAGS_OTHER}\" \"${EXTRA_DEFINES}\"
+            DEPENDS ${sip_SIP_CONFIGURE} ${SIP_FILE} ${sip_DEPENDS}
+            WORKING_DIRECTORY ${sip_SOURCE_DIR}
+            COMMENT "Running SIP generator for ${PROJECT_NAME} Python bindings..."
+        )
 
-    add_custom_command(
-        OUTPUT ${sip_LIBRARY_DIR}/lib${PROJECT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}
-        COMMAND ${MAKE_EXECUTABLE}
-        DEPENDS ${SIP_BUILD_DIR}/Makefile
-        WORKING_DIRECTORY ${SIP_BUILD_DIR}
-        COMMENT "Compiling generated code for ${PROJECT_NAME} Python bindings..."
-    )
+        if(NOT EXISTS "${sip_LIBRARY_DIR}")
+            file(MAKE_DIRECTORY ${sip_LIBRARY_DIR})
+        endif()
+
+        if(WIN32)
+          set(MAKE_EXECUTABLE NMake.exe)
+        else()
+          set(MAKE_EXECUTABLE make)
+        endif()
+
+        add_custom_command(
+            OUTPUT ${sip_LIBRARY_DIR}/lib${PROJECT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}
+            COMMAND ${MAKE_EXECUTABLE}
+            DEPENDS ${SIP_BUILD_DIR}/Makefile
+            WORKING_DIRECTORY ${SIP_BUILD_DIR}
+            COMMENT "Compiling generated code for ${PROJECT_NAME} Python bindings..."
+        )
+    endif()
 
     add_custom_target(lib${PROJECT_NAME} ALL
         DEPENDS ${sip_LIBRARY_DIR}/lib${PROJECT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}
