# Created by: Denis Pokataev <catone@cpan.org>

PORTNAME=	AnyEvent-DBI
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Asynchronous DBI access

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-AnyEvent>=4.15:devel/p5-AnyEvent \
		p5-DBI>=1.0:databases/p5-DBI \
		p5-common-sense>=3.3:devel/p5-common-sense

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
