PORTNAME=	ros-qwt_dependency
DISTVERSION=	1.1.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS qwt_dependency package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	qwt_dependency

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	libdata/pkgconfig/qwt_dependency.pc\
		share/qwt_dependency/cmake/qwt_dependencyConfig-version.cmake\
		share/qwt_dependency/cmake/qwt_dependencyConfig.cmake\
		share/qwt_dependency/package.xml

_BUILD_RDEPS=	catkin
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
