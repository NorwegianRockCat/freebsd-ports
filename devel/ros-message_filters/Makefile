PORTNAME=	ros-message_filters
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS message_filters package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp

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
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	utilities/message_filters

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libmessage_filters.so\
	    ${STAGEDIR}${PREFIX}/lib/libmessage_filters.so.1.15.11
	${LN} -fs libmessage_filters.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/libmessage_filters.so.1.15
	${LN} -fs libmessage_filters.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libmessage_filters.so.1
	${LN} -fs libmessage_filters.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libmessage_filters.so

.include <bsd.port.mk>
