PORTNAME=	trivial-gray-streams
PORTVERSION=	20240217
CATEGORIES=	devel lisp
PKGNAMEPREFIX=	cl-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Thin compatibility layer for Gray streams
WWW=		https://www.cliki.net/trivial-gray-streams

LICENSE=	MIT

USES=		cl
USE_GITHUB=	yes
GH_TAGNAME=	a7ead683666849762ea657dac9137d693c5a4929

NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${ASDF_PATHNAME} ${STAGEDIR}${ASDF_PATHNAME}/test \
		${STAGEDIR}${ASDF_REGISTRY}
	${INSTALL_DATA} ${WRKSRC}/*.lisp ${STAGEDIR}${ASDF_PATHNAME}
	${INSTALL_DATA} ${WRKSRC}/test/* ${STAGEDIR}${ASDF_PATHNAME}/test
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.asd ${STAGEDIR}${ASDF_PATHNAME}
	${RLN} ${STAGEDIR}${ASDF_PATHNAME}/${PORTNAME}.asd ${STAGEDIR}${ASDF_REGISTRY}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
