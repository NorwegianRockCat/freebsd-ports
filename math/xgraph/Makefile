PORTNAME=	xgraph
PORTVERSION=	11.3.2.20000910
PORTREVISION=	5
CATEGORIES=	math print
MASTER_SITES=	ftp://ftp.cs.utoronto.ca/pub/radford/
DISTNAME=	xgraph-11

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Program that helps you plot graphs

LICENSE=	XGRAPH
LICENSE_NAME=	xgraph license
LICENSE_FILE=	${WRKSRC}/COPYING
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		imake tar:Z xorg
USE_XORG=	x11 xext

WRKSRC=		${WRKDIR}/${PORTNAME}

OPTIONS_DEFINE=	EXAMPLES

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-Wno-error=int-conversion
.endif

post-extract:
	@${SED} -ne '2,19 {s|^ \* *||;p;}' < ${WRKSRC}/copyright.h > ${WRKSRC}/COPYING

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/examples/xgraph
	${INSTALL_DATA} ${WRKSRC}/examples/*.xg ${STAGEDIR}${PREFIX}/share/examples/xgraph

.include <bsd.port.mk>
