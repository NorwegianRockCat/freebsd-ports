PORTNAME=		orocos_kdl
DISTVERSIONPREFIX=	v
DISTVERSION=		1.5.0
CATEGORIES=		devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	Orocos Kinematics and Dynamics Library

LICENSE=	LGPL21+

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${LOCALBASE}/include/eigen3/Eigen/Core:math/eigen3

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	orocos
GH_PROJECT=	orocos_kinematics_dynamics

USE_LDCONFIG=	yes

WRKSRC_SUBDIR=	orocos_kdl

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${LN} -fs liborocos-kdl.so.1.5 ${STAGEDIR}${PREFIX}/lib/liborocos-kdl.so.1
	${LN} -fs liborocos-kdl.so.1 ${STAGEDIR}${PREFIX}/lib/liborocos-kdl.so

.include <bsd.port.mk>
