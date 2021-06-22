PORTNAME=	ros-rosconsole
DISTVERSION=	1.14.3
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosconsole package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		librostime.so:devel/ros-rostime
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	rosconsole

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rosunit
_COMMON_RDEPS=	cpp_common rostime

_COMMON_XDEPS=	${LOCALBASE}/include/apr-1/apr.h:devel/apr1\
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/log4cxx/log4cxx.h:devel/log4cxx

_RUN_RDEPS=	${_COMMON_RDEPS} rosbuild
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so.1.14.3
	${LN} -fs librosconsole_backend_interface.so.1.14.3\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so.1.14
	${LN} -fs librosconsole_backend_interface.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so.1
	${LN} -fs librosconsole_backend_interface.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so
	${MV} ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so.1.14.3
	${LN} -fs librosconsole_log4cxx.so.1.14.3\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so.1.14
	${LN} -fs librosconsole_log4cxx.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so.1
	${LN} -fs librosconsole_log4cxx.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so
	${MV} ${STAGEDIR}${PREFIX}/lib/librosconsole.so\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole.so.1.14.3
	${LN} -fs librosconsole.so.1.14.3\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole.so.1.14
	${LN} -fs librosconsole.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole.so.1
	${LN} -fs librosconsole.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole.so

.include <bsd.port.mk>
