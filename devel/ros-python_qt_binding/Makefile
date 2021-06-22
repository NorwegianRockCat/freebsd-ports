PORTNAME=	ros-python_qt_binding
DISTVERSION=	0.4.3
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS python_qt_binding package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}
RUN_DEPENDS=	${_COMMON_XDEPS}

USES=		cmake pyqt:5 python qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	python_qt_binding

USE_PYQT=	core sip
USE_QT=		buildtools_build qmake_build

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

_BUILD_RDEPS=	catkin rosbuild
_COMMON_XDEPS=	sip-build:devel/py-sip@${PY_FLAVOR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
