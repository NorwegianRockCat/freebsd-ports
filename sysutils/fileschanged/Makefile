PORTNAME=	fileschanged
PORTVERSION=	0.6.5
PORTREVISION=	4
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility that reports when files have been altered
WWW=		https://fileschanged.sourceforge.net/

LIB_DEPENDS=	libargp.so:devel/argp-standalone
BUILD_DEPENDS=	help2man:misc/help2man

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
USES=		fam gmake localbase
CONFIGURE_ARGS=	--datadir=${PREFIX}/share/doc --disable-nls

LIBS+=		-largp

INFO=		fileschanged
PORTDOCS=	AUTHORS ChangeLog INSTALL NEWS README
PLIST_FILES=	bin/fileschanged share/man/man1/fileschanged.1.gz

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's| -Werror||' ${WRKSRC}/src/Makefile.in

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for DOCFILE in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${DOCFILE} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
