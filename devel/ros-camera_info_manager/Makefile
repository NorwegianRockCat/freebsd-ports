PORTNAME=	ros-camera_info_manager
DISTVERSION=	1.12.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS camera_info_manager package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libcamera_calibration_parsers.so:devel/ros-camera_calibration_parsers\
		libclass_loader.so:devel/ros-class_loader\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		libimage_transport.so:devel/ros-image_transport\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		libPocoFoundation.so:devel/poco\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml2.so:textproc/tinyxml2\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_common

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	camera_info_manager

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rostest

_COMMON_RDEPS=	camera_calibration_parsers image_transport roscpp roslib\
		sensor_msgs

_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libcamera_info_manager.so\
	    ${STAGEDIR}${PREFIX}/lib/libcamera_info_manager.so.1.12.0
	${LN} -fs libcamera_info_manager.so.1.12.0\
	    ${STAGEDIR}${PREFIX}/lib/libcamera_info_manager.so.1.12
	${LN} -fs libcamera_info_manager.so.1.12\
	    ${STAGEDIR}${PREFIX}/lib/libcamera_info_manager.so.1
	${LN} -fs libcamera_info_manager.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libcamera_info_manager.so

.include <bsd.port.mk>
