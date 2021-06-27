PORTNAME=		ignition-transport
DISTVERSIONPREFIX=	${PORTNAME}${DISTVERSION:R:R}_
DISTVERSION=		8.2.0
CATEGORIES=		devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	Transport library for component communication

LICENSE=	APACHE20

BUILD_DEPENDS=	cppzmq>4:net/cppzmq\
		ignition-cmake>2.3:devel/ignition-cmake\
		ignition-tools>0:devel/ignition-tools\
		libzmq4>4:net/libzmq4
LIB_DEPENDS=	libignition-msgs5.so:devel/ignition-msgs\
		libprotobuf.so:devel/protobuf\
		libignition-math6.so:math/ignition-math\
		libuuid.so:misc/e2fsprogs-libuuid\
		libzmq.so:net/libzmq4
RUN_DEPENDS=	cppzmq>4:net/cppzmq\
		ignition-cmake>2.3:devel/ignition-cmake

USES=		cmake pkgconfig sqlite

USE_GITHUB=	yes
GH_ACCOUNT=	ignitionrobotics
GH_PROJECT=	ign-transport

USE_LDCONFIG=	yes

CMAKE_OFF=	BUILD_TESTING

.include <bsd.port.mk>
