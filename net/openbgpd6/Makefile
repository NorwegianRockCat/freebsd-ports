PORTNAME=	openbgpd
PORTVERSION=	6.9p0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	OPENBSD/OpenBGPD
PKGNAMESUFFIX=	6

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Free implementation of the Border Gateway Protocol, Version 4
WWW=		https://www.openbgpd.org/

LICENSE=	ISCL
LICENSE_FILE=	${FILESDIR}/COPYING

DEPRECATED=	Unsupported upstream, consider using net/openbgpd8
EXPIRATION_DATE=2025-05-30

USES=		autoreconf libtool uidfix
USE_RC_SUBR=	${PORTNAME}

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

SUB_FILES=	pkg-message

USERS=		_bgpd
GROUPS=		_bgpd

CONFLICTS=	zebra quagga

OPTIONS_DEFINE=		IPV6LLPEER
OPTIONS_DEFAULT=	IPV6LLPEER
IPV6LLPEER_DESC=	Support nexthop using IPv6 link-local address
IPV6LLPEER_MAKE_ARGS=	-DIPV6_LINKLOCAL_PEER

.include <bsd.port.mk>
