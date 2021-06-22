PORTNAME=	ros-image_transport
DISTVERSION=	1.12.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS image_transport package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg
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
		libmessage_filters.so:devel/ros-message_filters\
		libPocoFoundation.so:devel/poco\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
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
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_common

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	image_transport

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	message_filters pluginlib rosconsole roscpp roslib sensor_msgs
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libimage_transport_plugins.so\
	    ${STAGEDIR}${PREFIX}/lib/libimage_transport_plugins.so.1.12.0
	${LN} -fs libimage_transport_plugins.so.1.12.0\
	    ${STAGEDIR}${PREFIX}/lib/libimage_transport_plugins.so.1.12
	${LN} -fs libimage_transport_plugins.so.1.12\
	    ${STAGEDIR}${PREFIX}/lib/libimage_transport_plugins.so.1
	${LN} -fs libimage_transport_plugins.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libimage_transport_plugins.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libimage_transport.so\
	    ${STAGEDIR}${PREFIX}/lib/libimage_transport.so.1.12.0
	${LN} -fs libimage_transport.so.1.12.0\
	    ${STAGEDIR}${PREFIX}/lib/libimage_transport.so.1.12
	${LN} -fs libimage_transport.so.1.12\
	    ${STAGEDIR}${PREFIX}/lib/libimage_transport.so.1
	${LN} -fs libimage_transport.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libimage_transport.so

.include <bsd.port.mk>
