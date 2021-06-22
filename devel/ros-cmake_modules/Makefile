PORTNAME=	ros-cmake_modules
DISTVERSION=	0.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS cmake_modules package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	cmake_modules

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

FETCH_CMD=	${SCRIPTDIR}/fetch.sh
FETCH_ENV=	DISTDIR="${DISTDIR}" WRKDIR="${WRKDIR}"

NO_ARCH=	yes

_BUILD_RDEPS=	catkin
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
