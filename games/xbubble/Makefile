PORTNAME=	xbubble
PORTVERSION=	0.5.8
PORTREVISION=	8
CATEGORIES=	games
MASTER_SITES=	OPENBSD/distfiles LOCAL/danfe

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Puzzle Bobble clone for Unix/X11 platforms
WWW=		https://www.nongnu.org/xbubble/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpng.so:graphics/png

USES=		gmake localbase:ldflags xorg
USE_XORG=	x11 xmu
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls
NLS_LIBS=	-lintl

.include <bsd.port.mk>
