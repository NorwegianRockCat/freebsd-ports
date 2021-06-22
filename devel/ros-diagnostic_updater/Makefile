PORTNAME=	ros-diagnostic_updater
DISTVERSION=	1.10.4
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS diagnostic_updater package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
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
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	diagnostics

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	diagnostic_updater

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rostest
_COMMON_RDEPS=	diagnostic_msgs roscpp std_msgs
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libdiagnostic_updater.so\
	    ${STAGEDIR}${PREFIX}/lib/libdiagnostic_updater.so.1.10.4
	${LN} -fs libdiagnostic_updater.so.1.10.4\
	    ${STAGEDIR}${PREFIX}/lib/libdiagnostic_updater.so.1.10
	${LN} -fs libdiagnostic_updater.so.1.10\
	    ${STAGEDIR}${PREFIX}/lib/libdiagnostic_updater.so.1
	${LN} -fs libdiagnostic_updater.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libdiagnostic_updater.so

.include <bsd.port.mk>
