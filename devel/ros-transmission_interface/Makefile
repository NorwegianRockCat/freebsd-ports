PORTNAME=	ros-transmission_interface
DISTVERSION=	0.19.4
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS transmission_interface package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
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
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	ros_control

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	transmission_interface

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules resource_retriever
_COMMON_RDEPS=	hardware_interface pluginlib roscpp
_COMMON_XDEPS=	${LOCALBASE}/include/tinyxml.h:textproc/tinyxml
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader_plugins.so\
	   \
		${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader_plugins.so.0.19.4
	${LN} -fs libtransmission_interface_loader_plugins.so.0.19.4\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader_plugins.so.0.19
	${LN} -fs libtransmission_interface_loader_plugins.so.0.19\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader_plugins.so.0
	${LN} -fs libtransmission_interface_loader_plugins.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader_plugins.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader.so\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader.so.0.19.4
	${LN} -fs libtransmission_interface_loader.so.0.19.4\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader.so.0.19
	${LN} -fs libtransmission_interface_loader.so.0.19\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader.so.0
	${LN} -fs libtransmission_interface_loader.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_loader.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_parser.so\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_parser.so.0.19.4
	${LN} -fs libtransmission_interface_parser.so.0.19.4\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_parser.so.0.19
	${LN} -fs libtransmission_interface_parser.so.0.19\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_parser.so.0
	${LN} -fs libtransmission_interface_parser.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libtransmission_interface_parser.so

.include <bsd.port.mk>
