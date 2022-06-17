PORTNAME=	ros-cpp_common
DISTVERSION=	0.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS cpp_common package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${LOCALBASE}/bin/catkin_make:devel/ros-catkin \
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge
RUN_DEPENDS=	${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	roscpp_core

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	cpp_common

_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libcpp_common.so\
	    ${STAGEDIR}${PREFIX}/lib/libcpp_common.so.0.7.2
	${LN} -fs libcpp_common.so.0.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libcpp_common.so.0.7
	${LN} -fs libcpp_common.so.0.7\
	    ${STAGEDIR}${PREFIX}/lib/libcpp_common.so.0
	${LN} -fs libcpp_common.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libcpp_common.so

.include <bsd.port.mk>
