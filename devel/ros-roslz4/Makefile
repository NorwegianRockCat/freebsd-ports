PORTNAME=	ros-roslz4
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roslz4 package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblz4.so:archivers/liblz4

RUN_DEPENDS=	${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	utilities/roslz4

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libroslz4.so\
	    ${STAGEDIR}${PREFIX}/lib/libroslz4.so.1.15.11
	${LN} -fs libroslz4.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/libroslz4.so.1.15
	${LN} -fs libroslz4.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libroslz4.so.1
	${LN} -fs libroslz4.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libroslz4.so

.include <bsd.port.mk>
