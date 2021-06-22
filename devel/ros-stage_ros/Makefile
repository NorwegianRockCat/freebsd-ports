PORTNAME=	ros-stage_ros
DISTVERSION=	1.8.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS stage_ros package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
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
		libfltk_forms.so:x11-toolkits/fltk\
		libfltk_gl.so:x11-toolkits/fltk\
		libfltk_images.so:x11-toolkits/fltk\
		libfltk.so:x11-toolkits/fltk\
		libGL.so:graphics/mesa-libs\
		libICE.so:x11/libICE\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libSM.so:x11/libSM\
		libstage.so:misc/stage\
		libtf.so:devel/ros-tf\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libX11.so:x11/libX11\
		libXext.so:x11/libXext\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros-simulation
GH_PROJECT=	stage_ros

SHEBANG_FILES=	scripts/upgrade-world.sh

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rostest
_COMMON_RDEPS=	geometry_msgs nav_msgs roscpp sensor_msgs std_msgs std_srvs tf

_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		stage:misc/stage

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
