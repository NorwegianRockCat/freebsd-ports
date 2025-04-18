PORTNAME=	nntp
PORTVERSION=	1.5.12.2
PORTREVISION=	14
CATEGORIES=	news
MASTER_SITES=	ftp://ftp.dinoex.org/pub/c-news/
DISTNAME=	${PORTNAME}.${PORTVERSION}

PATCH_SITES=	ftp://ftp.dinoex.org/pub/c-news/
PATCHFILES=	nntp-patch-ansi4

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	NNTP with NOV support

BUILD_DEPENDS=	${LOCALBASE}/lib/libcnews.a:${CNEWS_PORT}

NO_WRKSUBDIR=	yes
USE_CSTD=	gnu89
CFLAGS+=	-Wno-incompatible-pointer-types
PLIST_SUB+=	VARBASE=${VARBASE}
PLIST_SUB+=	NEWSBIN=${NEWSBIN:S=^${PREFIX}/==}
PLIST_SUB+=	NEWSCTL=${NEWSCTL:S=^${VARBASE}/==}

DOCSFILES1=	AUTHORIZE CHANGES README README-conf.h SYSLOG doc/rfc977
DOCSFILES2=	server support xfer xmit

CNEWS_PORT?=	news/cnews
VARBASE?=	/var
NEWSBIN?=	${PREFIX}/libexec/cnews
NEWSCTL?=	${VARBASE}/lib/news
NEWSARTS?=	${VARBASE}/news
NEWSOV?=	${VARBASE}/news/over.view

MAKE_ENV+=	DBLIBS="${LOCALBASE}/lib/libcnews.a -lcrypt -lutil"
MAKE_ENV+=	ETCDIR="${STAGEDIR}${PREFIX}/sbin"
MAKE_ENV+=	BINDIR="${STAGEDIR}${NEWSBIN}"
MAKE_ENV+=	MANDIR="${STAGEDIR}${PREFIX}/share/man"
MAKE_ENV+=	EXECDIR="${STAGEDIR}${PREFIX}/libexec"

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-extract:
	${CP} ${WRKSRC}/conf.h.dist ${WRKSRC}/conf.h

post-patch:
	${REINPLACE_CMD} \
		-e 's=reaper()=reaper(int unused)=' \
		${WRKSRC}/server/netaux.c
	(cd ${WRKSRC} && ${CP} -pr server inetd)
	${REINPLACE_CMD} \
		-e 's|^CPPFLAGS|#CPPFLAGS|' \
		-e 's|ETCDIR|EXECDIR|g' \
		${WRKSRC}/inetd/Makefile

pre-configure:
	${REINPLACE_CMD} \
		-e 's|\#define.ALONE.*||' \
		-e 's|"usenet"|"news"|' \
		-e "s=/usr/local/news/lib/inews=${NEWSBIN}/inject/inews=" \
		-e "s=/usr/local/bin/rnews=${NEWSBIN}/input/rnews=" \
		-e "s=/usr/local/news/lib/bin/config=${NEWSBIN}/config=" \
		-e "s=/usr/local/news/cnewsbin=${NEWSBIN}=" \
		-e "s=/usr/local/news/lib=${NEWSCTL}=" \
		-e "s=/var/news/over.view=${NEWSOV}=" \
		-e "s=/var/news=${NEWSARTS}=" \
		-e "s=/usr/local/bin=${PREFIX}/bin=" \
		-e "s=/usr/local/sbin=${PREFIX}/sbin=" \
		-e "s=/usr/local/man=${PREFIX}/share/man=" \
		${WRKSRC}/conf.h

pre-install:
	${MKDIR} ${STAGEDIR}${NEWSBIN}

post-install:
	${MKDIR} ${STAGEDIR}${NEWSCTL}
	${INSTALL_DATA} ${WRKSRC}/overview.fmt ${STAGEDIR}${NEWSCTL}/overview.fmt

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCSFILES1:S=^=${WRKSRC}/=} ${STAGEDIR}${DOCSDIR}/
.for i in ${DOCSFILES2}
	${INSTALL_DATA} ${WRKSRC}/${i}/README ${STAGEDIR}${DOCSDIR}/${i}-README
.endfor

.include <bsd.port.mk>
