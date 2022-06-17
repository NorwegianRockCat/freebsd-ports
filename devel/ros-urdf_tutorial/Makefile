PORTNAME=	ros-urdf_tutorial
DISTVERSION=	0.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS urdf_tutorial package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/roslaunch/package.xml:devel/ros-roslaunch \
		${LOCALBASE}/share/joint_state_publisher/package.xml:devel/ros-joint_state_publisher \
		${LOCALBASE}/share/joint_state_publisher_gui/package.xml:devel/ros-joint_state_publisher_gui \
		${LOCALBASE}/share/robot_state_publisher/package.xml:devel/ros-robot_state_publisher \
		${LOCALBASE}/share/rviz/package.xml:devel/ros-rviz \
		${LOCALBASE}/share/xacro/package.xml:devel/ros-xacro \

RUN_DEPENDS=	${LOCALBASE}/share/joint_state_publisher/package.xml:devel/ros-joint_state_publisher \
		${LOCALBASE}/share/joint_state_publisher_gui/package.xml:devel/ros-joint_state_publisher_gui \
		${LOCALBASE}/share/robot_state_publisher/package.xml:devel/ros-robot_state_publisher \
		${LOCALBASE}/share/rviz/package.xml:devel/ros-rviz \
		${LOCALBASE}/share/xacro/package.xml:devel/ros-xacro \
		${LOCALBASE}/share/roslaunch/package.xml:devel/ros-roslaunch

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	urdf_tutorial

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
