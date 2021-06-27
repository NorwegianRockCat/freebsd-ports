PORTNAME=	ros-catkin
DISTVERSION=	0.8.10
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	trueos@norwegianrockcat.com
COMMENT=	CMake-based build system that is used to build all packages in ROS

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${_PYLIBDIR}/mock:devel/py-mock@${PY_FLAVOR}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${_PYLIBDIR}/setuptools:devel/py-setuptools@${PY_FLAVOR}\
		${LOCALBASE}/include/gmock/gmock.h:devel/googletest\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
RUN_DEPENDS=	${_COMMON_XDEPS}

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	catkin

SHEBANG_FILES=	cmake/templates/env.sh.in\
		cmake/templates/script.bash.in\
		cmake/templates/script.sh.in

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

LINUXBASE=	${PREFIX} # Silence qa check for shebangs in templates

_COMMON_XDEPS=	${_PYLIBDIR}/em.py:textproc/py-empy@${PY_FLAVOR}\
		catkin_find_pkg:devel/ros-catkin_pkg

_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
