PORTNAME=	ros-tf2
DISTVERSION=	0.7.5
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf2 package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		librostime.so:devel/ros-rostime
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry2

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf2

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	geometry_msgs rostime tf2_msgs
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libtf2.so\
	    ${STAGEDIR}${PREFIX}/lib/libtf2.so.0.7.5
	${LN} -fs libtf2.so.0.7.5\
	    ${STAGEDIR}${PREFIX}/lib/libtf2.so.0.7
	${LN} -fs libtf2.so.0.7\
	    ${STAGEDIR}${PREFIX}/lib/libtf2.so.0
	${LN} -fs libtf2.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libtf2.so

.include <bsd.port.mk>
