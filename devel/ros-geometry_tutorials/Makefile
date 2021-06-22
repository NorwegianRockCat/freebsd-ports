PORTNAME=	ros-geometry_tutorials
DISTVERSION=	0.2.3
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS geometry_tutorials package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry_tutorials

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	geometry_tutorials

PLIST_FILES=	share/geometry_tutorials/package.xml

_BUILD_RDEPS=	catkin
_RUN_RDEPS=	turtle_tf turtle_tf2
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
