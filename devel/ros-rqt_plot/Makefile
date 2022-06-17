PORTNAME=	ros-rqt_plot
DISTVERSION=	0.4.13
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_plot package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/qt_gui_py_common/package.xml:devel/ros-qt_gui_py_common \
		${LOCALBASE}/share/qwt_dependency/package.xml:devel/ros-qwt_dependency \
		${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${LOCALBASE}/share/rqt_py_common/package.xml:devel/ros-rqt_py_common \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs 

RUN_DEPENDS=	${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/qt_gui_py_common/package.xml:devel/ros-qt_gui_py_common \
		${LOCALBASE}/share/qwt_dependency/package.xml:devel/ros-qwt_dependency \
		${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic \
		${LOCALBASE}/share/rqt_gui/package.xml:devel/ros-rqt_gui \
		${LOCALBASE}/share/rqt_gui_py/package.xml:devel/ros-rqt_gui_py \
		${LOCALBASE}/share/rqt_py_common/package.xml:devel/ros-rqt_py_common \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=0:math/py-matplotlib@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}numpy>=0:math/py-numpy@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_plot

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
