PORTNAME=	ros-rqt_robot_plugins
DISTVERSION=	0.5.8
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_robot_plugins package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rqt_moveit/package.xml:devel/ros-rqt_moveit \
		${LOCALBASE}/share/rqt_nav_view/package.xml:devel/ros-rqt_nav_view \
		${LOCALBASE}/share/rqt_pose_view/package.xml:devel/ros-rqt_pose_view \
		${LOCALBASE}/share/rqt_robot_dashboard/package.xml:devel/ros-rqt_robot_dashboard \
		${LOCALBASE}/share/rqt_robot_monitor/package.xml:devel/ros-rqt_robot_monitor \
		${LOCALBASE}/share/rqt_robot_steering/package.xml:devel/ros-rqt_robot_steering \
		${LOCALBASE}/share/rqt_runtime_monitor/package.xml:devel/ros-rqt_runtime_monitor \
		${LOCALBASE}/share/rqt_rviz/package.xml:devel/ros-rqt_rviz \
		${LOCALBASE}/share/rqt_tf_tree/package.xml:devel/ros-rqt_tf_tree

RUN_DEPENDS=	${LOCALBASE}/share/rqt_moveit/package.xml:devel/ros-rqt_moveit \
		${LOCALBASE}/share/rqt_nav_view/package.xml:devel/ros-rqt_nav_view \
		${LOCALBASE}/share/rqt_pose_view/package.xml:devel/ros-rqt_pose_view \
		${LOCALBASE}/share/rqt_robot_dashboard/package.xml:devel/ros-rqt_robot_dashboard \
		${LOCALBASE}/share/rqt_robot_monitor/package.xml:devel/ros-rqt_robot_monitor \
		${LOCALBASE}/share/rqt_robot_steering/package.xml:devel/ros-rqt_robot_steering \
		${LOCALBASE}/share/rqt_runtime_monitor/package.xml:devel/ros-rqt_runtime_monitor \
		${LOCALBASE}/share/rqt_rviz/package.xml:devel/ros-rqt_rviz \
		${LOCALBASE}/share/rqt_tf_tree/package.xml:devel/ros-rqt_tf_tree

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_robot_plugins

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	share/rqt_robot_plugins/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
