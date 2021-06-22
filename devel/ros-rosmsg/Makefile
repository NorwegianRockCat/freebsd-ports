PORTNAME=	ros-rosmsg
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosmsg package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	tools/rosmsg

_BUILD_RDEPS=	${_COMMON_RDEPS} diagnostic_msgs rostest std_msgs std_srvs
_COMMON_RDEPS=	catkin
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	${_COMMON_RDEPS} genmsg genpy rosbag roslib
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
