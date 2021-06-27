
PORTNAME=		ignition-msgs
DISTVERSION=		5.7.0
CATEGORIES=		devel
MASTER_SITES=	https://bitbucket.org/${BB_ACCOUNT}/${BB_PROJECT}/get/${BB_COMMIT}.tar.gz?dummy=/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Protobuf messages and functions for robot applications

LICENSE=	APACHE20

BUILD_DEPENDS=	ignition-cmake>=2<3:devel/ignition-cmake \
		ignition-tools>0:devel/ignition-tools
LIB_DEPENDS=	libprotobuf.so:devel/protobuf \
		libignition-math6.so:math/ignition-math\
		libtinyxml2.so:textproc/tinyxml2

USES=		compiler:c++11-lang cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ignitionrobotics
GH_PROJECT=	ign-msgs

USE_LDCONFIG=	yes
USE_RUBY=	yes

PLIST_SUB=	MSGS_IGN_VER=msgs${DISTVERSION:R:R}

.include <bsd.port.mk>
