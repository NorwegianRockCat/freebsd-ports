PORTNAME=	ros-qt_gui
DISTVERSION=	0.4.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS qt_gui package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		sip-build:devel/py-sip@${PY_FLAVOR}

RUN_DEPENDS=	${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg@${PY_FLAVOR}\
		${LOCALBASE}/share/icons/Tango:x11-themes/icons-tango

USES=		cmake pyqt:5 python qmake:no_env qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	qt_gui_core

USE_PYQT=	sip

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	qt_gui

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
