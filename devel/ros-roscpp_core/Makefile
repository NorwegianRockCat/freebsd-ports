PORTNAME=	ros-roscpp_core
DISTVERSION=	0.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roscpp_core package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/roscpp_serialization/package.xml:devel/ros-roscpp_serialization \
		${LOCALBASE}/share/roscpp_traits/package.xml:devel/ros-roscpp_traits \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \

RUN_DEPENDS=	${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/roscpp_serialization/package.xml:devel/ros-roscpp_serialization \
		${LOCALBASE}/share/roscpp_traits/package.xml:devel/ros-roscpp_traits \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \


USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	roscpp_core

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	roscpp_core

PLIST_FILES=	share/roscpp_core/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
