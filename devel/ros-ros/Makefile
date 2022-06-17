PORTNAME=	ros-ros
DISTVERSION=	1.15.7
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS ros package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rosbash/package.xml:devel/ros-rosbash \
		${LOCALBASE}/share/rosboost_cfg/package.xml:devel/ros-rosboost_cfg \
		${LOCALBASE}/share/rosbuild/package.xml:devel/ros-rosbuild \
		${LOCALBASE}/share/rosclean/package.xml:devel/ros-rosclean \
		${LOCALBASE}/share/roscreate/package.xml:devel/ros-roscreate \
		${LOCALBASE}/share/roslang/package.xml:devel/ros-roslang \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rosmake/package.xml:devel/ros-rosmake \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit

RUN_DEPENDS=	${LOCALBASE}/share/rosbash/package.xml:devel/ros-rosbash \
		${LOCALBASE}/share/rosboost_cfg/package.xml:devel/ros-rosboost_cfg \
		${LOCALBASE}/share/rosbuild/package.xml:devel/ros-rosbuild \
		${LOCALBASE}/share/rosclean/package.xml:devel/ros-rosclean \
		${LOCALBASE}/share/roscreate/package.xml:devel/ros-roscreate \
		${LOCALBASE}/share/roslang/package.xml:devel/ros-roslang \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rosmake/package.xml:devel/ros-rosmake \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	ros

PLIST_FILES=	share/ros/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
