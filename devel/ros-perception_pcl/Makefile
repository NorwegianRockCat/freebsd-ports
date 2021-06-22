PORTNAME=	ros-perception_pcl
DISTVERSION=	1.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS perception_pcl package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	perception_pcl

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	perception_pcl

PLIST_FILES=	share/perception_pcl/package.xml

_BUILD_RDEPS=	catkin
_RUN_RDEPS=	pcl_conversions pcl_msgs pcl_ros
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
