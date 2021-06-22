PORTNAME=	ros-image_common
DISTVERSION=	1.12.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS image_common package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_common

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	image_common

PLIST_FILES=	share/image_common/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	camera_calibration_parsers camera_info_manager image_transport\
		polled_camera

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
