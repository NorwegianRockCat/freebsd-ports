PORTNAME=	ros-roscpp_tutorials
DISTVERSION=	0.10.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roscpp_tutorials package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}\

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

RUN_DEPENDS=	${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_tutorials

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS="gencpp;geneus;genlisp;gennodejs;genpy"\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	roscpp_tutorials


post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
