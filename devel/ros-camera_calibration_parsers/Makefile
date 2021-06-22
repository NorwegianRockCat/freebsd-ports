PORTNAME=	ros-camera_calibration_parsers
DISTVERSION=	1.12.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS camera_calibration_parsers package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_BOOSTLIB}:devel/boost-python-libs@${PY_FLAVOR}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libxmlrpcpp.so:devel/ros-xmlrpcpp\
		libyaml-cpp.so:devel/yaml-cpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${_COMMON_XDEPS}

USES=		cmake pkgconfig python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_common

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	camera_calibration_parsers

_BOOSTLIB=	${LOCALBASE}/lib/lib${PY_BOOST_LIB}.so
_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rosbash rosconsole rosunit
_COMMON_RDEPS=	roscpp roscpp_serialization sensor_msgs
_COMMON_XDEPS=	${LOCALBASE}/include/yaml-cpp/yaml.h:devel/yaml-cpp
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libcamera_calibration_parsers.so\
	    ${STAGEDIR}${PREFIX}/lib/libcamera_calibration_parsers.so.1.12.0
	${LN} -fs libcamera_calibration_parsers.so.1.12.0\
	    ${STAGEDIR}${PREFIX}/lib/libcamera_calibration_parsers.so.1.12
	${LN} -fs libcamera_calibration_parsers.so.1.12\
	    ${STAGEDIR}${PREFIX}/lib/libcamera_calibration_parsers.so.1
	${LN} -fs libcamera_calibration_parsers.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libcamera_calibration_parsers.so

.include <bsd.port.mk>
