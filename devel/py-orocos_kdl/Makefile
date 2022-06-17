PORTNAME=		orocos_kdl
DISTVERSIONPREFIX=	v
DISTVERSION=		1.5.0
CATEGORIES=		devel
PKGNAMEPREFIX=		${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	Orocos Kinematics and Dynamics Library

LICENSE=	LGPL21+

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${LOCALBASE}/include/kdl/kdl.hpp:devel/orocos_kdl

USES=		cmake python eigen:3

USE_GITHUB=	yes
GH_ACCOUNT=	orocos
GH_PROJECT=	orocos_kinematics_dynamics
GH_TUPLE=	pybind:pybind11:v2.6.2:A/pybind11
USE_PYTHON=	flavors

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}\
		-DPYTHON_VERSION=${PYTHON_VER}

WRKSRC_SUBDIR=	python_orocos_kdl

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
