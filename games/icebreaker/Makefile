PORTNAME=	icebreaker
PORTVERSION=	1.9.8
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	https://mattdm.org/icebreaker/1.9.x/ \
		SF/nemysisfreebsdp/games/${PORTNAME}/:icons
DISTFILES=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX} \
		${PORTNAME}.png:icons
EXTRACT_ONLY=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Game similar to Jezzball or Barrack
WWW=		https://mattdm.org/icebreaker/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake sdl tar:tgz
USE_SDL=	mixer sdl

PORTDOCS=	ChangeLog README README.SDL README.ifyoumakechanges \
		README.themes

OPTIONS_DEFINE=	DOCS

post-install:
	${INSTALL_DATA} ${_DISTDIR}/${PORTNAME}.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/
	${INSTALL_DATA} ${FILESDIR}/${PORTNAME}.desktop ${STAGEDIR}${DESKTOPDIR}

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
