PORTNAME=	ros-robot
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS robot package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	robot

PLIST_FILES=	share/robot/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	control_msgs diagnostics executive_smach filters geometry\
		joint_state_publisher kdl_parser robot_state_publisher ros_base\
		urdf urdf_parser_plugin xacro

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
