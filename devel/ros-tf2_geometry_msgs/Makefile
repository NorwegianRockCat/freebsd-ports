PORTNAME=	ros-tf2_geometry_msgs
DISTVERSION=	0.7.5
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf2_geometry_msgs package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/ros_environment/package.xml:devel/ros-ros_environment \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/tf2/package.xml:devel/ros-tf2 \
		${LOCALBASE}/share/tf2_py/package.xml:devel/ros-tf2_py \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/include/kdl/kdl.hpp:devel/orocos_kdl \
		${PYTHON_PKGNAMEPREFIX}orocos_kdl>=0:devel/py-orocos_kdl@${PY_FLAVOR}

RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/tf2/package.xml:devel/ros-tf2 \
		${LOCALBASE}/share/tf2_py/package.xml:devel/ros-tf2_py \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${PYTHON_PKGNAMEPREFIX}orocos_kdl>=0:devel/py-orocos_kdl@${PY_FLAVOR} \
		eigen>0:math/eigen3

USES=		cmake python eigen:3

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry2

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf2_geometry_msgs

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
