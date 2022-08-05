PORTNAME=	recursive
PORTVERSION=	1.085
CATEGORIES=	x11-fonts

MAINTAINER=	trueos@norwegianrockcat.com
COMMENT=	A family of dynamic sans serif and monospaced fonts

LICENSE=	OFL11

USES=		fonts xorg

USE_XORG=	x11
USE_GITHUB=	yes
GH_ACCOUNT=	arrowtype
GH_PROJECT=	recursive
NO_ARCH=	yes
NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS

SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${FIND} ${WRKSRC}/fonts/ArrowType-Recursive-${PORTVERSION} -type f -name \*.otf | while read f; do \
		${INSTALL_DATA} $$f ${STAGEDIR}${FONTSDIR} ; done
	${INSTALL_DATA} ${WRKSRC}/fonts/ArrowType-Recursive-${PORTVERSION}/Recursive_Desktop/Recursive_VF_${PORTVERSION}.ttf ${STAGEDIR}${FONTSDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/fonts/ArrowType-Recursive-${PORTVERSION}/Recursive_Code/README.md \
		${STAGEDIR}${DOCSDIR}/README-Rec_Mono_Code.md
	${INSTALL_DATA} ${WRKSRC}/fonts/ArrowType-Recursive-${PORTVERSION}/Recursive_Desktop/README.md \
		${STAGEDIR}${DOCSDIR}/README-Recursive_Desktop.md

.include <bsd.port.mk>
