PORTNAME=	ros-image_pipeline
DISTVERSION=	1.15.3
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS image_pipeline package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_pipeline

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	image_pipeline

PLIST_FILES=	share/image_pipeline/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	camera_calibration depth_image_proc image_proc image_publisher\
		image_rotate image_view stereo_image_proc

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
