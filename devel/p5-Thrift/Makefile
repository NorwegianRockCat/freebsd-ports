PORTNAME=	Thrift
PORTVERSION=	${THRIFT_PORTVERSION}	# need to keep this in sync with ../thrift see ../thrift/bsd.thrift.mk
PORTEPOCH=	1
CATEGORIES=	devel perl5
PKGNAMEPREFIX=	p5-
DISTFILES=

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to Thrift
WWW=		https://thrift.apache.org/

BUILD_DEPENDS=	p5-Bit-Vector>=0:math/p5-Bit-Vector
RUN_DEPENDS=	p5-Bit-Vector>=0:math/p5-Bit-Vector
FETCH_DEPENDS+=	${NONEXISTENT}:devel/thrift:extract

USES=		cpe perl5
USE_PERL5=	configure
NO_ARCH=	yes
CPE_VENDOR=	apache

post-extract:
	@${LN} -sfh \
	`cd ${PORTSDIR}/devel/thrift && ${MAKE} -V WRKSRC`/lib/perl ${WRKSRC}

.include "../thrift/bsd.thrift.mk"
.include <bsd.port.mk>
