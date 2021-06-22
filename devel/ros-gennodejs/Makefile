PORTNAME=	ros-gennodejs
DISTVERSION=	2.0.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS gennodejs package

LICENSE=	APACHE20

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/setuptools:devel/py-setuptools@${PY_FLAVOR}
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	sloretz
GH_PROJECT=	gennodejs

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	genmsg
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
