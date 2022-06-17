PORTNAME=	ros-forward_command_controller
DISTVERSION=	0.18.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS forward_command_controller package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/controller_interface/package.xml:devel/ros-controller_interface \
		${LOCALBASE}/share/hardware_interface/package.xml:devel/ros-hardware_interface \
		${LOCALBASE}/share/realtime_tools/package.xml:devel/ros-realtime_tools \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs

RUN_DEPENDS=	${LOCALBASE}/share/controller_interface/package.xml:devel/ros-controller_interface \
		${LOCALBASE}/share/hardware_interface/package.xml:devel/ros-hardware_interface \
		${LOCALBASE}/share/realtime_tools/package.xml:devel/ros-realtime_tools \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	ros_controllers

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	forward_command_controller

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
