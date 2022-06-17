PORTNAME=	ros-roslaunch
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roslaunch package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rosclean/package.xml:devel/ros-rosclean \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rosmaster/package.xml:devel/ros-rosmaster \
		${LOCALBASE}/share/rosout/package.xml:devel/ros-rosout \
		${LOCALBASE}/share/rosparam/package.xml:devel/ros-rosparam \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/rosbuild/package.xml:devel/ros-rosbuild

RUN_DEPENDS=	${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${PYTHON_PKGNAMEPREFIX}paramiko>0:security/py-paramiko@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	tools/roslaunch

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
