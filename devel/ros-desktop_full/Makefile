PORTNAME=	ros-desktop_full
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS desktop_full package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/desktop/package.xml:devel/ros-desktop \
		${LOCALBASE}/share/perception/package.xml:devel/ros-perception \
		${LOCALBASE}/share/simulators/package.xml:devel/ros-simulators \
		${LOCALBASE}/share/urdf_sim_tutorial/package.xml:devel/ros-urdf_sim_tutorial \

RUN_DEPENDS=	${LOCALBASE}/share/desktop/package.xml:devel/ros-desktop \
		${LOCALBASE}/share/perception/package.xml:devel/ros-perception \
		${LOCALBASE}/share/simulators/package.xml:devel/ros-simulators \
		${LOCALBASE}/share/urdf_sim_tutorial/package.xml:devel/ros-urdf_sim_tutorial \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	desktop_full

PLIST_FILES=	share/desktop_full/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
