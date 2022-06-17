PORTNAME=	ros-visualization_tutorials
DISTVERSION=	0.11.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS visualization_tutorials package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/interactive_marker_tutorials/package.xml:devel/ros-interactive_marker_tutorials \
		${LOCALBASE}/share/librviz_tutorial/package.xml:devel/ros-librviz_tutorial \
		${LOCALBASE}/share/rviz_plugin_tutorials/package.xml:devel/ros-rviz_plugin_tutorials \
		${LOCALBASE}/share/rviz_python_tutorial/package.xml:devel/ros-rviz_python_tutorial \
		${LOCALBASE}/share/visualization_marker_tutorials/package.xml:devel/ros-visualization_marker_tutorials


RUN_DEPENDS=	${LOCALBASE}/share/interactive_marker_tutorials/package.xml:devel/ros-interactive_marker_tutorials \
		${LOCALBASE}/share/librviz_tutorial/package.xml:devel/ros-librviz_tutorial \
		${LOCALBASE}/share/rviz_plugin_tutorials/package.xml:devel/ros-rviz_plugin_tutorials \
		${LOCALBASE}/share/rviz_python_tutorial/package.xml:devel/ros-rviz_python_tutorial \
		${LOCALBASE}/share/visualization_marker_tutorials/package.xml:devel/ros-visualization_marker_tutorials \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	visualization_tutorials

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	visualization_tutorials

PLIST_FILES=	share/visualization_tutorials/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
