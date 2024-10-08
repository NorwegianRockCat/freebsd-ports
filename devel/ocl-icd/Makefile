PORTNAME=	ocl-icd
DISTVERSIONPREFIX=	v
DISTVERSION=	2.3.2
CATEGORIES=	devel

MAINTAINER=	ohartmann@walstatt.org
COMMENT=	OpenCL Installable Client Driver
WWW=		https://github.com/OCL-dev/ocl-icd

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	opencl>=3.0:devel/opencl

USES=		autoreconf gmake libtool localbase:ldflags pathfix ruby:build

USE_GITHUB=		yes
GH_ACCOUNT=		OCL-dev
USE_LDCONFIG=		yes
GNU_CONFIGURE=		yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS+=	--enable-official-khronos-headers \
			--enable-custom-vendordir \
			--enable-pthread-once

INSTALL_TARGET=	install-strip

CPPFLAGS+=	-DCL_TARGET_OPENCL_VERSION=300

OPTIONS_DEFINE=		DOCS MANPAGES
OPTIONS_DEFAULT=	MANPAGES
OPTIONS_SUB=		yes

MANPAGES_BUILD_DEPENDS=	asciidoc:textproc/asciidoc \
			xmlto:textproc/xmlto

.include <bsd.port.options.mk>

post-patch:
.if	${PORT_OPTIONS:MDOCS} || ${PORT_OPTIONS:MMANPAGES}
	@${REINPLACE_CMD} -e 's|/etc/|${LOCALBASE}/etc/|g' \
		${WRKSRC}/doc/libOpenCL.7.txt.in
.else
	@${REINPLACE_CMD} -e 's|doc tests|tests|g' \
		${WRKSRC}/Makefile.am
.endif

.include <bsd.port.mk>
