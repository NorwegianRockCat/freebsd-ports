--- src/gsiqt/qt5/QtPrintSupport/QtPrintSupport.pro.orig	2021-08-28 16:37:50 UTC
+++ src/gsiqt/qt5/QtPrintSupport/QtPrintSupport.pro
@@ -10,16 +10,16 @@ DEFINES += MAKE_GSI_QTPRINTSUPPORT_LIBRARY
 INCLUDEPATH += $$TL_INC $$GSI_INC $$QTBASIC_INC
 DEPENDPATH += $$TL_INC $$GSI_INC $$QTBASIC_INC
 
-LIBS += -L$$DESTDIR -lklayout_tl -lklayout_gsi -lklayout_qtbasic
+LIBS += $$DESTDIR/libklayout_tl.so $$DESTDIR/libklayout_gsi.so $$DESTDIR/libklayout_qtbasic.so
 
 # because QQbject is used as base class for many classes, we need this:
-LIBS += -lklayout_QtCore
+LIBS += $$DESTDIR/libklayout_QtCore.so
 
 # because QWidget is used for some UI stuff, we need this:
-LIBS += -lklayout_QtWidgets
+LIBS += $$DESTDIR/libklayout_QtWidgets.so
 
 # because QPagedPaintDevice is used, we need this:
-LIBS += -lklayout_QtGui
+LIBS += $$DESTDIR/libklayout_QtGui.so
 
 SOURCES += \
 
