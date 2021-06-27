--- scripts/packaging/generate_projects_files.py.orig	2021-03-01 07:11:04 UTC
+++ scripts/packaging/generate_projects_files.py
@@ -45,6 +45,9 @@ if sys.platform == 'win32':
 elif sys.platform == 'darwin':
     dll_extension = '.dylib'
     platform = 'mac'
+elif sys.platform == 'freebsd':
+    dll_extension = '.so'
+    platform = 'freebsd'
 else:
     dll_extension = '.so'
     platform = 'linux'
@@ -87,7 +90,7 @@ def is_ignored_file(f):
     return f == '.gitignore' or f == '.DS_Store' or f == '.DS_Store?' or \
         f == '.Spotlight-V100' or f == '.Trashes' or f == 'ehthumbs.db' or f == 'Thumbs.db' or \
         f.startswith("._") or f.endswith(".swp") or f.endswith(".bak") or f.endswith("~") or \
-        f.endswith(".xcf")
+        f.endswith(".xcf") or f.endswith(".orig") or f == 'CMakeCache.txt'
 
 
 def omit_match(f):
@@ -133,8 +136,8 @@ def list_folder(p):
             else:
                 print(pf)
         else:
-            if f == 'build' or f == 'com':
-                continue  # skip any build or com folder
+            if f == 'build' or f == 'com' or f == 'CMakeFiles':
+                continue  # skip any build, com, or CMakeFiles folder
             elif pf in recurse_in_projects:
                 print(pf + " [recurse]")
                 continue
