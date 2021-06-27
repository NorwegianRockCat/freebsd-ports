PORTNAME=	libttspico
PORTVERSION=	${_DEBVERSION:S/+git/./:S/-/p/}
CATEGORIES=	audio
MASTER_SITES=	DEBIAN/pool/non-free/s/svox
DISTNAME=	svox-${_DEBVERSION:C/-.*//}
DISTFILES=	svox_${_DEBVERSION:C/-.*//}.orig.tar.gz\
		svox_${_DEBVERSION}.debian.tar.xz

MAINTAINER=	henrik@gulbra.net
COMMENT=	Compact text-to-speech engine

LICENSE=	APACHE20

BUILD_DEPENDS=	help2man:misc/help2man
LIB_DEPENDS=	libpopt.so:devel/popt

USES=		autoreconf libtool localbase
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

CFLAGS+=	-Wall -Werror\
		-Wno-infinite-recursion\
		-Wno-parentheses-equality\
		-Wno-self-assign\
		-Wno-unneeded-internal-declaration\
		-Wno-unused-variable\

PATCH_WRKSRC=	${_SVOXDIR}
WRKSRC_SUBDIR=	pico

PORTDOCS=	${_SVOXDIR}/pico_resources/docs/*.pdf

OPTIONS_DEFINE=	DOCS

_DEBVERSION=	1.0+git20130326-11
_PICODIR=	${WRKSRC}
_SVOXDIR=	${WRKDIR}/${DISTNAME}

pre-patch:
	for p in $$(${GREP} -v '#' "${WRKDIR}/debian/patches/series"); do\
	    ${PATCH} -p1 -Vnone -d "${_SVOXDIR}"\
	         -i ${WRKDIR}/debian/patches/$$p;\
	done

post-build:
	help2man --name 'Small Footprint TTS' --version-string ' ' --no-info\
	    ${_PICODIR}/pico2wave > ${_PICODIR}/pico2wave.1

post-install:
	${INSTALL_MAN} ${_PICODIR}/pico2wave.1\
	     ${STAGEDIR}${MAN1PREFIX}/man/man1/

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
