PORTNAME=	ros-laser_geometry
DISTVERSION=	1.6.7
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS laser_geometry package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/tf2_geometry_msgs/package.xml:devel/ros-tf2_geometry_msgs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf \
		${LOCALBASE}/share/tf2/package.xml:devel/ros-tf2 \
		${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${PYTHON_PKGNAMEPREFIX}boost-libs>0:devel/boost-python-libs@${PY_FLAVOR} \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs

LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
		libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		liborocos-kdl.so:devel/orocos_kdl \
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libtf.so:devel/ros-tf\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

RUN_DEPENDS=	${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/tf2_geometry_msgs/package.xml:devel/ros-tf2_geometry_msgs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf \
		${LOCALBASE}/share/tf2/package.xml:devel/ros-tf2 \
		${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${PYTHON_PKGNAMEPREFIX}boost-libs>0:devel/boost-python-libs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}numpy>0:math/py-numpy@${PY_FLAVOR}\

USES=		cmake eigen:3 python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	laser_geometry

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/liblaser_geometry.so\
	    ${STAGEDIR}${PREFIX}/lib/liblaser_geometry.so.1.6.7
	${LN} -fs liblaser_geometry.so.1.6.7\
	    ${STAGEDIR}${PREFIX}/lib/liblaser_geometry.so.1.6
	${LN} -fs liblaser_geometry.so.1.6\
	    ${STAGEDIR}${PREFIX}/lib/liblaser_geometry.so.1
	${LN} -fs liblaser_geometry.so.1\
	    ${STAGEDIR}${PREFIX}/lib/liblaser_geometry.so

.include <bsd.port.mk>
