PORTNAME=	ros-tf
DISTVERSION=	1.13.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}\
		${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/tf2_py/package.xml:devel/ros-tf2_py \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${LOCALBASE}/share/roswtf/package.xml:devel/ros-roswtf

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
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/tf2_py/package.xml:devel/ros-tf2_py \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${LOCALBASE}/share/roswtf/package.xml:devel/ros-roswtf \
		dot:graphics/graphviz

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS="gencpp;geneus;genlisp;gennodejs;genpy"\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libtf.so\
	    ${STAGEDIR}${PREFIX}/lib/libtf.so.1.13.2
	${LN} -fs libtf.so.1.13.2\
	    ${STAGEDIR}${PREFIX}/lib/libtf.so.1.13
	${LN} -fs libtf.so.1.13\
	    ${STAGEDIR}${PREFIX}/lib/libtf.so.1
	${LN} -fs libtf.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libtf.so

.include <bsd.port.mk>
