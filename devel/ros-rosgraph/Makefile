PORTNAME=	ros-rosgraph
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosgraph package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/mock:devel/py-mock@${PY_FLAVOR}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}
RUN_DEPENDS=	${_PYLIBDIR}/netifaces${_PYE}.so:net/py-netifaces@${PY_FLAVOR}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg@${PY_FLAVOR}\
		${_PYLIBDIR}/yaml:devel/py-yaml@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	tools/rosgraph

_BUILD_RDEPS=	catkin
_PYE=		${PYTHON_EXT_SUFFIX}
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
