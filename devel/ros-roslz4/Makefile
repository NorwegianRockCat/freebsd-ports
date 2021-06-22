PORTNAME=	ros-roslz4
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roslz4 package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblz4.so:archivers/liblz4\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}
RUN_DEPENDS=	${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	utilities/roslz4

_BUILD_RDEPS=	catkin cpp_common rosunit
_COMMON_XDEPS=	${LOCALBASE}/include/lz4.h:archivers/liblz4
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libroslz4.so\
	    ${STAGEDIR}${PREFIX}/lib/libroslz4.so.1.15.11
	${LN} -fs libroslz4.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/libroslz4.so.1.15
	${LN} -fs libroslz4.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libroslz4.so.1
	${LN} -fs libroslz4.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libroslz4.so

.include <bsd.port.mk>
