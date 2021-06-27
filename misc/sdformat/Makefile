PORTNAME=		sdformat
DISTVERSIONPREFIX=	${PORTNAME}${DISTVERSION:R:R}_
DISTVERSION=		9.5.0
CATEGORIES=		misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Simulation Description Format (SDF) parser and description files

LICENSE=	APACHE20

BROKEN=		does not build: src/parser_urdf.cc:30:10: fatal error: 'urdf_model/model.h' file not found

BUILD_DEPENDS=	ignition-cmake==2:devel/ignition-cmake \
		ignition-tools>0:devel/ignition-tools \
		rubygem-rexml>0:textproc/rubygem-rexml
LIB_DEPENDS=	libignition-math6.so:math/ignition-math \
		libconsole_bridge.so:devel/ros-console_bridge \
		libtinyxml2.so:textproc/tinyxml2 \
		liburdfdom_world.so:devel/ros-urdfdom
RUN_DEPENDS=	ignition-tools>0:devel/ignition-tools

USES=		cmake compiler:c++17-lang pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	osrf
GH_PROJECT=	${PORTNAME}

USE_LDCONFIG=	yes

CMAKE_OFF=	BUILD_TESTING

PLIST_SUB+=	INCSUBDIR=${PORTNAME}-${DISTVERSION:R}

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DBUILD_TESTING:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
