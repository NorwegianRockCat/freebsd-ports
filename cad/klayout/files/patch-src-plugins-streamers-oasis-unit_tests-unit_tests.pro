--- src/plugins/streamers/oasis/unit_tests/unit_tests.pro.orig	2021-08-28 17:08:56 UTC
+++ src/plugins/streamers/oasis/unit_tests/unit_tests.pro
@@ -13,9 +13,9 @@ SOURCES = \
 INCLUDEPATH += $$LAY_INC $$TL_INC $$DB_INC $$GSI_INC $$PWD/../db_plugin $$PWD/../../../common
 DEPENDPATH += $$LAY_INC $$TL_INC $$DB_INC $$GSI_INC $$PWD/../db_plugin $$PWD/../../../common
 
-LIBS += -L$$DESTDIR_UT -lklayout_db -lklayout_tl -lklayout_gsi
+LIBS += $$DESTDIR_UT/libklayout_db.so $$DESTDIR_UT/libklayout_tl.so $$DESTDIR_UT/libklayout_gsi.so
 
 PLUGINPATH = $$OUT_PWD/../../../../db_plugins
 QMAKE_RPATHDIR += $$PLUGINPATH
 
-LIBS += -L$$PLUGINPATH -loasis
+LIBS += $$PLUGINPATH/liboasis.so
