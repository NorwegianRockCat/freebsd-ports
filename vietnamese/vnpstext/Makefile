PORTNAME=	vnpstext
PORTVERSION=	1.1
PORTREVISION=	2
CATEGORIES=	vietnamese print
MASTER_SITES=	ftp://ftp.monash.edu.au/pub/vietnam/unix/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts 8-bit VISCII Vietnamese text into PostScript

LICENSE=	NONE

USES=		tar:Z

CFLAGS+=	-I../../include

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/vn-fonts
	${INSTALL_PROGRAM} ${WRKSRC}/vnpstext ${STAGEDIR}${PREFIX}/bin
	(cd ${WRKSRC} ; \
	${INSTALL_DATA} *.ps prologs/*.pro ${STAGEDIR}${PREFIX}/share/vn-fonts)
	${INSTALL_MAN} ${WRKSRC}/vnpstext.1V \
		${STAGEDIR}${PREFIX}/share/man/man1/vnpstext.1

.include <bsd.port.mk>
