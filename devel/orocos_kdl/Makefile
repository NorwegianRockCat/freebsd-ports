PORTNAME=		orocos_kdl
DISTVERSIONPREFIX=	v
DISTVERSION=		1.5.0
CATEGORIES=		devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	Orocos Kinematics and Dynamics Library

LICENSE=	LGPL21+

BUILD_DEPENDS=	catkin_make:devel/ros-catkin\
		${_COMMON_DEPS}
RUN_DEPENDS=	${_COMMON_DEPS}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	orocos
GH_PROJECT=	orocos_kinematics_dynamics

USE_LDCONFIG=	yes

WRKSRC_SUBDIR=	orocos_kdl

_COMMON_DEPS=	${LOCALBASE}/include/eigen3/Eigen/Core:math/eigen3

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${LN} -fs liborocos-kdl.so.1.5 ${STAGEDIR}${PREFIX}/lib/liborocos-kdl.so.1
	${LN} -fs liborocos-kdl.so.1 ${STAGEDIR}${PREFIX}/lib/liborocos-kdl.so

.include <bsd.port.mk>
