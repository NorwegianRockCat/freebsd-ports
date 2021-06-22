PORTNAME=	ros-tf2_ros
DISTVERSION=	0.7.5
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf2_ros package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
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
		libtf2.so:devel/ros-tf2\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry2

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf2_ros

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rostest

_COMMON_RDEPS=	actionlib actionlib_msgs geometry_msgs message_filters roscpp\
		rosgraph rospy std_msgs tf2 tf2_msgs tf2_py xmlrpcpp

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libtf2_ros.so\
	    ${STAGEDIR}${PREFIX}/lib/libtf2_ros.so.0.7.5
	${LN} -fs libtf2_ros.so.0.7.5\
	    ${STAGEDIR}${PREFIX}/lib/libtf2_ros.so.0.7
	${LN} -fs libtf2_ros.so.0.7\
	    ${STAGEDIR}${PREFIX}/lib/libtf2_ros.so.0
	${LN} -fs libtf2_ros.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libtf2_ros.so

.include <bsd.port.mk>
