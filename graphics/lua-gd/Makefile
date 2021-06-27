# Created by: Sergey V. Dyatko <sergey.dyatko@gmail.com>

PORTNAME=	lua-gd
PORTVERSION=	2.0.33r3.g20200223 # which comes before the unreleased 2.0.33r3
CATEGORIES=	graphics
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}

MAINTAINER=	sergey.dyatko@gmail.com
COMMENT=	GD bindings for the Lua programming language

LICENSE=	MIT

LIB_DEPENDS=	libgd.so:graphics/gd

USES=		lua:51-52,module
USE_GITHUB=	yes
GH_ACCOUNT=	ittner
GH_TAGNAME=	2ce8e478

CFLAGS+=	-I${LUA_INCDIR} -I${LOCALBASE}/include
CPPFLAGS+=	-DVERSION=\"${DISTVERSION}\"
LDFLAGS+=	-shared -L${LOCALBASE}/lib -lgd -L${LUA_LIBDIR} -llua-${LUA_VER} -lm
_GDFEATURES=	-DGD_XPM -DGD_JPEG -DGD_FONTCONFIG -DGD_FREETYPE -DGD_PNG -DGD_GIF

DOCSDIR=	${LUA_DOCSDIR}
EXAMPLESDIR=	${LUA_EXAMPLESDIR}

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.options.mk>

CFLAGS_aarch64=	-fPIC
CFLAGS_amd64=	-fPIC
CFLAGS_armv7=	-fPIC
CFLAGS_i386=	-fPIC
CFLAGS_powerpc=	-fPIC
CFLAGS_riscv64=	-fPIC

do-build:
	${CC} -o ${WRKSRC}/gd.so ${CPPFLAGS} ${CFLAGS} ${LDFLAGS} ${_GDFEATURES} ${WRKSRC}/luagd.c

do-install:
	${MKDIR} ${STAGEDIR}${LUA_MODLIBDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/gd.so ${STAGEDIR}${LUA_MODLIBDIR}
	${SETENV} LUA_CPATH=${STAGEDIR}${LUA_MODLIBDIR}/?.so ${LUA_CMD} ${WRKSRC}/test_features.lua

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/doc/ && ${INSTALL_DATA} * ${STAGEDIR}${DOCSDIR}/
	@${ECHO_MSG} "===> Documentation installed in ${STAGEDIR}${DOCSDIR}"

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/demos && ${INSTALL_DATA} * ${STAGEDIR}${EXAMPLESDIR}
	@${ECHO_MSG} "===> Examples installed in ${STAGEDIR}${EXAMPLESDIR}"

.include <bsd.port.mk>
