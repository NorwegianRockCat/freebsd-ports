PORTNAME=	ros-robot_state_publisher
DISTVERSION=	1.15.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS robot_state_publisher package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/include/urdfdom_headers/urdf_model:devel/ros-urdfdom_headers\
		${LOCALBASE}/share/rosbag/package.xml:devel/ros-rosbag \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/kdl_parser/package.xml:devel/ros-kdl_parser \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf \
		${LOCALBASE}/share/tf2_kdl/package.xml:devel/ros-tf2_kdl \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \

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
RUN_DEPENDS=	${LOCALBASE}/share/kdl_parser/package.xml:devel/ros-kdl_parser \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf \
		${LOCALBASE}/share/tf2_kdl/package.xml:devel/ros-tf2_kdl \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \

USES=		cmake eigen:3 python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	robot_state_publisher

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

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
