--- src/ode/ode/src/util.cpp.orig	2020-12-15 08:37:01 UTC
+++ src/ode/ode/src/util.cpp
@@ -646,7 +646,7 @@ void dxWorldProcessMemArena::FreeMemArena (dxWorldProc
 size_t dxWorldProcessMemArena::AdjustArenaSizeForReserveRequirements(size_t arenareq, float rsrvfactor, unsigned rsrvminimum)
 {
     float scaledarena = arenareq * rsrvfactor;
-    size_t adjustedarena = (scaledarena < SIZE_MAX) ? (size_t)scaledarena : SIZE_MAX;
+    size_t adjustedarena = (scaledarena < (float)SIZE_MAX) ? (size_t)scaledarena : SIZE_MAX;
     size_t boundedarena = (adjustedarena > rsrvminimum) ? adjustedarena : (size_t)rsrvminimum;
     return dEFFICIENT_SIZE(boundedarena);
 }
