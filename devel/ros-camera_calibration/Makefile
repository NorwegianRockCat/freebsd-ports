PORTNAME=	ros-camera_calibration
DISTVERSION=	1.15.3
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS camera_calibration package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/cv_bridge/package.xml:devel/ros-cv_bridge \
		${LOCALBASE}/share/image_geometry/package.xml:devel/ros-image_geometry \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \


RUN_DEPENDS=	${LOCALBASE}/share/cv_bridge/package.xml:devel/ros-cv_bridge \
		${LOCALBASE}/share/image_geometry/package.xml:devel/ros-image_geometry \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_pipeline

SHEBANG_FILES=	nodes/cameracalibrator.py\
		nodes/cameracheck.py

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	camera_calibration

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
