PORTNAME=	ros-rqt_common_plugins
DISTVERSION=	0.4.9
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_common_plugins package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rqt_action/package.xml:devel/ros-rqt_action \
		${LOCALBASE}/share/rqt_bag/package.xml:devel/ros-rqt_bag \
		${LOCALBASE}/share/rqt_bag_plugins/package.xml:devel/ros-rqt_bag_plugins \
		${LOCALBASE}/share/rqt_console/package.xml:devel/ros-rqt_console \
		${LOCALBASE}/share/rqt_dep/package.xml:devel/ros-rqt_dep \
		${LOCALBASE}/share/rqt_graph/package.xml:devel/ros-rqt_graph \
		${LOCALBASE}/share/rqt_image_view/package.xml:devel/ros-rqt_image_view \
		${LOCALBASE}/share/rqt_launch/package.xml:devel/ros-rqt_launch \
		${LOCALBASE}/share/rqt_logger_level/package.xml:devel/ros-rqt_logger_level \
		${LOCALBASE}/share/rqt_msg/package.xml:devel/ros-rqt_msg \
		${LOCALBASE}/share/rqt_plot/package.xml:devel/ros-rqt_plot \
		${LOCALBASE}/share/rqt_publisher/package.xml:devel/ros-rqt_publisher \
		${LOCALBASE}/share/rqt_py_common/package.xml:devel/ros-rqt_py_common \
		${LOCALBASE}/share/rqt_py_console/package.xml:devel/ros-rqt_py_console \
		${LOCALBASE}/share/rqt_reconfigure/package.xml:devel/ros-rqt_reconfigure \
		${LOCALBASE}/share/rqt_service_caller/package.xml:devel/ros-rqt_service_caller \
		${LOCALBASE}/share/rqt_shell/package.xml:devel/ros-rqt_shell \
		${LOCALBASE}/share/rqt_srv/package.xml:devel/ros-rqt_srv \
		${LOCALBASE}/share/rqt_top/package.xml:devel/ros-rqt_top \
		${LOCALBASE}/share/rqt_topic/package.xml:devel/ros-rqt_topic \
		${LOCALBASE}/share/rqt_web/package.xml:devel/ros-rqt_web \


RUN_DEPENDS=	${LOCALBASE}/share/rqt_action/package.xml:devel/ros-rqt_action \
		${LOCALBASE}/share/rqt_bag/package.xml:devel/ros-rqt_bag \
		${LOCALBASE}/share/rqt_bag_plugins/package.xml:devel/ros-rqt_bag_plugins \
		${LOCALBASE}/share/rqt_console/package.xml:devel/ros-rqt_console \
		${LOCALBASE}/share/rqt_dep/package.xml:devel/ros-rqt_dep \
		${LOCALBASE}/share/rqt_graph/package.xml:devel/ros-rqt_graph \
		${LOCALBASE}/share/rqt_image_view/package.xml:devel/ros-rqt_image_view \
		${LOCALBASE}/share/rqt_launch/package.xml:devel/ros-rqt_launch \
		${LOCALBASE}/share/rqt_logger_level/package.xml:devel/ros-rqt_logger_level \
		${LOCALBASE}/share/rqt_msg/package.xml:devel/ros-rqt_msg \
		${LOCALBASE}/share/rqt_plot/package.xml:devel/ros-rqt_plot \
		${LOCALBASE}/share/rqt_publisher/package.xml:devel/ros-rqt_publisher \
		${LOCALBASE}/share/rqt_py_common/package.xml:devel/ros-rqt_py_common \
		${LOCALBASE}/share/rqt_py_console/package.xml:devel/ros-rqt_py_console \
		${LOCALBASE}/share/rqt_reconfigure/package.xml:devel/ros-rqt_reconfigure \
		${LOCALBASE}/share/rqt_service_caller/package.xml:devel/ros-rqt_service_caller \
		${LOCALBASE}/share/rqt_shell/package.xml:devel/ros-rqt_shell \
		${LOCALBASE}/share/rqt_srv/package.xml:devel/ros-rqt_srv \
		${LOCALBASE}/share/rqt_top/package.xml:devel/ros-rqt_top \
		${LOCALBASE}/share/rqt_topic/package.xml:devel/ros-rqt_topic \
		${LOCALBASE}/share/rqt_web/package.xml:devel/ros-rqt_web \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_common_plugins

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	share/rqt_common_plugins/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
