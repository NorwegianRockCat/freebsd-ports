PORTNAME=	ros-rqt_robot_steering
DISTVERSION=	0.5.12
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_robot_steering package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py

RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_robot_steering

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
