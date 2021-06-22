PORTNAME=	ros-simulators
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS simulators package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	simulators

PLIST_FILES=	share/simulators/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	gazebo_ros_pkgs robot rqt_common_plugins rqt_robot_plugins\
		stage_ros

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
