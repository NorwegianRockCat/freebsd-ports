PORTNAME=	ros-joint_state_controller
DISTVERSION=	0.18.1
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS joint_state_controller package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
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
		liblog4cxx.so:devel/log4cxx\
		libPocoFoundation.so:devel/poco\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librealtime_tools.so:devel/ros-realtime_tools\
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
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	ros_controllers

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	joint_state_controller

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin pluginlib rostest

_COMMON_RDEPS=	controller_interface hardware_interface realtime_tools roscpp\
		sensor_msgs

_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libjoint_state_controller.so\
	    ${STAGEDIR}${PREFIX}/lib/libjoint_state_controller.so.0.18.1
	${LN} -fs libjoint_state_controller.so.0.18.1\
	    ${STAGEDIR}${PREFIX}/lib/libjoint_state_controller.so.0.18
	${LN} -fs libjoint_state_controller.so.0.18\
	    ${STAGEDIR}${PREFIX}/lib/libjoint_state_controller.so.0
	${LN} -fs libjoint_state_controller.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libjoint_state_controller.so

.include <bsd.port.mk>
