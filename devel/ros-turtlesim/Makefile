PORTNAME=	ros-turtlesim
DISTVERSION=	0.10.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS turtlesim package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/roscpp_serialization/package.xml:devel/ros-roscpp_serialization \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg\
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}\

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		libQt5Core.so:devel/qt5-core\
		libQt5Gui.so:x11-toolkits/qt5-gui\
		libQt5Widgets.so:x11-toolkits/qt5-widgets\
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

RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/roscpp_serialization/package.xml:devel/ros-roscpp_serialization \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs

USES=		cmake python qmake:no_env qt:5

USE_GITHUB=	yes

GH_ACCOUNT=	ros
GH_PROJECT=	ros_tutorials

USE_QT=		buildtools_build gui qmake_build

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS="gencpp;geneus;genlisp;gennodejs;genpy"\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	turtlesim

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
