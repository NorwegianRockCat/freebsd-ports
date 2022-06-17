PORTNAME=	ros-controller_interface
DISTVERSION=	0.19.4
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS controller_interface package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/hardware_interface/package.xml:devel/ros-hardware_interface \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp
RUN_DEPENDS=	${LOCALBASE}/share/hardware_interface/package.xml:devel/ros-hardware_interface \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	ros_control

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	controller_interface

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
