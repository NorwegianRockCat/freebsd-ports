PORTNAME=	ros-forward_command_controller
DISTVERSION=	0.18.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS forward_command_controller package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	ros_controllers

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	forward_command_controller

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin

_COMMON_RDEPS=	controller_interface hardware_interface realtime_tools roscpp\
		std_msgs

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
