PORTNAME=	ros-mk
DISTVERSION=	1.15.7
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS mk package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rosbuild/package.xml:devel/ros-rosbuild \
		${LOCALBASE}/share/rospack/package.xml:devel/ros-rospack


RUN_DEPENDS=	${LOCALBASE}/share/rosbuild/package.xml:devel/ros-rosbuild \
		${LOCALBASE}/share/rospack/package.xml:devel/ros-rospack

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	core/mk

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
