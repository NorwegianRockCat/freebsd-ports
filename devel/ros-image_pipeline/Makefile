PORTNAME=	ros-image_pipeline
DISTVERSION=	1.15.3
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS image_pipeline package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/camera_calibration/package.xml:devel/ros-camera_calibration \
		${LOCALBASE}/share/depth_image_proc/package.xml:devel/ros-depth_image_proc \
		${LOCALBASE}/share/image_proc/package.xml:devel/ros-image_proc \
		${LOCALBASE}/share/image_publisher/package.xml:devel/ros-image_publisher \
		${LOCALBASE}/share/image_rotate/package.xml:devel/ros-image_rotate \
		${LOCALBASE}/share/image_view/package.xml:devel/ros-image_view \
		${LOCALBASE}/share/stereo_image_proc/package.xml:devel/ros-stereo_image_proc


RUN_DEPENDS=	${LOCALBASE}/share/camera_calibration/package.xml:devel/ros-camera_calibration \
		${LOCALBASE}/share/depth_image_proc/package.xml:devel/ros-depth_image_proc \
		${LOCALBASE}/share/image_proc/package.xml:devel/ros-image_proc \
		${LOCALBASE}/share/image_publisher/package.xml:devel/ros-image_publisher \
		${LOCALBASE}/share/image_rotate/package.xml:devel/ros-image_rotate \
		${LOCALBASE}/share/image_view/package.xml:devel/ros-image_view \
		${LOCALBASE}/share/stereo_image_proc/package.xml:devel/ros-stereo_image_proc \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_pipeline

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	image_pipeline

PLIST_FILES=	share/image_pipeline/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
