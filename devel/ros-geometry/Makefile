PORTNAME=	ros-geometry
DISTVERSION=	1.13.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS geometry package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/eigen_conversions/package.xml:devel/ros-eigen_conversions \
		${LOCALBASE}/share/kdl_conversions/package.xml:devel/ros-kdl_conversions \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf \
		${LOCALBASE}/share/tf_conversions/package.xml:devel/ros-tf_conversions

RUN_DEPENDS=			${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/eigen_conversions/package.xml:devel/ros-eigen_conversions \
		${LOCALBASE}/share/kdl_conversions/package.xml:devel/ros-kdl_conversions \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf \
		${LOCALBASE}/share/tf_conversions/package.xml:devel/ros-tf_conversions

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	geometry

PLIST_FILES=	share/geometry/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
