PORTNAME=	ros-rosconsole_bridge
DISTVERSION=	0.5.4
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosconsole_bridge package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		librostime.so:devel/ros-rostime
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	rosconsole_bridge

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	cpp_common rosconsole
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librosconsole_bridge.so\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_bridge.so.0.5.4
	${LN} -fs librosconsole_bridge.so.0.5.4\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_bridge.so.0.5
	${LN} -fs librosconsole_bridge.so.0.5\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_bridge.so.0
	${LN} -fs librosconsole_bridge.so.0\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_bridge.so

.include <bsd.port.mk>
