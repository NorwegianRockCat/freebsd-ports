PORTNAME=	ros-message_runtime
DISTVERSION=	0.4.13
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS message_runtime package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR}

RUN_DEPENDS=	${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/genpy/package.xml:devel/ros-genpy \
		${LOCALBASE}/share/roscpp_serialization/package.xml:devel/ros-roscpp_serialization \
		${LOCALBASE}/share/roscpp_traits/package.xml:devel/ros-roscpp_traits \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	message_runtime

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	libdata/pkgconfig/message_runtime.pc\
		share/message_runtime/cmake/message_runtimeConfig-version.cmake\
		share/message_runtime/cmake/message_runtimeConfig.cmake\
		share/message_runtime/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
