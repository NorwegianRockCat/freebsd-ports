# We follow the stable channel on https://omahaproxy.appspot.com/
# https://chromium.googlesource.com/v8/v8/+/refs/heads/9.2-lkgr

PORTNAME=	v8
PORTVERSION=	9.2.230.22
CATEGORIES=	lang
MASTER_SITES=	LOCAL/sunpoet/v8/${PORTVERSION:R:R}
DISTFILES=	build-${BUILD_REV}.tar.gz \
		buildtools-${BUILDTOOLS_REV}.tar.gz \
		clang-${CLANG_REV}.tar.gz \
		common-${COMMON_REV}.tar.gz \
		googletest-${GOOGLETEST_REV}.tar.gz \
		icu-${ICU_REV}.tar.gz \
		zlib-${ZLIB_REV}.tar.gz
EXTRACT_ONLY=	${DISTNAME}.tar.gz
DIST_SUBDIR=	v8/${PORTVERSION:R:R}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Open source JavaScript engine by Google

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	binutils>=0:devel/binutils \
		gn:devel/gn \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=0:devel/py-Jinja2@${PY_FLAVOR}
LIB_DEPENDS=	libicudata.so:devel/icu

USES=		cpe gnome ninja pkgconfig python:3.5+,build tar:xz
USE_GNOME=	glib20

BINARY_ALIAS=	python3=${PYTHON_CMD}
MAKE_ARGS=	-C out/Release
USE_LDCONFIG=	yes

SUB_FILES=	v8.pc v8_libbase.pc v8_libplatform.pc

USE_GITHUB=	yes

CPE_VENDOR=	google

BUILD_REV=	4036cf1b17581f5668b487a25e252d56e0321a7f
BUILDTOOLS_REV=	20b1d0fc13ebaa263a1248f08814f523a86e6bed
CLANG_REV=	a38f01b956e091d5e698d2af484c81cd4e9a2a2d
COMMON_REV=	d5bb24e5d9802c8c917fcaa4375d5239a586c168
GOOGLETEST_REV=	23ef29555ef4789f555f1ba8c51b4c52975f0907
ICU_REV=	f022e298b4f4a782486bb6d5ce6589c998b51fe2
ZLIB_REV=	5b8d433953beb2a75a755ba321a3076b95f7cdb9

# Run "gn args --list out/Release" for all variables.
# Some parts don't have use_system_* flag, and can be turned on/off by using
# replace_gn_files.py script, some parts just turned on/off for target host
# OS "target_os == is_bsd", like libusb, libpci.
GN_ARGS+=	clang_use_chrome_plugins=false \
		extra_cxxflags="${CXXFLAGS}" \
		extra_ldflags="${LDFLAGS}" \
		is_clang=true \
		treat_warnings_as_errors=false \
		use_aura=true \
		use_lld=true \
		use_custom_libcxx=false \
		v8_use_external_startup_data=false

post-extract:
	@${MKDIR} ${WRKSRC}/base/trace_event/common ${WRKSRC}/build ${WRKSRC}/buildtools ${WRKSRC}/third_party/googletest/src ${WRKSRC}/third_party/icu ${WRKSRC}/third_party/zlib ${WRKSRC}/tools/clang
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/build-${BUILD_REV}.tar.gz -C ${WRKSRC}/build
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/buildtools-${BUILDTOOLS_REV}.tar.gz -C ${WRKSRC}/buildtools
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/clang-${CLANG_REV}.tar.gz -C ${WRKSRC}/tools/clang
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/common-${COMMON_REV}.tar.gz -C ${WRKSRC}/base/trace_event/common
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/googletest-${GOOGLETEST_REV}.tar.gz -C ${WRKSRC}/third_party/googletest/src
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/icu-${ICU_REV}.tar.gz -C ${WRKSRC}/third_party/icu
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/zlib-${ZLIB_REV}.tar.gz -C ${WRKSRC}/third_party/zlib

post-patch:
	@${REINPLACE_CMD} -i '' 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/build/toolchain/gcc_toolchain.gni ${WRKSRC}/buildtools/third_party/libc++/BUILD.gn
	# https://github.com/klzgrad/naiveproxy/blob/master/src/build/config/gclient_args.gni
	${ECHO_CMD} 'checkout_google_benchmark = false' > ${WRKSRC}/build/config/gclient_args.gni

# Use ICU from ports and create needed directory
pre-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${PYTHON_CMD} ./build/linux/unbundle/replace_gn_files.py --system-libraries icu # || ${FALSE}
	@${MKDIR} ${WRKSRC}/out/Release/gen/shim_headers/icui18n_shim/third_party/icu/source/i18n/unicode ${WRKSRC}/out/Release/gen/shim_headers/icuuc_shim/third_party/icu/source/common/unicode
	@${MKDIR} ${WRKSRC}/out/Release/gen/include
	@${CP} -R ${LOCALBASE}/include/unicode ${WRKSRC}/out/Release/gen/include/unicode

do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} gn gen out/Release --args='${GN_ARGS}'

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/cppgc ${STAGEDIR}${PREFIX}/include/libplatform
	${INSTALL_PROGRAM} ${WRKSRC}/out/Release/d8 ${STAGEDIR}${PREFIX}/bin/d8
	${INSTALL_PROGRAM} ${WRKSRC}/out/Release/mkgrokdump ${STAGEDIR}${PREFIX}/bin/mkgrokdump
	${INSTALL_PROGRAM} ${WRKSRC}/out/Release/mksnapshot ${STAGEDIR}${PREFIX}/bin/mksnapshot
	${INSTALL_LIB} ${WRKSRC}/out/Release/libchrome_zlib.so ${STAGEDIR}${PREFIX}/lib/libchrome_zlib.so
	${INSTALL_LIB} ${WRKSRC}/out/Release/libcppgc.so ${STAGEDIR}${PREFIX}/lib/libcppgc.so
	${INSTALL_LIB} ${WRKSRC}/out/Release/libv8.so ${STAGEDIR}${PREFIX}/lib/libv8.so
	${INSTALL_LIB} ${WRKSRC}/out/Release/libv8_libbase.so ${STAGEDIR}${PREFIX}/lib/libv8_libbase.so
	${INSTALL_LIB} ${WRKSRC}/out/Release/libv8_libplatform.so ${STAGEDIR}${PREFIX}/lib/libv8_libplatform.so
	${INSTALL_DATA} ${WRKSRC}/include/*.h ${STAGEDIR}${PREFIX}/include/
	cd ${WRKSRC}/include/cppgc && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/include/cppgc '-name *\.h'
	${INSTALL_DATA} ${WRKSRC}/include/libplatform/*.h ${STAGEDIR}${PREFIX}/include/libplatform/
	${INSTALL_DATA} ${WRKDIR}/v8*.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig/

.include <bsd.port.mk>
