PORTNAME=	kicad
DISTVERSION=	r${GIT_SYM_DATE}
PORTREVISION=	2
CATEGORIES=	cad
MASTER_SITES=	https://gitlab.com/kicad/libraries/${PORTNAME}-symbols/-/archive/${GL_TAGNAME}/
PKGNAMESUFFIX=	-library-symbols-devel
DISTNAME=	${PORTNAME}-symbols-${GL_TAGNAME}

MAINTAINER=	mr@FreeBSD.org
COMMENT=	Official KiCad schematic symbol libraries (Git snapshot)
WWW=		https://github.com/KiCad/kicad-symbols

LICENSE=	GPLv2

RUN_DEPENDS=	kicad:cad/kicad-devel

CONFLICTS_INSTALL=	kicad-library-symbols # share/kicad/symbols/4xxx.kicad_sym

USE_GITLAB=	nodefault
GL_ACCOUNT=	kicad
GL_PROJECT=	kicad/symbols
GL_TAGNAME=	${GIT_SYM_HASH}

USES=		cmake

CMAKE_ARGS=	-DLOCALBASE="${LOCALBASE}" \
		-DCMAKE_BUILD_TYPE="Release" \
		-DKICAD_TESTING_VERSION=ON \
		-DKICAD_BUILD_VERSION=${DISTVERSION}
INSTALL_TARGET=	install

NO_ARCH=	yes

.include "Makefile.git_rev"

# Updating to new rev:
# sh files/newVersion.sh
# make install #breaks probably due to plist differences
# make makeplist > pkg-plist #One has to edit/review the generated plist
# make generate-plist && make check-plist

.include <bsd.port.mk>
