PORTNAME=	ros-python_qt_binding
DISTVERSION=	0.4.3
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS python_qt_binding package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${LOCALBASE}/share/genmsg/package.xml:devel/ros-genmsg \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		${LOCALBASE}/share/rosbuild/package.xml:devel/ros-rosbuild \
		googletest>0:devel/googletest \
		sip-build:devel/py-sip@${PY_FLAVOR}

USES=		cmake pyqt:5 python qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	python_qt_binding

USE_PYQT=	pyqt5 sip
USE_QT=		buildtools_build qmake_build

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
