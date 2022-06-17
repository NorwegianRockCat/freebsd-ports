PORTNAME=	ros-ros_core
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS ros_core package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/class_loader/package.xml:devel/ros-class_loader \
		${LOCALBASE}/share/cmake_modules/package.xml:devel/ros-cmake_modules \
		${LOCALBASE}/share/common_msgs/package.xml:devel/ros-common_msgs \
		${LOCALBASE}/share/gencpp/package.xml:devel/ros-gencpp \
		${LOCALBASE}/share/geneus/package.xml:devel/ros-geneus \
		${LOCALBASE}/share/genlisp/package.xml:devel/ros-genlisp \
		${LOCALBASE}/share/genmsg/package.xml:devel/ros-genmsg \
		${LOCALBASE}/share/gennodejs/package.xml:devel/ros-gennodejs \
		${LOCALBASE}/share/genpy/package.xml:devel/ros-genpy \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/ros/package.xml:devel/ros-ros \
		${LOCALBASE}/share/ros_comm/package.xml:devel/ros-ros_comm \
		${LOCALBASE}/share/rosbag_migration_rule/package.xml:devel/ros-rosbag_migration_rule \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/rosconsole_bridge/package.xml:devel/ros-rosconsole_bridge \
		${LOCALBASE}/share/roscpp_core/package.xml:devel/ros-roscpp_core \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslisp/package.xml:devel/ros-roslisp \
		${LOCALBASE}/share/rospack/package.xml:devel/ros-rospack \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs

RUN_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/class_loader/package.xml:devel/ros-class_loader \
		${LOCALBASE}/share/cmake_modules/package.xml:devel/ros-cmake_modules \
		${LOCALBASE}/share/common_msgs/package.xml:devel/ros-common_msgs \
		${LOCALBASE}/share/gencpp/package.xml:devel/ros-gencpp \
		${LOCALBASE}/share/geneus/package.xml:devel/ros-geneus \
		${LOCALBASE}/share/genlisp/package.xml:devel/ros-genlisp \
		${LOCALBASE}/share/genmsg/package.xml:devel/ros-genmsg \
		${LOCALBASE}/share/gennodejs/package.xml:devel/ros-gennodejs \
		${LOCALBASE}/share/genpy/package.xml:devel/ros-genpy \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/ros/package.xml:devel/ros-ros \
		${LOCALBASE}/share/ros_comm/package.xml:devel/ros-ros_comm \
		${LOCALBASE}/share/rosbag_migration_rule/package.xml:devel/ros-rosbag_migration_rule \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/rosconsole_bridge/package.xml:devel/ros-rosconsole_bridge \
		${LOCALBASE}/share/roscpp_core/package.xml:devel/ros-roscpp_core \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslisp/package.xml:devel/ros-roslisp \
		${LOCALBASE}/share/rospack/package.xml:devel/ros-rospack \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	ros_core

PLIST_FILES=	share/ros_core/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
