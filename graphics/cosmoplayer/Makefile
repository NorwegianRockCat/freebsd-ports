PORTNAME=	cosmoplayer
PORTVERSION=	2.1.1
PORTREVISION=	2
CATEGORIES=	graphics
#MASTER_SITES=	http://opendx.npaci.edu/libs/
MASTER_SITES=	http://distfiles.macports.org/${PORTNAME}/	\
		http://lil.fr.distfiles.macports.org/${PORTNAME}/	\
		http://ftp.leg.uct.ac.za/pub/packages/macports/distfiles/${PORTNAME}/
DISTNAME=	${PORTNAME}-jar

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Java classes to support VRML
WWW=		http://cic.nist.gov/vrml/cosmoplayer.html

LICENSE=	SGI
LICENSE_NAME=	SGI
LICENSE_FILE=	${WRKSRC}/License
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror auto-accept

DEPRECATED=	Abandonware
EXPIRATION_DATE=2025-07-31

RUN_DEPENDS=	${JAVALIBDIR}/java40.jar:devel/netscape-java40

USES=		java

NO_BUILD=	yes
NO_ARCH=	yes

JARFILES=	npcosmop211.jar

PLIST_FILES=	${JARFILES:S|^|%%JAVAJARDIR%%/|}

post-extract:
	${MV} ${WRKDIR}/comsoplayer-jar ${WRKSRC}

do-install:
	${INSTALL_DATA} ${JARFILES:S|^|${WRKSRC}/|} ${STAGEDIR}${JAVAJARDIR}

.include <bsd.port.mk>
