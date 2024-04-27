--- slimserver-vendor-8b106d7/buildme.sh.orig	2025-01-20 17:13:36 UTC
+++ slimserver-vendor-8b106d7/CPAN/buildme.sh
@@ -576,20 +576,20 @@ function build_all {
 }
 
 function build_all {
-    build Audio::Scan
+#    build Audio::Scan
     build Class::C3::XS
     build Class::XSAccessor
-    build Compress::Raw::Zlib
+    # build Compress::Raw::Zlib
     # DBD::SQLite builds DBI, so don't need it here as well.
 #   build DBI
 #   build DBD::mysql
-    build DBD::SQLite
+#    build DBD::SQLite
     build Digest::SHA1
-    build EV
-    build Encode::Detect
+    # build EV
+    # build Encode::Detect
     build HTML::Parser
     # XXX - Image::Scale requires libjpeg-turbo - which requires nasm 2.07 or later (install from http://www.macports.org/)
-    build Image::Scale
+#    build Image::Scale
     build IO::AIO
     build IO::Interface
 #   build IO::Socket::SSL
