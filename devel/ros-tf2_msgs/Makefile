PORTNAME=	ros-tf2_msgs
DISTVERSION=	0.7.5
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf2_msgs package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${LOCALBASE}/share/genmsg/package.xml:devel/ros-genmsg \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR} \
		${LOCALBASE}/share/actionlib_msgs/package.xml:devel/ros-actionlib_msgs \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime

RUN_DEPENDS=	${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${LOCALBASE}/share/actionlib_msgs/package.xml:devel/ros-actionlib_msgs \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry2

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS="gencpp;geneus;genlisp;gennodejs;genpy"\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf2_msgs

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
