PORTNAME=	ros-rosbash
DISTVERSION=	1.15.7
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosbash package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} 


RUN_DEPENDS=	${LOCALBASE}/share/rospack/package.xml:devel/ros-rospack

USES=		cmake shebangfix python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros

SHEBANG_FILES=	scripts/rosrun

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	tools/rosbash

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
