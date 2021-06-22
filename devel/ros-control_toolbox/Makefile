PORTNAME=	ros-control_toolbox
DISTVERSION=	1.18.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS control_toolbox package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${_PYLIBDIR}/yaml:devel/py-yaml@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		libdynamic_reconfigure_config_init_mutex.so:devel/ros-dynamic_reconfigure\
		liblog4cxx.so:devel/log4cxx\
		librealtime_tools.so:devel/ros-realtime_tools\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libtinyxml.so:textproc/tinyxml\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	control_toolbox

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS=${_GENERATORS}\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules message_generation rosunit
_COMMON_RDEPS=	control_msgs dynamic_reconfigure realtime_tools roscpp std_msgs
_COMMON_XDEPS=	${LOCALBASE}/include/tinyxml.h:textproc/tinyxml
_GENERATORS=	"gencpp;geneus;genlisp;gennodejs;genpy"
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	${_COMMON_RDEPS} message_runtime
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libcontrol_toolbox.so\
	    ${STAGEDIR}${PREFIX}/lib/libcontrol_toolbox.so.1.18.2
	${LN} -fs libcontrol_toolbox.so.1.18.2\
	    ${STAGEDIR}${PREFIX}/lib/libcontrol_toolbox.so.1.18
	${LN} -fs libcontrol_toolbox.so.1.18\
	    ${STAGEDIR}${PREFIX}/lib/libcontrol_toolbox.so.1
	${LN} -fs libcontrol_toolbox.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libcontrol_toolbox.so

.include <bsd.port.mk>
