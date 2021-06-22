PORTNAME=	ros-rqt_robot_plugins
DISTVERSION=	0.5.8
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_robot_plugins package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_robot_plugins

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	share/rqt_robot_plugins/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	rqt_moveit rqt_nav_view rqt_pose_view rqt_robot_dashboard\
		rqt_robot_monitor rqt_robot_steering rqt_runtime_monitor\
		rqt_rviz rqt_tf_tree

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
