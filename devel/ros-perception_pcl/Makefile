PORTNAME=	ros-perception_pcl
DISTVERSION=	1.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS perception_pcl package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/pcl_conversions/package.xml:devel/ros-pcl_conversions \
		${LOCALBASE}/share/pcl_msgs/package.xml:devel/ros-pcl_msgs \
		${LOCALBASE}/share/pcl_ros/package.xml:devel/ros-pcl_ros \

RUN_DEPENDS=	${LOCALBASE}/share/pcl_conversions/package.xml:devel/ros-pcl_conversions \
		${LOCALBASE}/share/pcl_msgs/package.xml:devel/ros-pcl_msgs \
		${LOCALBASE}/share/pcl_ros/package.xml:devel/ros-pcl_ros \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	perception_pcl

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	perception_pcl

PLIST_FILES=	share/perception_pcl/package.xml



post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
