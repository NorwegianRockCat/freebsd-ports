PORTNAME=	ros-gazebo_ros_pkgs
DISTVERSION=	2.9.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS gazebo_ros_pkgs package

LICENSE=	APACHE20 BSD3CLAUSE LGPL21+
LICENSE_COMB=	multi

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-simulation
GH_PROJECT=	gazebo_ros_pkgs

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	gazebo_ros_pkgs

PLIST_FILES=	share/gazebo_ros_pkgs/package.xml

_BUILD_RDEPS=	catkin
_RUN_RDEPS=	gazebo_dev gazebo_msgs gazebo_plugins gazebo_ros
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
