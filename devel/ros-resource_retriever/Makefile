PORTNAME=	ros-resource_retriever
DISTVERSION=	1.12.6
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS resource_retriever package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		libcurl.so:ftp/curl\
		liblog4cxx.so:devel/log4cxx\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml2.so:textproc/tinyxml2
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg@${PY_FLAVOR}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	resource_retriever

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BOOSTLIB=	${LOCALBASE}/lib/lib${PY_BOOST_LIB}.so
_BUILD_RDEPS=	${_COMMON_RDEPS} catkin
_COMMON_RDEPS=	rosconsole roslib

_COMMON_XDEPS=	${_BOOSTLIB}:devel/boost-python-libs@${PY_FLAVOR}\
		curl:ftp/curl

_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libresource_retriever.so\
	    ${STAGEDIR}${PREFIX}/lib/libresource_retriever.so.1.12.6
	${LN} -fs libresource_retriever.so.1.12.6\
	    ${STAGEDIR}${PREFIX}/lib/libresource_retriever.so.1.12
	${LN} -fs libresource_retriever.so.1.12\
	    ${STAGEDIR}${PREFIX}/lib/libresource_retriever.so.1
	${LN} -fs libresource_retriever.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libresource_retriever.so

.include <bsd.port.mk>
