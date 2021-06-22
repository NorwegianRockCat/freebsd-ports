PORTNAME=	ros-tf2_geometry_msgs
DISTVERSION=	0.7.5
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf2_geometry_msgs package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry2

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf2_geometry_msgs

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin ros_environment rostest
_COMMON_RDEPS=	geometry_msgs tf2 tf2_ros

_COMMON_XDEPS=	${_PYLIBDIR}/PyKDL.so:devel/py-orocos_kdl@${PY_FLAVOR}\
		${LOCALBASE}/include/kdl/kdl.hpp:devel/orocos_kdl

_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
