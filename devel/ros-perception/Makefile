PORTNAME=	ros-perception
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS perception package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/image_common/package.xml:devel/ros-image_common \
		${LOCALBASE}/share/image_pipeline/package.xml:devel/ros-image_pipeline \
		${LOCALBASE}/share/image_transport_plugins/package.xml:devel/ros-image_transport_plugins \
		${LOCALBASE}/share/laser_pipeline/package.xml:devel/ros-laser_pipeline \
		${LOCALBASE}/share/perception_pcl/package.xml:devel/ros-perception_pcl \
		${LOCALBASE}/share/ros_base/package.xml:devel/ros-ros_base \
		${LOCALBASE}/share/vision_opencv/package.xml:devel/ros-vision_opencv \

RUN_DEPENDS=	${LOCALBASE}/share/image_common/package.xml:devel/ros-image_common \
		${LOCALBASE}/share/image_pipeline/package.xml:devel/ros-image_pipeline \
		${LOCALBASE}/share/image_transport_plugins/package.xml:devel/ros-image_transport_plugins \
		${LOCALBASE}/share/laser_pipeline/package.xml:devel/ros-laser_pipeline \
		${LOCALBASE}/share/perception_pcl/package.xml:devel/ros-perception_pcl \
		${LOCALBASE}/share/ros_base/package.xml:devel/ros-ros_base \
		${LOCALBASE}/share/vision_opencv/package.xml:devel/ros-vision_opencv \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	metapackages

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	perception

PLIST_FILES=	share/perception/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
