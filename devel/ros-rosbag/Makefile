PORTNAME=	ros-rosbag
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosbag package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${_PYLIBDIR}/PIL:graphics/py-pillow@${PY_FLAVOR}\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libclass_loader.so:devel/ros-class_loader\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		liblz4.so:archivers/liblz4\
		libPocoFoundation.so:devel/poco\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librosbag_storage.so:devel/ros-rosbag_storage\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		libroslz4.so:devel/ros-roslz4\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml2.so:textproc/tinyxml2\
		libtopic_tools.so:devel/ros-topic_tools\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/Crypto:security/py-pycryptodome@${PY_FLAVOR}\
		${_PYLIBDIR}/pretty_bad_protocol:security/py-gnupg@${PY_FLAVOR}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg@${PY_FLAVOR}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tools/rosbag

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cpp_common roscpp_serialization
_COMMON_RDEPS=	rosbag_storage rosconsole roscpp std_srvs topic_tools xmlrpcpp
_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_RUN_RDEPS=	${_COMMON_RDEPS} genmsg genpy roslib rospy
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librosbag.so\
	    ${STAGEDIR}${PREFIX}/lib/librosbag.so.1.15.11
	${LN} -fs librosbag.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/librosbag.so.1.15
	${LN} -fs librosbag.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/librosbag.so.1
	${LN} -fs librosbag.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosbag.so

.include <bsd.port.mk>
