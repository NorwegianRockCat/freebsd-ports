PORTNAME=		webots
PORTVERSION=		2021a
DISTVERSIONPREFIX=	R
CATEGORIES=		cad devel java
DISTFILES=		${DISTNAME:C/_GH[0-9]+/_deps/}${EXTRACT_SUFX} ${_DUMMY}

MAINTAINER=	henrik@gulbra.net
COMMENT=	Robot simulator

LICENSE=	APACHE20

FETCH_DEPENDS=	npm:www/npm
BUILD_DEPENDS=	node:www/node\
		check_urdf:devel/ros-urdfdom\
		cmake:devel/cmake\
		${LOCALBASE}/include/sensor_msgs/Imu.h:devel/ros-sensor_msgs\
		${LOCALBASE}/include/tf2/LinearMath/Quaternion.h:devel/ros-tf2\
		${LUA_REFMODLIBDIR}/gd.so:graphics/lua-gd@${LUA_FLAVOR}\
		swig:devel/swig\
		zip:archivers/zip
LIB_DEPENDS=	libassimp.so:multimedia/assimp\
		libcpp_common.so:devel/ros-cpp_common\
		libfreetype.so:print/freetype2\
		libicudata.so:devel/icu\
		libicui18n.so:devel/icu\
		libicuuc.so:devel/icu\
		libOIS.so:devel/ois\
		libopenal.so:audio/openal-soft\
		librosconsole.so:devel/ros-rosconsole\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		libroscpp.so:devel/ros-roscpp\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		librostime.so:devel/ros-rostime\
		libssh.so:security/libssh\
		libttspico.so:audio/libttspico\
		libudev.so:devel/libudev-devd\
		libxmlrpcpp.so:devel/ros-xmlrpcpp\
		libzip.so:archivers/libzip
RUN_DEPENDS=	${LUA_REFMODLIBDIR}/gd.so:graphics/lua-gd@${LUA_FLAVOR}

USES=		dos2unix gettext-runtime gl gmake lua:52 python:3.7 qt:5\
		shebangfix ssl

DOS2UNIX_GLOB=	minIni.c

USE_GITHUB=	yes
GH_ACCOUNT=	cyberbotics
GH_TUPLE=	aseba-community:aseba:3c14f0cb:A/${_THYCTL}/thymio2_aseba/aseba\
		aseba-community:dashel:1a8d36e7:B/${_THYLIB}/dashel-src\
		cyberbotics:webots_ros:8b17bf4e:C/resources/webots_ros\
		g-truc:glm:dd48b56e:D/src/glm\
		mrdoob:three.js:r104:E\
		nothings:stb:f67165c2:F/src/stb

USE_GL=		gl glu
USE_JAVA=	yes
JAVA_BUILD=	yes
USE_LDCONFIG=	yes

USE_QT=		buildtools concurrent core gui linguisttools multimedia network\
		opengl printsupport sensors sql webchannel webengine websockets\
		widgets xml

SHEBANG_GLOB=	*.py *.sh *.sh.in

MAKE_ARGS=	ROS_DISTRO=noetic
SCRIPTS_ENV=	DISTNAME="${DISTNAME}"\
		QT5_VERSION="${QT5_VERSION}"\
		_TIME="${_TIME}"

ALL_TARGET=	release

LDFLAGS+=	-L${LOCALBASE}/lib
BINARY_ALIAS=	make=gmake\
		python=${PYTHON_CMD}

### JAVASCRIPT DEPENDENCIES ####################################################

# JavaScript stuff is a special case handled by scripts/pre-fetch.
# The resulting tarball must be in DISTFILES to benefit from the
# ordinary machinery for checksums and extraction, but portlint
# complains if it thinks that we put a single file in DISTFILES.
_DUMMY=

# This unique timestamp for dependencies was extracted by
#     time=$(git tag --format "%(taggerdate)" -l ${GH_TAGNAME})
#     date -u -j -f "%a %b %e %T %Y %z" "${time}" "+%FT%TZ"
_TIME=		2020-12-15T09:43:45Z

### OTHER LOCAL VARIABLES ######################################################

_THYCTL=	projects/robots/mobsya/thymio/controllers
_THYLIB=	projects/robots/mobsya/thymio/libraries

################################################################################

post-patch:
	${RM} "${WRKSRC}/bin/qt.conf"
	${TOUCH} "${WRKSRC}/resources/web/wwi/install.token"

post-build:
	FILESDIR=${FILESDIR} WRKSRC=${WRKSRC} ${SCRIPTDIR}/make-index

post-install:
	${LN} -s ../share/webots/webots ${STAGEDIR}${PREFIX}/bin/webots
	${FIND} ${STAGEDIR} -type f ! -name "*.a" | while read file; do\
		if readelf -h $${file} 2> /dev/null | ${GREP} -q ELF; then\
			${STRIP_CMD} $${file} 2> /dev/null;\
		fi;\
	done

.include <bsd.port.mk>
