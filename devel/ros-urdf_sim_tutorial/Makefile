PORTNAME=	ros-urdf_sim_tutorial
DISTVERSION=	0.5.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS urdf_sim_tutorial package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	urdf_sim_tutorial

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	controller_manager diff_drive_controller gazebo_ros\
		gazebo_ros_control joint_state_controller position_controllers\
		robot_state_publisher rqt_robot_steering rviz urdf_tutorial\
		xacro

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
