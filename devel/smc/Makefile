PORTNAME=	smc
PORTVERSION=	4.3.0
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/OldFiles
DISTNAME=	${PORTNAME}_${PORTVERSION:S/./_/g}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The State Machine Compiler
WWW=		https://smc.sourceforge.net/

USES=		java tar:tgz

NO_BUILD=	yes

PORTEXAMPLES=	*

OPTIONS_DEFINE=	EXAMPLES

do-install:
	${INSTALL_DATA} ${WRKSRC}/bin/Smc.jar ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${WRKSRC}/lib/statemap.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/lib/statemap.jar ${STAGEDIR}${JAVAJARDIR}
	${CP} -R ${WRKSRC}/lib/statemap1.0 ${STAGEDIR}${PREFIX}/include
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
