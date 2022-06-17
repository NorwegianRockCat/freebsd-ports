PORTNAME=	ros-rosconsole
DISTVERSION=	1.14.3
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosconsole package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rosbuild/package.xml:devel/ros-rosbuild \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \
		${LOCALBASE}/include/apr-1/apr.h:devel/apr1

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		librostime.so:devel/ros-rostime

RUN_DEPENDS=	${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	rosconsole

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so.1.14.3
	${LN} -fs librosconsole_backend_interface.so.1.14.3\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so.1.14
	${LN} -fs librosconsole_backend_interface.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so.1
	${LN} -fs librosconsole_backend_interface.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_backend_interface.so
	${MV} ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so.1.14.3
	${LN} -fs librosconsole_log4cxx.so.1.14.3\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so.1.14
	${LN} -fs librosconsole_log4cxx.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so.1
	${LN} -fs librosconsole_log4cxx.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole_log4cxx.so
	${MV} ${STAGEDIR}${PREFIX}/lib/librosconsole.so\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole.so.1.14.3
	${LN} -fs librosconsole.so.1.14.3\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole.so.1.14
	${LN} -fs librosconsole.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole.so.1
	${LN} -fs librosconsole.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosconsole.so

.include <bsd.port.mk>
