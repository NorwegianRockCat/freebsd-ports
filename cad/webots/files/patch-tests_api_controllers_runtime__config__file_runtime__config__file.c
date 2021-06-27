--- tests/api/controllers/runtime_config_file/runtime_config_file.c.orig	2020-12-15 08:37:01 UTC
+++ tests/api/controllers/runtime_config_file/runtime_config_file.c
@@ -46,6 +46,12 @@ int main(int argc, char **argv) {
                            "The environment variable TEST_MAC_OS_X was not set to the right value");
   else
     ts_assert_pointer_not_null(getenv("TEST_MAC_OS_X"), "TEST_MAC_OS_X was not set");
+#elif defined(__FreeBSD__)
+  if (getenv("TEST_FREEBSD") != NULL)
+    ts_assert_string_equal(getenv("TEST_FREEBSD"), "test1/test2:test3:test3",
+                           "The environment variable TEST_FREEBSD was not set to the right value");
+  else
+    ts_assert_pointer_not_null(getenv("TEST_FREEBSD"), "TEST_FREEBSD was not set");
 #elif defined(__linux__)
   if (getenv("TEST_LINUX") != NULL) {
     ts_assert_string_equal(getenv("TEST_LINUX"), "test1/test2:test3:test3",
