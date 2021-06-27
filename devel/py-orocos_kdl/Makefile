PORTNAME=		orocos_kdl
DISTVERSIONPREFIX=	v
DISTVERSION=		1.5.0
CATEGORIES=		devel
PKGNAMEPREFIX=		${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	Orocos Kinematics and Dynamics Library

LICENSE=	LGPL21+

BUILD_DEPENDS=	catkin_make:devel/ros-catkin\
		${_COMMON_DEPS}
RUN_DEPENDS=	${_COMMON_DEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	orocos
GH_PROJECT=	orocos_kinematics_dynamics
GH_TUPLE=	pybind:pybind11:v2.6.2:A/pybind11
USE_PYTHON=	flavors

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}\
		-DPYTHON_VERSION=${PYTHON_VER}

WRKSRC_SUBDIR=	python_orocos_kdl

_COMMON_DEPS=	${LOCALBASE}/include/eigen3/Eigen/Core:math/eigen3\
		${LOCALBASE}/include/kdl/kdl.hpp:devel/orocos_kdl

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
