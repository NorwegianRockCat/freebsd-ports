PORTNAME=	ros-xmlrpcpp
DISTVERSION=	1.15.11
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS xmlrpcpp package

LICENSE=	LGPL21+

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		librostime.so:devel/ros-rostime
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	utilities/xmlrpcpp

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	cpp_common rostime
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so\
	    ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so.1.15.11
	${LN} -fs libxmlrpcpp.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so.1.15
	${LN} -fs libxmlrpcpp.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so.1
	${LN} -fs libxmlrpcpp.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so

.include <bsd.port.mk>
