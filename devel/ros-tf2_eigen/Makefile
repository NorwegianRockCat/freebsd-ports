PORTNAME=	ros-tf2_eigen
DISTVERSION=	0.7.5
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf2_eigen package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake eigen:3

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry2

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf2_eigen

PLIST_FILES=	include/tf2_eigen/tf2_eigen.h\
		libdata/pkgconfig/tf2_eigen.pc\
		share/tf2_eigen/cmake/tf2_eigenConfig-version.cmake\
		share/tf2_eigen/cmake/tf2_eigenConfig.cmake\
		share/tf2_eigen/package.xml

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules
_COMMON_RDEPS=	geometry_msgs tf2
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
