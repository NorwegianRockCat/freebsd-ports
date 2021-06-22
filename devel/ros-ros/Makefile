PORTNAME=	ros-ros
DISTVERSION=	1.15.7
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS ros package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	ros

PLIST_FILES=	share/ros/package.xml

_COMMON_RDEPS=	catkin

_RUN_RDEPS=	${_COMMON_RDEPS} mk rosbash rosboost_cfg rosbuild rosclean\
		roscreate roslang roslib rosmake rosunit

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
