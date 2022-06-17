PORTNAME=	ros-common_tutorials
DISTVERSION=	0.2.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS common_tutorials package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/actionlib_tutorials/package.xml:devel/ros-actionlib_tutorials \
		${LOCALBASE}/share/nodelet_tutorial_math/package.xml:devel/ros-nodelet_tutorial_math \
		${LOCALBASE}/share/pluginlib_tutorials/package.xml:devel/ros-pluginlib_tutorials \
		${LOCALBASE}/share/turtle_actionlib/package.xml:devel/ros-turtle_actionlib

RUN_DEPENDS=	${LOCALBASE}/share/actionlib_tutorials/package.xml:devel/ros-actionlib_tutorials \
		${LOCALBASE}/share/nodelet_tutorial_math/package.xml:devel/ros-nodelet_tutorial_math \
		${LOCALBASE}/share/pluginlib_tutorials/package.xml:devel/ros-pluginlib_tutorials

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	common_tutorials

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	common_tutorials

PLIST_FILES=	share/common_tutorials/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
