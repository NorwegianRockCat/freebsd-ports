PORTNAME=	ros-diagnostics
DISTVERSION=	1.10.4
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS diagnostics package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	diagnostics

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	diagnostics

PLIST_FILES=	share/diagnostics/package.xml

_BUILD_RDEPS=	catkin

_RUN_RDEPS=	diagnostic_aggregator diagnostic_analysis\
		diagnostic_common_diagnostics diagnostic_updater self_test

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
