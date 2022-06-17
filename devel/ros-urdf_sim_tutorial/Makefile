PORTNAME=	ros-urdf_sim_tutorial
DISTVERSION=	0.5.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS urdf_sim_tutorial package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/controller_manager/package.xml:devel/ros-controller_manager \
		${LOCALBASE}/share/diff_drive_controller/package.xml:devel/ros-diff_drive_controller \
		${LOCALBASE}/share/gazebo_ros/package.xml:devel/ros-gazebo_ros \
		${LOCALBASE}/share/gazebo_ros_control/package.xml:devel/ros-gazebo_ros_control \
		${LOCALBASE}/share/joint_state_controller/package.xml:devel/ros-joint_state_controller \
		${LOCALBASE}/share/position_controllers/package.xml:devel/ros-position_controllers \
		${LOCALBASE}/share/robot_state_publisher/package.xml:devel/ros-robot_state_publisher \
		${LOCALBASE}/share/rqt_robot_steering/package.xml:devel/ros-rqt_robot_steering \
		${LOCALBASE}/share/rviz/package.xml:devel/ros-rviz \
		${LOCALBASE}/share/urdf_tutorial/package.xml:devel/ros-urdf_tutorial \
		${LOCALBASE}/share/xacro/package.xml:devel/ros-xacro

RUN_DEPENDS=	${LOCALBASE}/share/controller_manager/package.xml:devel/ros-controller_manager \
		${LOCALBASE}/share/diff_drive_controller/package.xml:devel/ros-diff_drive_controller \
		${LOCALBASE}/share/gazebo_ros/package.xml:devel/ros-gazebo_ros \
		${LOCALBASE}/share/gazebo_ros_control/package.xml:devel/ros-gazebo_ros_control \
		${LOCALBASE}/share/joint_state_controller/package.xml:devel/ros-joint_state_controller \
		${LOCALBASE}/share/position_controllers/package.xml:devel/ros-position_controllers \
		${LOCALBASE}/share/robot_state_publisher/package.xml:devel/ros-robot_state_publisher \
		${LOCALBASE}/share/rqt_robot_steering/package.xml:devel/ros-rqt_robot_steering \
		${LOCALBASE}/share/rviz/package.xml:devel/ros-rviz \
		${LOCALBASE}/share/urdf_tutorial/package.xml:devel/ros-urdf_tutorial \
		${LOCALBASE}/share/xacro/package.xml:devel/ros-xacro

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	urdf_sim_tutorial

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
