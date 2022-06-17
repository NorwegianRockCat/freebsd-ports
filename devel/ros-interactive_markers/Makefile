PORTNAME=	ros-interactive_markers
DISTVERSION=	1.12.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS interactive_markers package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/tf2_geometry_msgs/package.xml:devel/ros-tf2_geometry_msgs \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/share/visualization_msgs/package.xml:devel/ros-visualization_msgs

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

RUN_DEPENDS=	${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/tf2_geometry_msgs/package.xml:devel/ros-tf2_geometry_msgs \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/share/visualization_msgs/package.xml:devel/ros-visualization_msgs

USES=		cmake python eigen:3

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	interactive_markers

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

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
