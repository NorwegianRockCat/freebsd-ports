PORTNAME=	ros-stage_ros
DISTVERSION=	1.8.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS stage_ros package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		stage:misc/stage \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/nav_msgs/package.xml:devel/ros-nav_msgs \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf

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

RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/nav_msgs/package.xml:devel/ros-nav_msgs \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf

USES=		cmake shebangfix python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-simulation
GH_PROJECT=	stage_ros

SHEBANG_FILES=	scripts/upgrade-world.sh

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
