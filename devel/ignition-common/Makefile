PORTNAME=		ignition-common
DISTVERSIONPREFIX=	${PORTNAME}${DISTVERSION:R:R}_
DISTVERSION=		3.13.2
CATEGORIES=		devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Set of libraries designed to rapidly develop robot applications

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	ignition-cmake>=2<3:devel/ignition-cmake
LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		libfreeimage.so:graphics/freeimage \
		libgts.so:graphics/gts \
		libtinyxml2.so:textproc/tinyxml2 \
		libuuid.so:misc/e2fsprogs-libuuid \
		libignition-math6.so:math/ignition-math

USES=		cmake compiler:c++17-lang gnome pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	ignitionrobotics
GH_PROJECT=	ign-common

USE_GNOME=	glib20
USE_LDCONFIG=	yes

CMAKE_ON=	USE_EXTERNAL_TINYXML2
CMAKE_OFF=	BUILD_TESTING

PLIST_SUB=	COMMON_IGN_VER=common${DISTVERSION:R:R}\
		DISTVERSION=${DISTVERSION}

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DBUILD_TESTING=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
