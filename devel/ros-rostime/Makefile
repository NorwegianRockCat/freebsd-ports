PORTNAME=	ros-rostime
DISTVERSION=	0.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rostime package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	roscpp_core

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	rostime

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	cpp_common
_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librostime.so\
	    ${STAGEDIR}${PREFIX}/lib/librostime.so.0.7.2
	${LN} -fs librostime.so.0.7.2\
	    ${STAGEDIR}${PREFIX}/lib/librostime.so.0.7
	${LN} -fs librostime.so.0.7\
	    ${STAGEDIR}${PREFIX}/lib/librostime.so.0
	${LN} -fs librostime.so.0\
	    ${STAGEDIR}${PREFIX}/lib/librostime.so

.include <bsd.port.mk>
