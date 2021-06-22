PORTNAME=	ros-interactive_markers
DISTVERSION=	1.12.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS interactive_markers package

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
		liborocos-kdl.so:devel/orocos_kdl\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	interactive_markers

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin

_COMMON_RDEPS=	rosconsole roscpp rospy rostest std_msgs tf2_geometry_msgs\
		tf2_ros visualization_msgs

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libinteractive_markers.so\
	    ${STAGEDIR}${PREFIX}/lib/libinteractive_markers.so.1.12.0
	${LN} -fs libinteractive_markers.so.1.12.0\
	    ${STAGEDIR}${PREFIX}/lib/libinteractive_markers.so.1.12
	${LN} -fs libinteractive_markers.so.1.12\
	    ${STAGEDIR}${PREFIX}/lib/libinteractive_markers.so.1
	${LN} -fs libinteractive_markers.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libinteractive_markers.so

.include <bsd.port.mk>
