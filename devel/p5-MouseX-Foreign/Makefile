# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	MouseX-Foreign
PORTVERSION=	1.000
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Extends non-Mouse classes as well as Mouse classes

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Mouse>=0.77:devel/p5-Mouse
TEST_DEPENDS=	p5-Any-Moose>=0.15:devel/p5-Any-Moose \
		p5-Moose>=0:devel/p5-Moose \
		p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-Requires>=0:devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

.include <bsd.port.mk>
