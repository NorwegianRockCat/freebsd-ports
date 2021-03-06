PORTNAME=	lms
DISTVERSION=	3.25.2
MASTER_SITES=	https://github.com/epoupon/lms/archive/refs/tags/v${DISTVERSION}${EXTRACT_SUFX}?dummy=/
CATEGORIES=	multimedia

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lightweight Music Server

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libavformat.so:multimedia/ffmpeg \
		libboost_system.so:devel/boost-libs \
		libconfig++.so:devel/libconfig \
		libGraphicsMagick.so:graphics/GraphicsMagick \
		libtag.so:audio/taglib \
		libwthttp.so:www/wt
RUN_DEPENDS=	ffmpeg:multimedia/ffmpeg

USES=		cmake compiler:c++17-lang cpe pkgconfig

USER=		nobody
GROUP=		nobody
SUB_LIST=	USER=${USER}
USE_RC_SUBR=	${PORTNAME}

PLIST_SUB=	USER="${USER}" GROUP="${GROUP}"

post-patch:
	@${REINPLACE_CMD} -e 's|"/etc/lms.conf"|"${PREFIX}/etc/lms.conf"|' \
		${WRKSRC}/src/lms/main.cpp \
		${WRKSRC}/src/tools/cover/LmsCover.cpp \
		${WRKSRC}/src/tools/recommendation/LmsRecommendation.cpp
	@${REINPLACE_CMD} -e 's|"/usr/|"${PREFIX}/|; s|"/var/lms/"|"/var/db/lms/"|' \
		${WRKSRC}/conf/lms.conf

post-install:
	${RLN} ${STAGEDIR}${DATADIR}/lms.conf ${STAGEDIR}${PREFIX}/etc/lms.conf.sample
	${MKDIR} ${STAGEDIR}/var/db/lms

.include <bsd.port.mk>
