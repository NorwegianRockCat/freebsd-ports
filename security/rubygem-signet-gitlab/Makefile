PORTNAME=	signet
PORTVERSION=	0.19.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-gitlab

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	OAuth 1.0 / OAuth 2.0 implementation
WWW=		https://github.com/google/signet

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-addressable>=2.8<3:www/rubygem-addressable \
		rubygem-faraday-gitlab>=0.17.5<3.0:www/rubygem-faraday-gitlab \
		rubygem-jwt>=1.5<3.0:www/rubygem-jwt \
		rubygem-multi_json>=1.10<2:devel/rubygem-multi_json

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
