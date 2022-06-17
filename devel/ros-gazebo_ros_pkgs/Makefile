PORTNAME=	ros-gazebo_ros_pkgs
DISTVERSION=	2.9.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS gazebo_ros_pkgs package

LICENSE=	APACHE20 BSD3CLAUSE LGPL21+
LICENSE_COMB=	multi

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/gazebo_dev/package.xml:devel/ros-gazebo_dev \
		${LOCALBASE}/share/gazebo_msgs/package.xml:devel/ros-gazebo_msgs \
		${LOCALBASE}/share/gazebo_plugins/package.xml:devel/ros-gazebo_plugins \
		${LOCALBASE}/share/gazebo_ros/package.xml:devel/ros-gazebo_ros

RUN_DEPENDS=	${LOCALBASE}/share/gazebo_dev/package.xml:devel/ros-gazebo_dev \
		${LOCALBASE}/share/gazebo_msgs/package.xml:devel/ros-gazebo_msgs \
		${LOCALBASE}/share/gazebo_plugins/package.xml:devel/ros-gazebo_plugins \
		${LOCALBASE}/share/gazebo_ros/package.xml:devel/ros-gazebo_ros

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-simulation
GH_PROJECT=	gazebo_ros_pkgs

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	gazebo_ros_pkgs

PLIST_FILES=	share/gazebo_ros_pkgs/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
