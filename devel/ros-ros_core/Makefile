PORTNAME=	ros-ros_core
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS ros_core package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	ros_core

PLIST_FILES=	share/ros_core/package.xml

_COMMON_RDEPS=	catkin

_RUN_RDEPS=	${_COMMON_RDEPS} class_loader cmake_modules common_msgs gencpp\
		geneus genlisp genmsg gennodejs genpy message_generation\
		message_runtime pluginlib ros ros_comm rosbag_migration_rule\
		rosconsole rosconsole_bridge roscpp_core rosgraph_msgs roslisp\
		rospack std_msgs std_srvs

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
