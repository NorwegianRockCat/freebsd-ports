PORTNAME=	Dancer-Plugin-Auth-Extensible-Provider-Usergroup
PORTVERSION=	0.21
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extensible authentication framework for Dancer apps
WWW=		https://metacpan.org/pod/Dancer::Plugin::Auth::Extensible::Provider::Usergroup

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

DEPRECATED=	Depends on expired security/p5-Data-Entropy via security/p5-Dancer-Plugin-Passphrase
EXPIRATION_DATE=2025-09-01

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Dancer>=1.3118:www/p5-Dancer \
		p5-Dancer-Plugin-Auth-Extensible>=0:security/p5-Dancer-Plugin-Auth-Extensible \
		p5-Dancer-Plugin-Passphrase>=0:security/p5-Dancer-Plugin-Passphrase \
		p5-Dancer-Plugin-DBIC>=0:databases/p5-Dancer-Plugin-DBIC

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
