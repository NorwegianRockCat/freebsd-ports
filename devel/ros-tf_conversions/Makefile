PORTNAME=	ros-tf_conversions
DISTVERSION=	1.13.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf_conversions package

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
		libkdl_conversions.so:devel/ros-kdl_conversions\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		liborocos-kdl.so:devel/orocos_kdl\
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
		${_PYLIBDIR}/PyKDL.so:devel/py-orocos_kdl@${PY_FLAVOR}\
		${_COMMON_XDEPS}

USES=		cmake eigen:3 python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf_conversions

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	geometry_msgs kdl_conversions tf
_COMMON_XDEPS=	${LOCALBASE}/include/kdl/kdl.hpp:devel/orocos_kdl
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libtf_conversions.so\
	    ${STAGEDIR}${PREFIX}/lib/libtf_conversions.so.1.13.2
	${LN} -fs libtf_conversions.so.1.13.2\
	    ${STAGEDIR}${PREFIX}/lib/libtf_conversions.so.1.13
	${LN} -fs libtf_conversions.so.1.13\
	    ${STAGEDIR}${PREFIX}/lib/libtf_conversions.so.1
	${LN} -fs libtf_conversions.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libtf_conversions.so

.include <bsd.port.mk>
