PORTNAME=	ros-cmake_modules
DISTVERSION=	0.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS cmake_modules package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest

TEST_DEPENDS=	googletest>=1.8.1:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	cmake_modules

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

FETCH_CMD=	${SCRIPTDIR}/fetch.sh
FETCH_ENV=	DISTDIR="${DISTDIR}" WRKDIR="${WRKDIR}"

NO_ARCH=	yes

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
