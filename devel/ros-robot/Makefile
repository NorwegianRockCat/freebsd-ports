PORTNAME=	ros-robot
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS robot package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/control_msgs/package.xml:devel/ros-control_msgs \
		${LOCALBASE}/share/diagnostics/package.xml:devel/ros-diagnostics \
		${LOCALBASE}/share/executive_smach/package.xml:devel/ros-executive_smach \
		${LOCALBASE}/share/filters/package.xml:devel/ros-filters \
		${LOCALBASE}/share/geometry/package.xml:devel/ros-geometry \
		${LOCALBASE}/share/joint_state_publisher/package.xml:devel/ros-joint_state_publisher \
		${LOCALBASE}/share/kdl_parser/package.xml:devel/ros-kdl_parser \
		${LOCALBASE}/share/robot_state_publisher/package.xml:devel/ros-robot_state_publisher \
		${LOCALBASE}/share/ros_base/package.xml:devel/ros-ros_base \
		${LOCALBASE}/share/urdf/package.xml:devel/ros-urdf \
		${LOCALBASE}/share/urdf_parser_plugin/package.xml:devel/ros-urdf_parser_plugin \
		${LOCALBASE}/share/xacro/package.xml:devel/ros-xacro

RUN_DEPENDS=	${LOCALBASE}/share/control_msgs/package.xml:devel/ros-control_msgs \
		${LOCALBASE}/share/diagnostics/package.xml:devel/ros-diagnostics \
		${LOCALBASE}/share/executive_smach/package.xml:devel/ros-executive_smach \
		${LOCALBASE}/share/filters/package.xml:devel/ros-filters \
		${LOCALBASE}/share/geometry/package.xml:devel/ros-geometry \
		${LOCALBASE}/share/joint_state_publisher/package.xml:devel/ros-joint_state_publisher \
		${LOCALBASE}/share/kdl_parser/package.xml:devel/ros-kdl_parser \
		${LOCALBASE}/share/robot_state_publisher/package.xml:devel/ros-robot_state_publisher \
		${LOCALBASE}/share/ros_base/package.xml:devel/ros-ros_base \
		${LOCALBASE}/share/urdf/package.xml:devel/ros-urdf \
		${LOCALBASE}/share/urdf_parser_plugin/package.xml:devel/ros-urdf_parser_plugin \
		${LOCALBASE}/share/xacro/package.xml:devel/ros-xacro

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	robot

PLIST_FILES=	share/robot/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
