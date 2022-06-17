PORTNAME=	ros-roscpp_serialization
DISTVERSION=	0.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roscpp_serialization package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/roscpp_traits/package.xml:devel/ros-roscpp_traits \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	roscpp_core

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	roscpp_serialization

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
