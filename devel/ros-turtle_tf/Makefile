PORTNAME=	ros-turtle_tf
DISTVERSION=	0.2.3
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS turtle_tf package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
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
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry_tutorials

PYTHON_NO_DEPENDS=	yes

SHEBANG_FILES=	nodes/dynamic_tf_broadcaster.py\
		nodes/fixed_tf_broadcaster.py\
		nodes/turtle_tf_broadcaster.py\
		nodes/turtle_tf_listener_wait.py\
		nodes/turtle_tf_listener.py\
		nodes/turtle_tf_message_broadcaster.py

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	turtle_tf

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	geometry_msgs roscpp rospy std_msgs tf turtlesim
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
