PORTNAME=	ros-geometry_tutorials
DISTVERSION=	0.2.3
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS geometry_tutorials package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/turtle_tf/package.xml:devel/ros-turtle_tf \
		${LOCALBASE}/share/turtle_tf2/package.xml:devel/ros-turtle_tf2

RUN_DEPENDS=	${LOCALBASE}/share/turtle_tf/package.xml:devel/ros-turtle_tf \
		${LOCALBASE}/share/turtle_tf2/package.xml:devel/ros-turtle_tf2

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry_tutorials

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	geometry_tutorials

PLIST_FILES=	share/geometry_tutorials/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
