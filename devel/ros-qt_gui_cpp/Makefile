PORTNAME=	ros-qt_gui_cpp
DISTVERSION=	0.4.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS qt_gui_cpp package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/pyqtbuild:devel/py-qtbuilder@${PY_FLAVOR}\
		${_PYLIBDIR}/setuptools:devel/py-setuptools@${PY_FLAVOR}\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
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
		libGL.so:graphics/mesa-libs\
		liblog4cxx.so:devel/log4cxx\
		libPocoFoundation.so:devel/poco\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		libQt5Core.so:devel/qt5-core\
		libQt5Gui.so:x11-toolkits/qt5-gui\
		libQt5Widgets.so:x11-toolkits/qt5-widgets\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake pkgconfig pyqt:5 python qmake:no_env qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	qt_gui_core

USE_LDCONFIG=	yes
USE_PYQT=	gui widgets
USE_QT=		buildtools_build qmake_build

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	qt_gui_cpp

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules python_qt_binding
_COMMON_RDEPS=	pluginlib
_COMMON_XDEPS=	${LOCALBASE}/include/tinyxml.h:textproc/tinyxml
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_RUN_RDEPS=	${_COMMON_RDEPS} qt_gui
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libqt_gui_cpp.so\
	    ${STAGEDIR}${PREFIX}/lib/libqt_gui_cpp.so.0.4.2
	${LN} -fs libqt_gui_cpp.so.0.4.2\
	    ${STAGEDIR}${PREFIX}/lib/libqt_gui_cpp.so.0.4
	${LN} -fs libqt_gui_cpp.so.0.4\
	    ${STAGEDIR}${PREFIX}/lib/libqt_gui_cpp.so.0
	${LN} -fs libqt_gui_cpp.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libqt_gui_cpp.so

.include <bsd.port.mk>
