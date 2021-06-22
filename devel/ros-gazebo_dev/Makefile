PORTNAME=	ros-gazebo_dev
DISTVERSION=	2.9.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS gazebo_dev package

LICENSE=	APACHE20

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	gazebo:cad/gazebo

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-simulation
GH_PROJECT=	gazebo_ros_pkgs

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	gazebo_dev

PLIST_FILES=	libdata/pkgconfig/gazebo_dev.pc\
		share/gazebo_dev/cmake/gazebo_dev-extras.cmake\
		share/gazebo_dev/cmake/gazebo_devConfig-version.cmake\
		share/gazebo_dev/cmake/gazebo_devConfig.cmake\
		share/gazebo_dev/package.xml

_BUILD_RDEPS=	catkin
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
