PORTNAME=	tdlib
DISTVERSIONPREFIX=	v
DISTVERSION=	1.7.7.20210902 # 1.7.7 is not tagged, just set in CMakeLists.txt
CATEGORIES=	net-im devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Library for building Telegram clients

LICENSE=	BSL

USES=		cmake:testing compiler:c++14-lang gperf ssl

USE_GITHUB=	yes
GH_PROJECT=	td
GH_TAGNAME=	7135caa

CMAKE_OFF=	BUILD_TESTING FREEBSD_BUILD_BENCHMARKS

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DFREEBSD_BUILD_TESTING:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
