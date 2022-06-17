PORTNAME=	ros-ros_base
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS ros_base package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/actionlib/package.xml:devel/ros-actionlib \
		${LOCALBASE}/share/bond_core/package.xml:devel/ros-bond_core \
		${LOCALBASE}/share/dynamic_reconfigure/package.xml:devel/ros-dynamic_reconfigure \
		${LOCALBASE}/share/nodelet_core/package.xml:devel/ros-nodelet_core \
		${LOCALBASE}/share/ros_core/package.xml:devel/ros-ros_core \


RUN_DEPENDS=	${LOCALBASE}/share/actionlib/package.xml:devel/ros-actionlib \
		${LOCALBASE}/share/bond_core/package.xml:devel/ros-bond_core \
		${LOCALBASE}/share/dynamic_reconfigure/package.xml:devel/ros-dynamic_reconfigure \
		${LOCALBASE}/share/nodelet_core/package.xml:devel/ros-nodelet_core \
		${LOCALBASE}/share/ros_core/package.xml:devel/ros-ros_core \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	ros_base

PLIST_FILES=	share/ros_base/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
