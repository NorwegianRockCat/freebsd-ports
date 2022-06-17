PORTNAME=	ros-rqt_bag_plugins
DISTVERSION=	0.5.1
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_bag_plugins package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/rosbag/package.xml:devel/ros-rosbag \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rqt_bag/package.xml:devel/ros-rqt_bag \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${LOCALBASE}/share/rqt_plot/package.xml:devel/ros-rqt_plot \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs

RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/rosbag/package.xml:devel/ros-rosbag \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rqt_bag/package.xml:devel/ros-rqt_bag \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${LOCALBASE}/share/rqt_plot/package.xml:devel/ros-rqt_plot \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${PYTHON_PKGNAMEPREFIX}cairo>=0:graphics/py-cairo@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}pillow>=0:graphics/py-pillow@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_bag

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	rqt_bag_plugins

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
