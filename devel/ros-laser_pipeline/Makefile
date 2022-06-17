PORTNAME=	ros-laser_pipeline
DISTVERSION=	1.6.4
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS laser_pipeline package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/laser_assembler/package.xml:devel/ros-laser_assembler \
		${LOCALBASE}/share/laser_filters/package.xml:devel/ros-laser_filters \
		${LOCALBASE}/share/laser_geometry/package.xml:devel/ros-laser_geometry

RUN_DEPENDS=	${LOCALBASE}/share/laser_assembler/package.xml:devel/ros-laser_assembler \
		${LOCALBASE}/share/laser_filters/package.xml:devel/ros-laser_filters \
		${LOCALBASE}/share/laser_geometry/package.xml:devel/ros-laser_geometry

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	laser_pipeline

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	share/laser_pipeline/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
