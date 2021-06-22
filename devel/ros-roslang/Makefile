PORTNAME=	ros-roslang
DISTVERSION=	1.15.7
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roslang package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	core/roslang

PLIST_FILES=	libdata/pkgconfig/roslang.pc\
		share/roslang/cmake/roslang.cmake\
		share/roslang/cmake/roslangConfig-version.cmake\
		share/roslang/cmake/roslangConfig.cmake\
		share/roslang/package.xml

_COMMON_RDEPS=	catkin
_RUN_RDEPS=	${_COMMON_RDEPS} genmsg
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
