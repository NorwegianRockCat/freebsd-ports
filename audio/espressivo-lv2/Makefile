PORTNAME=	espressivo
DISTVERSION=	0.1.639
CATEGORIES=	audio
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	LV2 plugin bundle to handle expressive events
WWW=		https://gitlab.com/OpenMusicKontrollers/espressivo.lv2

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	lv2>0:audio/lv2 \
		lv2lint:audio/lv2lint \
		sord_validate:devel/sord

USES=		compiler:c11 meson pkgconfig
USE_GITLAB=	yes
GL_ACCOUNT=	OpenMusicKontrollers
GL_PROJECT=	${PORTNAME}.lv2
GL_TAGNAME=	8df30bc1ecf55be98ccf9a8b1ffc63d09dfa6895

PLIST_FILES=	lib/lv2/espressivo.lv2/espressivo.so \
		lib/lv2/espressivo.lv2/espressivo.ttl \
		lib/lv2/espressivo.lv2/manifest.ttl

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-Wno-error=int-conversion
.endif

.include <bsd.port.post.mk>
