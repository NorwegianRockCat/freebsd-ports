PORTNAME=	ros-rostest
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rostest package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs \
		${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/roslaunch/package.xml:devel/ros-roslaunch \
		${LOCALBASE}/share/rosmaster/package.xml:devel/ros-rosmaster \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy

RUN_DEPENDS=	${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/roslaunch/package.xml:devel/ros-roslaunch \
		${LOCALBASE}/share/rosmaster/package.xml:devel/ros-rosmaster \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tools/rostest

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
