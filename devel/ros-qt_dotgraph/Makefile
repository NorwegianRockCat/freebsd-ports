PORTNAME=	ros-qt_dotgraph
DISTVERSION=	0.4.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS qt_dotgraph package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${_PYLIBDIR}/pygraphviz:graphics/py-pygraphviz@${PY_FLAVOR}\
		${_PYLIBDIR}/setuptools:devel/py-setuptools@${PY_FLAVOR}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/pydot.py:graphics/py-pydot@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	qt_gui_core

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	qt_dotgraph

_BUILD_RDEPS=	catkin
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	python_qt_binding
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
