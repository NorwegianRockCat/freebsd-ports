PORTNAME=	google-cloud-core
PORTVERSION=	1.7.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-gitlab

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Internal shared library for Google Cloud Client Library
WWW=		https://cloud.google.com/ruby/docs/reference/google-cloud-core/latest/ \
		https://googleapis.github.io/google-cloud-ruby/docs/ \
		https://github.com/googleapis/google-cloud-ruby/tree/main/google-cloud-core \
		https://github.com/googleapis/google-cloud-ruby

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-google-cloud-env-gitlab>=1.0<3.0:net/rubygem-google-cloud-env-gitlab \
		rubygem-google-cloud-errors>=1.0<2:net/rubygem-google-cloud-errors

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
