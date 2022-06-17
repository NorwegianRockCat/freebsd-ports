PORTNAME=	ros-diagnostics
DISTVERSION=	1.10.4
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS diagnostics package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/diagnostic_aggregator/package.xml:devel/ros-diagnostic_aggregator \
		${LOCALBASE}/share/diagnostic_analysis/package.xml:devel/ros-diagnostic_analysis \
		${LOCALBASE}/share/diagnostic_common_diagnostics/package.xml:devel/ros-diagnostic_common_diagnostics \
		${LOCALBASE}/share/diagnostic_updater/package.xml:devel/ros-diagnostic_updater \
		${LOCALBASE}/share/self_test/package.xml:devel/ros-self_test

RUN_DEPENDS=	${LOCALBASE}/share/diagnostic_aggregator/package.xml:devel/ros-diagnostic_aggregator \
		${LOCALBASE}/share/diagnostic_analysis/package.xml:devel/ros-diagnostic_analysis \
		${LOCALBASE}/share/diagnostic_common_diagnostics/package.xml:devel/ros-diagnostic_common_diagnostics \
		${LOCALBASE}/share/diagnostic_updater/package.xml:devel/ros-diagnostic_updater \
		${LOCALBASE}/share/self_test/package.xml:devel/ros-self_test \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	diagnostics

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	diagnostics

PLIST_FILES=	share/diagnostics/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
