--- ../slimserver-vendor-bf9bf02/CPAN/buildme.sh	2025-04-18 16:43:59.125495000 +0200
+++ ../slimserver-vendor-bf9bf02/CPAN/buildme.sh	2025-04-18 16:44:13.751717000 +0200
@@ -576,32 +576,32 @@
 }
 
 function build_all {
-    build Audio::Scan
-    build Class::C3::XS
-    build Class::XSAccessor
-    build Compress::Raw::Zlib
+    # build Audio::Scan
+    # build Class::C3::XS
+    # build Class::XSAccessor
+    # build Compress::Raw::Zlib
     # DBD::SQLite builds DBI, so don't need it here as well.
 #   build DBI
 #   build DBD::mysql
-    build DBD::SQLite
-    build Digest::SHA1
-    build EV
-    build Encode::Detect
-    build HTML::Parser
+    # build DBD::SQLite
+    # build Digest::SHA1
+    # build EV
+    # build Encode::Detect
+    # build HTML::Parser
     # XXX - Image::Scale requires libjpeg-turbo - which requires nasm 2.07 or later (install from http://www.macports.org/)
-    build Image::Scale
-    build IO::AIO
-    build IO::Interface
+    # build Image::Scale
+    # build IO::AIO
+    # build IO::Interface
 #   build IO::Socket::SSL
-    build JSON::XS
-    build Linux::Inotify2
-    build Mac::FSEvents
+    # build JSON::XS
+    # build Linux::Inotify2
+    # build Mac::FSEvents
    #  build Media::Scan
     build MP3::Cut::Gapless
-    build Sub::Name
-    build Template
-    build XML::Parser
-    build YAML::LibYAML
+    # build Sub::Name
+    # build Template
+    # build XML::Parser
+    # build YAML::LibYAML
 #    build Font::FreeType
 #    build Locale::Hebrew
 }
