PORTNAME=	ros-gl_dependency
DISTVERSION=	1.1.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS gl_dependency package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake pyqt:5 python qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	gl_dependency

USE_PYQT=	opengl

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	libdata/pkgconfig/gl_dependency.pc\
		share/gl_dependency/cmake/gl_dependencyConfig-version.cmake\
		share/gl_dependency/cmake/gl_dependencyConfig.cmake\
		share/gl_dependency/package.xml

_BUILD_RDEPS=	catkin
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
