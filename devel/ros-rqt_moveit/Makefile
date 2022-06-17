PORTNAME=	ros-rqt_moveit
DISTVERSION=	0.5.10
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_moveit package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/rosnode/package.xml:devel/ros-rosnode \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${LOCALBASE}/share/rqt_py_common/package.xml:devel/ros-rqt_py_common \
		${LOCALBASE}/share/rqt_topic/package.xml:devel/ros-rqt_topic \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs


RUN_DEPENDS=	${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/rosnode/package.xml:devel/ros-rosnode \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${LOCALBASE}/share/rqt_py_common/package.xml:devel/ros-rqt_py_common \
		${LOCALBASE}/share/rqt_topic/package.xml:devel/ros-rqt_topic \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_moveit

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
