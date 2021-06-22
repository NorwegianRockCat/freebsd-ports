PORTNAME=	ros-controller_interface
DISTVERSION=	0.19.4
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS controller_interface package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	ros_control

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	controller_interface

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	hardware_interface roscpp
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
