PORTNAME=	ros-rqt_common_plugins
DISTVERSION=	0.4.9
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rqt_common_plugins package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rqt_common_plugins

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	share/rqt_common_plugins/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	rqt_action rqt_bag rqt_bag_plugins rqt_console rqt_dep rqt_graph\
		rqt_image_view rqt_launch rqt_logger_level rqt_msg rqt_plot\
		rqt_publisher rqt_py_common rqt_py_console rqt_reconfigure\
		rqt_service_caller rqt_shell rqt_srv rqt_top rqt_topic rqt_web

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
