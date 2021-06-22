PORTNAME=	ros-roscpp_serialization
DISTVERSION=	0.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roscpp_serialization package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	roscpp_core

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	roscpp_serialization

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	cpp_common roscpp_traits rostime
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libroscpp_serialization.so\
	    ${STAGEDIR}${PREFIX}/lib/libroscpp_serialization.so.0.7.2
	${LN} -fs libroscpp_serialization.so.0.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libroscpp_serialization.so.0.7
	${LN} -fs libroscpp_serialization.so.0.7\
	    ${STAGEDIR}${PREFIX}/lib/libroscpp_serialization.so.0
	${LN} -fs libroscpp_serialization.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libroscpp_serialization.so

.include <bsd.port.mk>
