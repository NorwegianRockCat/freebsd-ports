PORTNAME=	ros-xmlrpcpp
DISTVERSION=	1.15.11
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS xmlrpcpp package

LICENSE=	LGPL21+

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR}

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		librostime.so:devel/ros-rostime

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	utilities/xmlrpcpp

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so\
	    ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so.1.15.11
	${LN} -fs libxmlrpcpp.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so.1.15
	${LN} -fs libxmlrpcpp.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so.1
	${LN} -fs libxmlrpcpp.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libxmlrpcpp.so

.include <bsd.port.mk>
