PORTNAME=	ros-laser_geometry
DISTVERSION=	1.6.7
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS laser_geometry package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
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
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/numpy:math/py-numpy@${PY_FLAVOR}\
		${_COMMON_XDEPS}

USES=		cmake eigen:3 python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	laser_geometry

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BOOSTLIB=	${LOCALBASE}/lib/lib${PY_BOOST_LIB}.so
_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rosunit tf2_geometry_msgs
_COMMON_RDEPS=	angles roscpp sensor_msgs tf tf2
_COMMON_XDEPS=	${_BOOSTLIB}:devel/boost-python-libs@${PY_FLAVOR}
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

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
