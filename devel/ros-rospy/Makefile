PORTNAME=	ros-rospy
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rospy package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${LOCALBASE}/share/genmsg/package.xml:devel/ros-genmsg \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/genpy/package.xml:devel/ros-genpy \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \

RUN_DEPENDS=	${LOCALBASE}/share/genpy/package.xml:devel/ros-genpy \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${PYTHON_PKGNAMEPREFIX}numpy>=0:math/py-numpy@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	clients/rospy

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
