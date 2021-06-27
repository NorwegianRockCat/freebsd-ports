--- deps/opende/src/util.cpp.orig	2021-04-02 01:08:12 UTC
+++ deps/opende/src/util.cpp
@@ -678,7 +678,7 @@ void dxProcessIslands (dxWorld *world, dReal stepsize,
 static size_t AdjustArenaSizeForReserveRequirements(size_t arenareq, float rsrvfactor, unsigned rsrvminimum)
 {
   float scaledarena = arenareq * rsrvfactor;
-  size_t adjustedarena = (scaledarena < SIZE_MAX) ? (size_t)scaledarena : SIZE_MAX;
+  size_t adjustedarena = (scaledarena < (float)SIZE_MAX) ? (size_t)scaledarena : SIZE_MAX;
   size_t boundedarena = (adjustedarena > rsrvminimum) ? adjustedarena : (size_t)rsrvminimum;
   return dEFFICIENT_SIZE(boundedarena);
 }
