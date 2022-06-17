PORTNAME=	ros-ros_tutorials
DISTVERSION=	0.10.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS ros_tutorials package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/roscpp_tutorials/package.xml:devel/ros-roscpp_tutorials \
		${LOCALBASE}/share/rospy_tutorials/package.xml:devel/ros-rospy_tutorials \
		${LOCALBASE}/share/turtlesim/package.xml:devel/ros-turtlesim

RUN_DEPENDS=	${LOCALBASE}/share/roscpp_tutorials/package.xml:devel/ros-roscpp_tutorials \
		${LOCALBASE}/share/rospy_tutorials/package.xml:devel/ros-rospy_tutorials \
		${LOCALBASE}/share/turtlesim/package.xml:devel/ros-turtlesim

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_tutorials

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	ros_tutorials

PLIST_FILES=	share/ros_tutorials/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
