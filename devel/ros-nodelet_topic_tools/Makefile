PORTNAME=	ros-nodelet_topic_tools
DISTVERSION=	1.10.1
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS nodelet_topic_tools package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/dynamic_reconfigure/package.xml:devel/ros-dynamic_reconfigure \
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/nodelet/package.xml:devel/ros-nodelet \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg

RUN_DEPENDS=	${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/nodelet/package.xml:devel/ros-nodelet \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	nodelet_core

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	nodelet_topic_tools

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
