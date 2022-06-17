PORTNAME=	ros-vision_opencv
DISTVERSION=	1.15.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS vision_opencv package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/cv_bridge/package.xml:devel/ros-cv_bridge \
		${LOCALBASE}/share/image_geometry/package.xml:devel/ros-image_geometry \

RUN_DEPENDS=	${LOCALBASE}/share/cv_bridge/package.xml:devel/ros-cv_bridge \
		${LOCALBASE}/share/image_geometry/package.xml:devel/ros-image_geometry \


USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	vision_opencv

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	vision_opencv

PLIST_FILES=	share/vision_opencv/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
