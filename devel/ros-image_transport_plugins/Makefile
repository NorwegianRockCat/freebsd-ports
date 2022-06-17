PORTNAME=	ros-image_transport_plugins
DISTVERSION=	1.14.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS image_transport_plugins package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/compressed_depth_image_transport/package.xml:devel/ros-compressed_depth_image_transport \
		${LOCALBASE}/share/compressed_image_transport/package.xml:devel/ros-compressed_image_transport \
		${LOCALBASE}/share/theora_image_transport/package.xml:devel/ros-theora_image_transport

RUN_DEPENDS=	${LOCALBASE}/share/compressed_depth_image_transport/package.xml:devel/ros-compressed_depth_image_transport \
		${LOCALBASE}/share/compressed_image_transport/package.xml:devel/ros-compressed_image_transport \
		${LOCALBASE}/share/theora_image_transport/package.xml:devel/ros-theora_image_transport

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_transport_plugins

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	image_transport_plugins

PLIST_FILES=	share/image_transport_plugins/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
