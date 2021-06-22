PORTNAME=	ros-rosbuild
DISTVERSION=	1.15.7
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosbuild package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	core/rosbuild

_COMMON_RDEPS=	catkin
_RUN_RDEPS=	${_COMMON_RDEPS} message_generation message_runtime
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
