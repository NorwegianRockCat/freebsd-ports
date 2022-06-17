PORTNAME=	ros-rqt_gui_cpp
DISTVERSION=	0.5.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_gui_cpp package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/nodelet/package.xml:devel/ros-nodelet \
		${LOCALBASE}/share/qt_gui/package.xml:devel/ros-qt_gui \
		${LOCALBASE}/share/qt_gui_cpp/package.xml:devel/ros-qt_gui_cpp \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp

LIB_DEPENDS=	libbondcpp.so:devel/ros-bondcpp\
		libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libclass_loader.so:devel/ros-class_loader\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		libnodeletlib.so:devel/ros-nodelet\
		libPocoFoundation.so:devel/poco\
		libqt_gui_cpp.so:devel/ros-qt_gui_cpp\
		libQt5Core.so:devel/qt5-core\
		libQt5Gui.so:x11-toolkits/qt5-gui\
		libQt5Widgets.so:x11-toolkits/qt5-widgets\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		libuuid.so:misc/e2fsprogs-libuuid\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

RUN_DEPENDS=	${LOCALBASE}/share/nodelet/package.xml:devel/ros-nodelet \
		${LOCALBASE}/share/qt_gui/package.xml:devel/ros-qt_gui \
		${LOCALBASE}/share/qt_gui_cpp/package.xml:devel/ros-qt_gui_cpp \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp

USES=		cmake python qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt

USE_LDCONFIG=	yes
USE_QT=		buildtools_build core qmake_build

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	rqt_gui_cpp

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librqt_gui_cpp.so\
	    ${STAGEDIR}${PREFIX}/lib/librqt_gui_cpp.so.0.5.2
	${LN} -fs librqt_gui_cpp.so.0.5.2\
	    ${STAGEDIR}${PREFIX}/lib/librqt_gui_cpp.so.0.5
	${LN} -fs librqt_gui_cpp.so.0.5\
	    ${STAGEDIR}${PREFIX}/lib/librqt_gui_cpp.so.0
	${LN} -fs librqt_gui_cpp.so.0\
	    ${STAGEDIR}${PREFIX}/lib/librqt_gui_cpp.so

.include <bsd.port.mk>
