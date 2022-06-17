PORTNAME=	ros-rostime
DISTVERSION=	0.7.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rostime package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs

TEST_DEPENDS=	${LOCALBASE}/include/gtest/gtest.h:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	roscpp_core

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	rostime

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librostime.so\
	    ${STAGEDIR}${PREFIX}/lib/librostime.so.0.7.2
	${LN} -fs librostime.so.0.7.2\
	    ${STAGEDIR}${PREFIX}/lib/librostime.so.0.7
	${LN} -fs librostime.so.0.7\
	    ${STAGEDIR}${PREFIX}/lib/librostime.so.0
	${LN} -fs librostime.so.0\
	    ${STAGEDIR}${PREFIX}/lib/librostime.so

.include <bsd.port.mk>
