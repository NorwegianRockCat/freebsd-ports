PORTNAME=	ros-tf2_kdl
DISTVERSION=	0.7.5
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf2_kdl package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake eigen:3 python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry2

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf2_kdl

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules ros_environment rostest
_COMMON_RDEPS=	tf2 tf2_ros
_COMMON_XDEPS=	${LOCALBASE}/include/kdl/kdl.hpp:devel/orocos_kdl
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
