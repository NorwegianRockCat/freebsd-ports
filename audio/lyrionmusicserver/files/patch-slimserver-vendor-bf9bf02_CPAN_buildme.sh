--- slimserver-vendor-bf9bf02/CPAN/buildme.sh.orig	2025-01-20 17:13:36 UTC
+++ slimserver-vendor-bf9bf02/CPAN/buildme.sh
@@ -576,7 +576,7 @@ function build_all {
 }
 
 function build_all {
-    build Audio::Scan
+#    build Audio::Scan
     build Class::C3::XS
     build Class::XSAccessor
     build Compress::Raw::Zlib
@@ -585,7 +585,7 @@ function build_all {
 #   build DBD::mysql
     build DBD::SQLite
     build Digest::SHA1
-    build EV
+    # build EV
     build Encode::Detect
     build HTML::Parser
     # XXX - Image::Scale requires libjpeg-turbo - which requires nasm 2.07 or later (install from http://www.macports.org/)
