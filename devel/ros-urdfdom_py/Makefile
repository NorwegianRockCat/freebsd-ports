PORTNAME=	ros-urdfdom_py
DISTVERSION=	0.4.5
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	Python implementation of the URDF parser

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	catkin_make:devel/ros-catkin\
		catkin_find_pkg:devel/ros-catkin_pkg\
		${_PYLIBDIR}/em.py:textproc/py-empy@${PY_FLAVOR}
RUN_DEPENDS=	${_PYLIBDIR}/yaml:devel/py-yaml@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	urdf_parser_py

USE_PYTHON=	flavors

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_PYLIBDIR=	${PYTHON_SITELIBDIR}

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
