PORTNAME=	ros-pcl_conversions
DISTVERSION=	1.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS pcl_conversions package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake eigen:3

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	perception_pcl

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	pcl_conversions

PLIST_FILES=	include/pcl_conversions/pcl_conversions.h\
		libdata/pkgconfig/pcl_conversions.pc\
		share/pcl_conversions/cmake/pcl_conversionsConfig-version.cmake\
		share/pcl_conversions/cmake/pcl_conversionsConfig.cmake\
		share/pcl_conversions/package.xml

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	pcl_msgs roscpp sensor_msgs std_msgs
_COMMON_XDEPS=	pcl_icp:graphics/pcl-pointclouds
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
