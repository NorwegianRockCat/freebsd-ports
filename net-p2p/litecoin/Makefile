PORTNAME=	litecoin
DISTVERSIONPREFIX=	v
DISTVERSION=	0.21.4
PORTREVISION=	6
CATEGORIES=	net-p2p finance

MAINTAINER=	hsw@bitmark.com
COMMENT?=	Virtual Peer-to-Peer Currency Client (QT)
WWW=		https://www.litecoin.org/

LICENSE=	MIT

LIB_DEPENDS=	libboost_date_time.so:devel/boost-libs \
		libfmt.so:devel/libfmt \
		libevent.so:devel/libevent

USES=		autoreconf compiler:c++11-lib cpe gmake libtool localbase pkgconfig qt:5 shebangfix ssl

USE_GITHUB=	yes
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

SLAVE_PORT?=	no

.if defined(SLAVE_PORT) && ${SLAVE_PORT} == "no"
USES+=		desktop-file-utils
USE_QT=		core gui network widgets \
		buildtools:build linguisttools:build qmake:build

BUILD_DEPENDS+=	protoc:devel/protobuf
LIB_DEPENDS+=	libprotobuf.so:devel/protobuf

TESTS_USE=		QT=testlib
TESTS_PLIST_FILES=	bin/test_litecoin-qt \
			bin/test_litecoin
.endif

OPTIONS_DEFINE?=	DBUS DEBUG HARDENING QRCODES TESTS UPNP WALLET_BDBMODERN ZMQ
OPTIONS_DEFAULT?=	DBUS HARDENING QRCODES UPNP WALLET_BDBMODERN ZMQ
OPTIONS_SUB=		yes

HARDENING_DESC=	Attempt to harden binaries (PIE for ASLR, NX Stack)
QRCODES_DESC=	Display QR Codes
TESTS_DESC=	Build test binary and unit tests
WALLET_BDBMODERN_DESC=	Wallet using modern BDB 18.x
ZMQ_DESC=	Block and transaction broadcasting with ZeroMQ

DBUS_CONFIGURE_WITH=	dbus
DBUS_USE=		QT=dbus

DEBUG_CONFIGURE_ENABLE=		debug
DEBUG_INSTALL_TARGET_OFF=	install-strip

HARDENING_CONFIGURE_ENABLE=	hardening

TESTS_CONFIGURE_ENABLE=	tests bench
.if defined(SLAVE_PORT) && ${SLAVE_PORT} == "yes"
TESTS_PLIST_FILES=	bin/test_litecoin
.endif
TESTS_PLIST_FILES+=	bin/bench_litecoin

UPNP_CONFIGURE_WITH=	miniupnpc
UPNP_LIB_DEPENDS=	libminiupnpc.so:net/miniupnpc

QRCODES_CONFIGURE_WITH=	qrencode
QRCODES_LIB_DEPENDS=	libqrencode.so:graphics/libqrencode

ZMQ_CONFIGURE_ENABLE=	zmq
ZMQ_LIB_DEPENDS=	libzmq.so:net/libzmq4

GH_ACCOUNT=	litecoin-project

CONFIGURE_ARGS?=	--without-libs \
			--with-gui=qt5 \
			--without-daemon \
			--without-utils

CONFIGURE_ENV=	CRYPTO_CFLAGS="-I${OPENSSLINC}" CRYPTO_LIBS="-L${OPENSSLLIB} -lcrypto" \
		SSL_CFLAGS="-I${OPENSSLINC}" SSL_LIBS="-L${OPENSSLLIB} -lssl" \
		OBJCXX="${CXX}" OBJCXXFLAGS="${CXXFLAGS}"
MAKE_ENV+=	V=1

PLIST_FILES?=	bin/litecoin-qt share/man/man1/litecoin-qt.1.gz \
		share/applications/litecoin-qt.desktop share/pixmaps/litecoin.png

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MWALLET_BDBMODERN}
CONFIGURE_ARGS+=	--enable-wallet --with-incompatible-bdb
USES+=			bdb:18
.else
CONFIGURE_ARGS+=	--disable-wallet
.endif

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MWALLET_BDBMODERN}
CPPFLAGS+=	-I${BDB_INCLUDE_DIR}
LIBS+=		-L${BDB_LIB_DIR}
.endif

.if defined(SLAVE_PORT) && ${SLAVE_PORT} == "no"

post-install:
	${INSTALL} ${FILESDIR}/litecoin-qt.desktop \
		${STAGEDIR}${PREFIX}/share/applications/
	${INSTALL} ${WRKSRC}/share/pixmaps/bitcoin128.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/litecoin.png

.endif

regression-test: build
	# To use this sucessfully, remove --without-daemon and --without-utils
	# from CONFIGURE_ARGS above.

	@cd ${WRKSRC} && ${GMAKE} check

.include <bsd.port.post.mk>
