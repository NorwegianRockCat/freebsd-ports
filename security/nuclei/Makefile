PORTNAME=	nuclei
DISTVERSIONPREFIX=	v
DISTVERSION=	3.3.10
PORTREVISION=	1
CATEGORIES=	security

MAINTAINER=	dutra@FreeBSD.org
COMMENT=	Fast vulnerability scanner
WWW=		https://github.com/projectdiscovery/nuclei

LICENSE=	MIT

USES=		go:1.22,modules
GO_MODULE=	github.com/projectdiscovery/nuclei/v3

GO_TARGET=	./cmd/${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
