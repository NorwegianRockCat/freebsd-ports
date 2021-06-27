--- log/src/QueryOptions.cc.orig	2021-01-05 20:17:33 UTC
+++ log/src/QueryOptions.cc
@@ -113,7 +113,7 @@ class TimeRangeOption::Implementation
     if (!startCompare.empty())
     {
       sql.statement += "time_recv " + startCompare + " ?";
-      sql.parameters.emplace_back(start.GetTime()->count());
+      sql.parameters.emplace_back(static_cast<int64_t>(start.GetTime()->count()));
 
       if (!finishCompare.empty())
         sql.statement += " AND ";
@@ -122,7 +122,7 @@ class TimeRangeOption::Implementation
     if (!finishCompare.empty())
     {
       sql.statement += "time_recv " + finishCompare + " ?";
-      sql.parameters.emplace_back(finish.GetTime()->count());
+      sql.parameters.emplace_back(static_cast<int64_t>(finish.GetTime()->count()));
     }
 
     return sql;
