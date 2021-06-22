PORTNAME=	ros-rqt_web
DISTVERSION=	0.4.10
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_web package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_web

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

_BUILD_RDEPS=	catkin
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	python_qt_binding qt_gui rospy rqt_gui rqt_gui_py webkit_dependency
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
