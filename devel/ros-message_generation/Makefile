PORTNAME=	ros-message_generation
DISTVERSION=	0.4.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS message_generation package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR}

RUN_DEPENDS=	${LOCALBASE}/share/gencpp/package.xml:devel/ros-gencpp \
		${LOCALBASE}/share/geneus/package.xml:devel/ros-geneus \
		${LOCALBASE}/share/genlisp/package.xml:devel/ros-genlisp \
		${LOCALBASE}/share/genmsg/package.xml:devel/ros-genmsg \
		${LOCALBASE}/share/gennodejs/package.xml:devel/ros-gennodejs \
		${LOCALBASE}/share/genpy/package.xml:devel/ros-genpy

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	message_generation

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	libdata/pkgconfig/message_generation.pc\
		share/message_generation/cmake/message_generationConfig-version.cmake\
		share/message_generation/cmake/message_generationConfig.cmake\
		share/message_generation/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
