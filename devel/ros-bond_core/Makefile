PORTNAME=	ros-bond_core
DISTVERSION=	1.8.6
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS bond_core package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	bond_core

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	bond_core

PLIST_FILES=	share/bond_core/package.xml

_BUILD_RDEPS=	catkin
_RUN_RDEPS=	bond bondcpp bondpy smclib
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
