--- projects/vehicles/controllers/racing_wheel/JoystickInterface.cpp.orig	2020-12-15 08:37:01 UTC
+++ projects/vehicles/controllers/racing_wheel/JoystickInterface.cpp
@@ -46,6 +46,8 @@ static string platformExtension = "windows";
 static string platformExtension = "mac";
 #elif defined(__linux__)
 static string platformExtension = "linux";
+#elif defined(__FreeBSD__)
+static string platformExtension = "freebsd";
 #else
 #error Unsupported OS
 #endif
