PORTNAME=	ros-executive_smach
DISTVERSION=	2.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS executive_smach package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/smach/package.xml:devel/ros-smach \
		${LOCALBASE}/share/smach_msgs/package.xml:devel/ros-smach_msgs \
		${LOCALBASE}/share/smach_ros/package.xml:devel/ros-smach_ros

RUN_DEPENDS=	${LOCALBASE}/share/smach/package.xml:devel/ros-smach \
		${LOCALBASE}/share/smach_msgs/package.xml:devel/ros-smach_msgs \
		${LOCALBASE}/share/smach_ros/package.xml:devel/ros-smach_ros

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	executive_smach

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	executive_smach

PLIST_FILES=	share/executive_smach/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
