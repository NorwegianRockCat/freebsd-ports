PORTNAME=	ros-robot_state_publisher
DISTVERSION=	1.15.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS robot_state_publisher package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${LOCALBASE}/include/urdf_model:devel/ros-urdfdom_headers\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
		libboost_atomic.so:devel/boost-libs\
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
		libkdl_parser.so:devel/ros-kdl_parser\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		liborocos-kdl.so:devel/orocos_kdl\
		libPocoFoundation.so:devel/poco\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_bridge.so:devel/ros-rosconsole_bridge\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		liburdf.so:devel/ros-urdf\
		liburdfdom_model_state.so:devel/ros-urdfdom\
		liburdfdom_model.so:devel/ros-urdfdom\
		liburdfdom_sensor.so:devel/ros-urdfdom\
		liburdfdom_world.so:devel/ros-urdfdom\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake eigen:3 python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	robot_state_publisher

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rosbag rostest

_COMMON_RDEPS=	kdl_parser rosconsole roscpp rostime sensor_msgs tf tf2_kdl\
		tf2_ros

_COMMON_XDEPS=	${LOCALBASE}/include/kdl/kdl.hpp:devel/orocos_kdl
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libjoint_state_listener.so\
	    ${STAGEDIR}${PREFIX}/lib/libjoint_state_listener.so.1.15.0
	${LN} -fs libjoint_state_listener.so.1.15.0\
	    ${STAGEDIR}${PREFIX}/lib/libjoint_state_listener.so.1.15
	${LN} -fs libjoint_state_listener.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libjoint_state_listener.so.1
	${LN} -fs libjoint_state_listener.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libjoint_state_listener.so
	${MV} ${STAGEDIR}${PREFIX}/lib/librobot_state_publisher_solver.so\
	    ${STAGEDIR}${PREFIX}/lib/librobot_state_publisher_solver.so.1.15.0
	${LN} -fs librobot_state_publisher_solver.so.1.15.0\
	    ${STAGEDIR}${PREFIX}/lib/librobot_state_publisher_solver.so.1.15
	${LN} -fs librobot_state_publisher_solver.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/librobot_state_publisher_solver.so.1
	${LN} -fs librobot_state_publisher_solver.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librobot_state_publisher_solver.so

.include <bsd.port.mk>
