PORTNAME=		stage
DISTVERSIONPREFIX=	v
DISTVERSION=		4.3.0
CATEGORIES=		misc

MAINTAINER=	henrik@gulbra.net
COMMENT=	Mobile 2D robot simulator

LICENSE=	GPLv2

LIB_DEPENDS=	libltdl.so:devel/libltdl\
		libpng16.so:graphics/png\
		libfltk_images.so:x11-toolkits/fltk\
		libfltk_forms.so:x11-toolkits/fltk\
		libfltk_gl.so:x11-toolkits/fltk\
		libfltk.so:x11-toolkits/fltk

USES=		cmake gl jpeg xorg

USE_GITHUB=	yes
GH_ACCOUNT=	rtv
GH_PROJECT=	Stage

USE_GL=		gl glu
USE_LDCONFIG=	yes
USE_XORG=	ice sm x11 xext

LDFLAGS+=	-lpthread

post-stage:
	${LN} -fs libstage.so.4.3.0 ${STAGEDIR}${PREFIX}/lib/libstage.so.4.3
	${LN} -fs libstage.so.4.3 ${STAGEDIR}${PREFIX}/lib/libstage.so.4
	${LN} -fs libstage.so.4 ${STAGEDIR}${PREFIX}/lib/libstage.so

.include <bsd.port.mk>
