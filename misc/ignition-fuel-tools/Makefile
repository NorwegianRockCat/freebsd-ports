PORTNAME=		ignition-fuel-tools
DISTVERSIONPREFIX=	${PORTNAME}${DISTVERSION:R:R}_
DISTVERSION=		4.3.0
CATEGORIES=		misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Classes and tools for interacting with Ignition Fuel

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	ignition-cmake>=2<3:devel/ignition-cmake
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libignition-common3.so:devel/ignition-common \
		libignition-math6.so:math/ignition-math\
		libignition-msgs5.so:devel/ignition-msgs\
		libjsoncpp.so:devel/jsoncpp \
		libprotobuf.so:devel/protobuf\
		libtinyxml2.so:textproc/tinyxml2\
		libuuid.so:misc/e2fsprogs-libuuid \
		libyaml.so:textproc/libyaml \
		libzip.so:archivers/libzip

USES=		cmake compiler:c++17-lang pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	ignitionrobotics
GH_PROJECT=	ign-fuel-tools

USE_LDCONFIG=	yes

CMAKE_OFF=	BUILD_TESTING

PLIST_SUB+=	FUEL_TOOLS_IGN_VER=fuel_tools${DISTVERSION:R:R}

do-test: # 4 tests are known to fail: https://bitbucket.org/ignitionrobotics/ign-fuel-tools/issues/48/4-unit-tests-fail-unit_fuelclient_test
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DBUILD_TESTING=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
