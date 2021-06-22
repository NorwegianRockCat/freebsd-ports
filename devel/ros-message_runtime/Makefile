PORTNAME=	ros-message_runtime
DISTVERSION=	0.4.13
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS message_runtime package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	message_runtime

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	libdata/pkgconfig/message_runtime.pc\
		share/message_runtime/cmake/message_runtimeConfig-version.cmake\
		share/message_runtime/cmake/message_runtimeConfig.cmake\
		share/message_runtime/package.xml

_BUILD_RDEPS=	catkin
_RUN_RDEPS=	cpp_common genpy roscpp_serialization roscpp_traits rostime
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
