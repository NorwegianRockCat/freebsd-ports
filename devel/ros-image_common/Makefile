PORTNAME=	ros-image_common
DISTVERSION=	1.12.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS image_common package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/camera_calibration_parsers/package.xml:devel/ros-camera_calibration_parsers \
		${LOCALBASE}/share/camera_info_manager/package.xml:devel/ros-camera_info_manager \
		${LOCALBASE}/share/image_transport/package.xml:devel/ros-image_transport \
		${LOCALBASE}/share/polled_camera/package.xml:devel/ros-polled_camera

RUN_DEPENDS=	${LOCALBASE}/share/camera_calibration_parsers/package.xml:devel/ros-camera_calibration_parsers \
		${LOCALBASE}/share/camera_info_manager/package.xml:devel/ros-camera_info_manager \
		${LOCALBASE}/share/image_transport/package.xml:devel/ros-image_transport \
		${LOCALBASE}/share/polled_camera/package.xml:devel/ros-polled_camera

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_common

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	image_common

PLIST_FILES=	share/image_common/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
