PORTNAME=	ros-realtime_tools
DISTVERSION=	1.16.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS realtime_tools package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/actionlib/package.xml:devel/ros-actionlib \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

RUN_DEPENDS=	${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/actionlib/package.xml:devel/ros-actionlib \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	realtime_tools

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librealtime_tools.so\
	    ${STAGEDIR}${PREFIX}/lib/librealtime_tools.so.1.16.1
	${LN} -fs librealtime_tools.so.1.16.1\
	    ${STAGEDIR}${PREFIX}/lib/librealtime_tools.so.1.16
	${LN} -fs librealtime_tools.so.1.16\
	    ${STAGEDIR}${PREFIX}/lib/librealtime_tools.so.1
	${LN} -fs librealtime_tools.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librealtime_tools.so

.include <bsd.port.mk>
