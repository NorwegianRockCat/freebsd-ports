PORTNAME=	esecanna
PORTVERSION=	1.0.1
PORTREVISION=	6
CATEGORIES=	japanese
MASTER_SITES=	http://esecanna.netfort.gr.jp/ \
		LOCAL/knu
DISTNAME=	${PORTNAME}_${PORTVERSION}
DIST_SUBDIR=	esecanna

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Pseudo cannaserver which wraps some other input engines
WWW=		http://esecanna.netfort.gr.jp/

DEPRECATED=	Upstream disapeared and distfile is no more available
EXPIRATION_DATE=2025-03-31

USE_RC_SUBR=	esecanna

GNU_CONFIGURE=	yes
USES=		gmake
CONFIGURE_ARGS=	--with-piddir="/var/run/esecanna"

DOCS=		CREDITS CHANGES.jp README.First.jp README.jp

OPTIONS_DEFINE=	DOCS

post-patch:
	${REINPLACE_CMD} -e " \
		s,!!PREFIX!!,${PREFIX},g; \
		" \
		${WRKSRC}/README.jp \
		${WRKSRC}/esecannarc

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/esecanna
	${MKDIR} ${STAGEDIR}${PREFIX}/share/doc/esecanna
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
