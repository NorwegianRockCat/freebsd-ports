PORTNAME=	ros-rqt_nav_view
DISTVERSION=	0.5.7
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_nav_view package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_nav_view

SHEBANG_FILES=	scripts/rqt_nav_view

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	geometry_msgs nav_msgs python_qt_binding qt_gui rospy rqt_gui\
		rqt_gui_py rqt_py_common tf

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
