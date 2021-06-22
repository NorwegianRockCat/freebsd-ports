PORTNAME=	ros-qt_gui
DISTVERSION=	0.4.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS qt_gui package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/setuptools:devel/py-setuptools@${PY_FLAVOR}\
		sip-build:devel/py-sip@${PY_FLAVOR}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg@${PY_FLAVOR}\
		${LOCALBASE}/share/icons/Tango:x11-themes/icons-tango

USES=		cmake pyqt:5 python qmake:no_env qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	qt_gui_core

USE_PYQT=	sip

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	qt_gui

_BUILD_RDEPS=	catkin
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	python_qt_binding
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
