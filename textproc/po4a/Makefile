PORTNAME=	po4a
DISTVERSIONPREFIX=	v
DISTVERSION=	0.68
PORTREVISION=	1
CATEGORIES=	textproc perl5

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Brings gettext translation tools to all kinds of docs
WWW=		https://po4a.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${RUN_DEPENDS} \
		p5-Pod-Parser>=0:textproc/p5-Pod-Parser
RUN_DEPENDS=	p5-Term-ReadKey>=2.30:devel/p5-Term-ReadKey \
		p5-Text-WrapI18N>=0.06:textproc/p5-Text-WrapI18N \
		p5-SGMLSpm>=1.03:textproc/p5-SGMLSpm \
		p5-Locale-gettext>=1.05:devel/p5-Locale-gettext \
		p5-Unicode-LineBreak>=0:textproc/p5-Unicode-LineBreak \
		p5-YAML-Tiny>=0:textproc/p5-YAML-Tiny \
		p5-Syntax-Keyword-Try>=0:devel/p5-Syntax-Keyword-Try \
		xsltproc:textproc/libxslt \
		docbook-xsl>0:textproc/docbook-xsl \
		OpenSP>0:textproc/opensp \
		msgmerge:devel/gettext-tools
TEST_DEPENDS=	p5-Test-Pod>=0:devel/p5-Test-Pod

USES=		cpe gettext perl5
USE_PERL5=	modbuild

USE_GITHUB=	yes
GH_ACCOUNT=	mquinson

NO_ARCH=	yes

.include <bsd.port.mk>
