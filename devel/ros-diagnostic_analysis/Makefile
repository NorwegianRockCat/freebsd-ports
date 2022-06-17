PORTNAME=	ros-diagnostic_analysis
DISTVERSION=	1.10.4
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS diagnostic_analysis package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/diagnostic_msgs/package.xml:devel/ros-diagnostic_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/rosbag/package.xml:devel/ros-rosbag \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg
RUN_DEPENDS=	${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/diagnostic_msgs/package.xml:devel/ros-diagnostic_msgs \
		${LOCALBASE}/share/rosbag/package.xml:devel/ros-rosbag \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	diagnostics

SHEBANG_FILES=	scripts/export_csv.py\
		scripts/sparse_csv.py

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	diagnostic_analysis

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
