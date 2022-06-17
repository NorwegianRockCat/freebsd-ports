PORTNAME=	ros-simulators
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS simulators package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/gazebo_ros_pkgs/package.xml:devel/ros-gazebo_ros_pkgs \
		${LOCALBASE}/share/robot/package.xml:devel/ros-robot \
		${LOCALBASE}/share/rqt_common_plugins/package.xml:devel/ros-rqt_common_plugins \
		${LOCALBASE}/share/rqt_robot_plugins/package.xml:devel/ros-rqt_robot_plugins \
		${LOCALBASE}/share/stage_ros/package.xml:devel/ros-stage_ros

RUN_DEPENDS=	${LOCALBASE}/share/gazebo_ros_pkgs/package.xml:devel/ros-gazebo_ros_pkgs \
		${LOCALBASE}/share/robot/package.xml:devel/ros-robot \
		${LOCALBASE}/share/rqt_common_plugins/package.xml:devel/ros-rqt_common_plugins \
		${LOCALBASE}/share/rqt_robot_plugins/package.xml:devel/ros-rqt_robot_plugins \
		${LOCALBASE}/share/stage_ros/package.xml:devel/ros-stage_ros

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	simulators

PLIST_FILES=	share/simulators/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
