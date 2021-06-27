PORTNAME=		ignition-cmake
DISTVERSIONPREFIX=	${PORTNAME}${DISTVERSION:R:R}_
DISTVERSION=		2.8.0
CATEGORIES=		devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	CMake modules to be used by the Ignition projects

LICENSE=	APACHE20

USES=		cmake pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	ignitionrobotics
GH_PROJECT=	ign-cmake

USE_RUBY=	yes

CMAKE_OFF=	BUILD_TESTING

NO_ARCH=	yes

PLIST_SUB+=	CMAKE_IGN_VER=cmake${DISTVERSION:R:R}

.include <bsd.port.mk>
