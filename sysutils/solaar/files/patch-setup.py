g--- setup.py.orig	2022-12-17 18:06:23 UTC
+++ setup.py
@@ -39,7 +39,6 @@ def _data_files():
         yield _dirname(mo), [mo]
 
     yield 'share/applications', ['share/applications/solaar.desktop']
-    yield 'share/solaar/udev-rules.d', ['rules.d/42-logitech-unify-permissions.rules']
     yield 'share/metainfo', ['share/solaar/io.github.pwr_solaar.solaar.metainfo.xml']
 
     del _dirname
