PORTNAME=	ros-common_msgs
DISTVERSION=	1.13.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS common_msgs package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/actionlib_msgs/package.xml:devel/ros-actionlib_msgs \
		${LOCALBASE}/share/diagnostic_msgs/package.xml:devel/ros-diagnostic_msgs \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/nav_msgs/package.xml:devel/ros-nav_msgs \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/shape_msgs/package.xml:devel/ros-shape_msgs \
		${LOCALBASE}/share/stereo_msgs/package.xml:devel/ros-stereo_msgs \
		${LOCALBASE}/share/trajectory_msgs/package.xml:devel/ros-trajectory_msgs \
		${LOCALBASE}/share/visualization_msgs/package.xml:devel/ros-visualization_msgs
RUN_DEPENDS=	${LOCALBASE}/share/actionlib_msgs/package.xml:devel/ros-actionlib_msgs \
		${LOCALBASE}/share/diagnostic_msgs/package.xml:devel/ros-diagnostic_msgs \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/nav_msgs/package.xml:devel/ros-nav_msgs \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/shape_msgs/package.xml:devel/ros-shape_msgs \
		${LOCALBASE}/share/stereo_msgs/package.xml:devel/ros-stereo_msgs \
		${LOCALBASE}/share/trajectory_msgs/package.xml:devel/ros-trajectory_msgs \
		${LOCALBASE}/share/visualization_msgs/package.xml:devel/ros-visualization_msgs

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	common_msgs

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	common_msgs

PLIST_FILES=	share/common_msgs/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
