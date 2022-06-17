PORTNAME=	ros-bond_core
DISTVERSION=	1.8.6
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS bond_core package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/bond/package.xml:devel/ros-bond \
		${LOCALBASE}/share/bondcpp/package.xml:devel/ros-bondcpp \
		${LOCALBASE}/share/bondpy/package.xml:devel/ros-bondpy \
		${LOCALBASE}/share/smclib/package.xml:devel/ros-smclib

RUN_DEPENDS=	${LOCALBASE}/share/bond/package.xml:devel/ros-bond \
		${LOCALBASE}/share/bondcpp/package.xml:devel/ros-bondcpp \
		${LOCALBASE}/share/bondpy/package.xml:devel/ros-bondpy \
		${LOCALBASE}/share/smclib/package.xml:devel/ros-smclib

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	bond_core

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	bond_core

PLIST_FILES=	share/bond_core/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
