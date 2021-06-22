PORTNAME=	ros-tf
DISTVERSION=	1.13.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${_PYLIBDIR}/yaml:devel/py-yaml@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
		libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		librostime.so:devel/ros-rostime\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		dot:graphics/graphviz

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS=${_GENERATORS}\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf

_BUILD_RDEPS=	${_COMMON_RDEPS} angles catkin message_generation rostest rostime\
		rosunit

_COMMON_RDEPS=	geometry_msgs message_filters rosconsole roscpp sensor_msgs\
		std_msgs tf2_ros

_GENERATORS=	"gencpp;geneus;genlisp;gennodejs;genpy"
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	${_COMMON_RDEPS} message_runtime roswtf
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libtf.so\
	    ${STAGEDIR}${PREFIX}/lib/libtf.so.1.13.2
	${LN} -fs libtf.so.1.13.2\
	    ${STAGEDIR}${PREFIX}/lib/libtf.so.1.13
	${LN} -fs libtf.so.1.13\
	    ${STAGEDIR}${PREFIX}/lib/libtf.so.1
	${LN} -fs libtf.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libtf.so

.include <bsd.port.mk>
