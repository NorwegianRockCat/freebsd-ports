PORTNAME=	attica
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Open Collaboration Services API library

# The sources are LGPL21 or LGPL3 or later-version-approved-by-KDE,
# so use the OR of existing license versions. COPYING is LGPL21.
LICENSE=	LGPL21 LGPL3
LICENSE_COMB=	dual

USES=		cmake compiler:c++11-lib kde:5 pathfix qt:5 tar:xz
USE_KDE=	ecm:build
USE_QT=		core network \
		buildtools:build qmake:build testlib:build

.include <bsd.port.mk>
