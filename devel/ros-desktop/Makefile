PORTNAME=	ros-desktop
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS desktop package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/common_tutorials/package.xml:devel/ros-common_tutorials \
		${LOCALBASE}/share/geometry_tutorials/package.xml:devel/ros-geometry_tutorials \
		${LOCALBASE}/share/joint_state_publisher_gui/package.xml:devel/ros-joint_state_publisher_gui \
		${LOCALBASE}/share/robot/package.xml:devel/ros-robot \
		${LOCALBASE}/share/ros_tutorials/package.xml:devel/ros-ros_tutorials \
		${LOCALBASE}/share/roslint/package.xml:devel/ros-roslint \
		${LOCALBASE}/share/urdf_tutorial/package.xml:devel/ros-urdf_tutorial \
		${LOCALBASE}/share/visualization_tutorials/package.xml:devel/ros-visualization_tutorials \
		${LOCALBASE}/share/viz/package.xml:devel/ros-viz

RUN_DEPENDS=	${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/common_tutorials/package.xml:devel/ros-common_tutorials \
		${LOCALBASE}/share/geometry_tutorials/package.xml:devel/ros-geometry_tutorials \
		${LOCALBASE}/share/joint_state_publisher_gui/package.xml:devel/ros-joint_state_publisher_gui \
		${LOCALBASE}/share/robot/package.xml:devel/ros-robot \
		${LOCALBASE}/share/ros_tutorials/package.xml:devel/ros-ros_tutorials \
		${LOCALBASE}/share/roslint/package.xml:devel/ros-roslint \
		${LOCALBASE}/share/urdf_tutorial/package.xml:devel/ros-urdf_tutorial \
		${LOCALBASE}/share/visualization_tutorials/package.xml:devel/ros-visualization_tutorials \
		${LOCALBASE}/share/viz/package.xml:devel/ros-viz

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	desktop

PLIST_FILES=	share/desktop/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
