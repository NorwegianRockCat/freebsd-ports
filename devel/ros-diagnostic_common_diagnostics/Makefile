PORTNAME=	ros-diagnostic_common_diagnostics
DISTVERSION=	1.10.4
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS diagnostic_common_diagnostics package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/psutil:sysutils/py-psutil@${PY_FLAVOR}\
		${LOCALBASE}/sbin/hddtempd:sysutils/hddtempd

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	diagnostics

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	diagnostic_common_diagnostics

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rostest
_COMMON_RDEPS=	diagnostic_updater rospy
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	${_COMMON_RDEPS} tf
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
