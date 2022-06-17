PORTNAME=	ros-catkin
DISTVERSION=	0.8.10
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	trueos@norwegianrockcat.com
COMMENT=	CMake-based build system that is used to build all packages in ROS

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	cmake>=3.15:devel/cmake \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}empy>=1:textproc/py-empy@${PY_FLAVOR}


RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}empy>=1:textproc/py-empy@${PY_FLAVOR}

TEST_DEPENDS=	googletest>=1.8.1:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}mock:devel/py-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${PY_FLAVOR}

USES=		cmake python shebangfix
CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	catkin

SHEBANG_FILES=	cmake/templates/env.sh.in\
		cmake/templates/script.bash.in\
		cmake/templates/script.sh.in \

LINUXBASE=	${PREFIX} # Silence qa check for shebangs in templates

post-stage:
	${MV} ${STAGEDIR}${PREFIX}/setup.* ${STAGEDIR}${PREFIX}/env.sh ${STAGEDIR}${PREFIX}/share/catkin
	${FIND} ${STAGEDIR}${PREFIX}/.* -type f -depth 1 -delete

.include <bsd.port.mk>
