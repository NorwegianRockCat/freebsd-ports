# Created by: Pawel Pekala <pawel@FreeBSD.org>

PORTNAME=	libmaia
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.0
PORTREVISION=	4
CATEGORIES=	net

MAINTAINER=	kde@FreeBSD.org
COMMENT=	XML-RPC library for Qt

USES=		compiler:c++11-lang gmake qmake qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	wiedi
USE_QT=		buildtools_build network xml

PLIST_FILES=	include/maia/maiaObject.h \
		include/maia/maiaXmlRpcClient.h \
		include/maia/maiaXmlRpcServer.h \
		lib/libmaia.a

post-install:
	${INSTALL_DATA} ${WRKSRC}/maiaObject.h \
		${STAGEDIR}${PREFIX}/include/maia

.include <bsd.port.mk>
