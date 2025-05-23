PORTNAME=	luscus
DISTVERSION=	0.8.6
PORTREVISION=	4
CATEGORIES=	science
MASTER_SITES=	SF/${PORTNAME}/
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Molecular editor and viewer
WWW=		https://sourceforge.net/projects/luscus/

LICENSE=	AFL
LICENSE_NAME=	Academic Free License
LICENSE_FILE=	${WRKSRC}/License.txt
LICENSE_PERMS=	auto-accept dist-mirror pkg-mirror

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libgdkglext-x11-1.0.so:x11-toolkits/gtkglext
RUN_DEPENDS=	bash:shells/bash \
		obabel:science/openbabel # see https://sourceforge.net/p/luscus/tickets/5/

USES=		cmake compiler:c++11-lang gettext-runtime gl gnome pkgconfig \
		shebangfix xorg
SHEBANG_GLOB=	*.sh
USE_GNOME=	atk cairo gdkpixbuf glib20 gtk20 pango pangox-compat
USE_GL=		gl glu
USE_XORG=	x11

CFLAGS+=	-fcommon # variables n_geometries/move_molecule/window/pix/etc are defined in the header

post-patch:
	@${REINPLACE_CMD} 's|/etc/luscus|${DATADIR}|' ${WRKSRC}/gv_system.c
	@${REINPLACE_CMD} -i '' 's|$$HOME/\.${PORTNAME}/|${LOCALBASE}/bin/|' ${WRKSRC}/*/*/*.sh
	@${REINPLACE_CMD} -i '' 's|$$RUNDIR/|${LOCALBASE}/bin/|' ${WRKSRC}/*/*/*.sh

.include <bsd.port.mk>
