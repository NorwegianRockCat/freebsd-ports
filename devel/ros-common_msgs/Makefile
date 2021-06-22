PORTNAME=	ros-common_msgs
DISTVERSION=	1.13.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS common_msgs package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	common_msgs

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	common_msgs

PLIST_FILES=	share/common_msgs/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	actionlib_msgs diagnostic_msgs geometry_msgs nav_msgs sensor_msgs\
		shape_msgs stereo_msgs trajectory_msgs visualization_msgs

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
