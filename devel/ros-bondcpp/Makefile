PORTNAME=	ros-bondcpp
DISTVERSION=	1.8.6
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS bondcpp package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}
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
		libuuid.so:misc/e2fsprogs-libuuid\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	bond_core

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	bondcpp

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules
_COMMON_RDEPS=	bond roscpp smclib

_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		uuidgen:misc/e2fsprogs-libuuid

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libbondcpp.so\
	    ${STAGEDIR}${PREFIX}/lib/libbondcpp.so.1.8.6
	${LN} -fs libbondcpp.so.1.8.6\
	    ${STAGEDIR}${PREFIX}/lib/libbondcpp.so.1.8
	${LN} -fs libbondcpp.so.1.8\
	    ${STAGEDIR}${PREFIX}/lib/libbondcpp.so.1
	${LN} -fs libbondcpp.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libbondcpp.so

.include <bsd.port.mk>
