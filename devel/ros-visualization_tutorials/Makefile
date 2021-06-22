PORTNAME=	ros-visualization_tutorials
DISTVERSION=	0.11.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS visualization_tutorials package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	visualization_tutorials

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	visualization_tutorials

PLIST_FILES=	share/visualization_tutorials/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	interactive_marker_tutorials librviz_tutorial rviz_plugin_tutorials\
		rviz_python_tutorial visualization_marker_tutorials

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
