PORTNAME=	Alien-Base-ModuleBuild
PORTVERSION=	1.17
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module::Build subclass for building Alien:: modules and libraries
WWW=		https://metacpan.org/release/Alien-Base-ModuleBuild

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Alien-Build>=0:devel/p5-Alien-Build \
		p5-Archive-Extract>=0.80:archivers/p5-Archive-Extract \
		p5-File-chdir>=0.1010:devel/p5-File-chdir \
		p5-Path-Tiny>=0.108:devel/p5-Path-Tiny \
		p5-Shell-Config-Generate>=0.33:devel/p5-Shell-Config-Generate \
		p5-Shell-Guess>=0.09:devel/p5-Shell-Guess \
		p5-Sort-Versions>=1.62:devel/p5-Sort-Versions
TEST_DEPENDS=	p5-Test-Simple>=1.302200:devel/p5-Test-Simple \
		p5-Inline-CPP>=0.75:devel/p5-Inline-CPP

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

.include <bsd.port.mk>
