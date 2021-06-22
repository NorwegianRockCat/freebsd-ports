PORTNAME=	ros-message_generation
DISTVERSION=	0.4.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS message_generation package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	message_generation

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	libdata/pkgconfig/message_generation.pc\
		share/message_generation/cmake/message_generationConfig-version.cmake\
		share/message_generation/cmake/message_generationConfig.cmake\
		share/message_generation/package.xml

_BUILD_RDEPS=	catkin
_RUN_RDEPS=	gencpp geneus genlisp genmsg gennodejs genpy
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
