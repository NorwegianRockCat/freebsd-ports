PORTNAME=	ros-diagnostic_common_diagnostics
DISTVERSION=	1.10.4
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS diagnostic_common_diagnostics package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/diagnostic_updater/package.xml:devel/ros-diagnostic_updater \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \

RUN_DEPENDS=	${LOCALBASE}/share/diagnostic_updater/package.xml:devel/ros-diagnostic_updater \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${PYTHON_PKGNAMEPREFIX}psutil>=0:sysutils/py-psutil@${PY_FLAVOR}\
		${LOCALBASE}/sbin/hddtempd:sysutils/hddtempd

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	diagnostics

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	diagnostic_common_diagnostics

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
