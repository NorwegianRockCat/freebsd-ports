PORTNAME=	ros-rosnode
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosnode package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic

RUN_DEPENDS=	${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	tools/rosnode

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
