PORTNAME=	ros-angles
DISTVERSION=	1.9.13
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS angles package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	angles

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	angles

_BUILD_RDEPS=	catkin rosunit
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
