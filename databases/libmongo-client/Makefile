PORTNAME=	libmongo-client
PORTVERSION=	0.1.6.3
DISTVERSIONPREFIX=	${PORTNAME}-
PORTREVISION=	2
CATEGORIES=	databases

MAINTAINER=	gd.workbox@gmail.com
COMMENT=	Alternative C driver for MongoDB
WWW=		https://github.com/algernon/libmongo-client

LICENSE=	APACHE20

BROKEN=		Unfetchable
DEPRECATED=	Abandonware, upstream removed repo
EXPIRATION_DATE=2024-10-31

USE_GITHUB=	yes
GH_ACCOUNT=	algernon

GNU_CONFIGURE=	yes
USES=		autoreconf gmake gnome libtool pathfix pkgconfig
USE_GNOME=	glib20
USE_LDCONFIG=	yes

.include <bsd.port.mk>
