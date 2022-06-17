PORTNAME=	ros-rqt_robot_dashboard
DISTVERSION=	0.5.8
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_robot_dashboard package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/diagnostic_msgs/package.xml:devel/ros-diagnostic_msgs \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/qt_gui/package.xml:devel/ros-qt_gui \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rqt_console/package.xml:devel/ros-rqt_console \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${LOCALBASE}/share/rqt_nav_view/package.xml:devel/ros-rqt_nav_view \
		${LOCALBASE}/share/rqt_robot_monitor/package.xml:devel/ros-rqt_robot_monitor

RUN_DEPENDS=	${LOCALBASE}/share/diagnostic_msgs/package.xml:devel/ros-diagnostic_msgs \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/qt_gui/package.xml:devel/ros-qt_gui \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rqt_console/package.xml:devel/ros-rqt_console \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${LOCALBASE}/share/rqt_nav_view/package.xml:devel/ros-rqt_nav_view \
		${LOCALBASE}/share/rqt_robot_monitor/package.xml:devel/ros-rqt_robot_monitor

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_robot_dashboard

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
