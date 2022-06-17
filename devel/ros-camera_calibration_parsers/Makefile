PORTNAME=	ros-camera_calibration_parsers
DISTVERSION=	1.12.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS camera_calibration_parsers package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}boost-libs>0:devel/boost-python-libs@${PY_FLAVOR} \
		${LOCALBASE}/share/rosbash/package.xml:devel/ros-rosbash \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/roscpp_serialization/package.xml:devel/ros-roscpp_serialization \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs

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
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libxmlrpcpp.so:devel/ros-xmlrpcpp\
		libyaml-cpp.so:devel/yaml-cpp

RUN_DEPENDS=	${LOCALBASE}/share/rosbash/package.xml:devel/ros-rosbash \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/roscpp_serialization/package.xml:devel/ros-roscpp_serialization \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs

USES=		cmake pkgconfig python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_common

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	camera_calibration_parsers

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
