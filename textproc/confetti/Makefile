PORTNAME=	confetti
PORTVERSION=	0.0.${DATE}
CATEGORIES=	textproc
MASTER_SITES=	LOCAL/vg

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Configuration file parser generator
WWW=		https://github.com/mailru/confetti

DEPRECATED=	Outdated and unmaintained in tree since 2018
EXPIRATION_DATE=2025-04-30

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:textproc/flex

USES=		bison perl5 gmake tar:bzip2
DATE=		20120801
MAKE_ARGS+=	FLEX=${LOCALBASE}/bin/flex
MAKE_JOBS_UNSAFE=yes

OPTIONS_DEFINE=	EXAMPLES

PLIST_FILES=	bin/confetti
PORTEXAMPLES=	*

post-patch:
	@${REINPLACE_CMD} -e 's|CC=|CC?=|' -e 's|CFLAGS=|CFLAGS?=|' \
		${WRKSRC}/Makefile

do-install:
	${INSTALL} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/example && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
