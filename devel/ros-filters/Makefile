PORTNAME=	ros-filters
DISTVERSION=	1.9.1
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS filters package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
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
		libclass_loader.so:devel/ros-class_loader\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
		libPocoFoundation.so:devel/poco\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml2.so:textproc/tinyxml2\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	filters

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rostest
_COMMON_RDEPS=	pluginlib rosconsole roscpp roslib
_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libincrement.so\
	    ${STAGEDIR}${PREFIX}/lib/libincrement.so.1.9.1
	${LN} -fs libincrement.so.1.9.1\
	    ${STAGEDIR}${PREFIX}/lib/libincrement.so.1.9
	${LN} -fs libincrement.so.1.9\
	    ${STAGEDIR}${PREFIX}/lib/libincrement.so.1
	${LN} -fs libincrement.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libincrement.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libmean.so\
	    ${STAGEDIR}${PREFIX}/lib/libmean.so.1.9.1
	${LN} -fs libmean.so.1.9.1\
	    ${STAGEDIR}${PREFIX}/lib/libmean.so.1.9
	${LN} -fs libmean.so.1.9\
	    ${STAGEDIR}${PREFIX}/lib/libmean.so.1
	${LN} -fs libmean.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libmean.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libmedian.so\
	    ${STAGEDIR}${PREFIX}/lib/libmedian.so.1.9.1
	${LN} -fs libmedian.so.1.9.1\
	    ${STAGEDIR}${PREFIX}/lib/libmedian.so.1.9
	${LN} -fs libmedian.so.1.9\
	    ${STAGEDIR}${PREFIX}/lib/libmedian.so.1
	${LN} -fs libmedian.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libmedian.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libparams.so\
	    ${STAGEDIR}${PREFIX}/lib/libparams.so.1.9.1
	${LN} -fs libparams.so.1.9.1\
	    ${STAGEDIR}${PREFIX}/lib/libparams.so.1.9
	${LN} -fs libparams.so.1.9\
	    ${STAGEDIR}${PREFIX}/lib/libparams.so.1
	${LN} -fs libparams.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libparams.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libtransfer_function.so\
	    ${STAGEDIR}${PREFIX}/lib/libtransfer_function.so.1.9.1
	${LN} -fs libtransfer_function.so.1.9.1\
	    ${STAGEDIR}${PREFIX}/lib/libtransfer_function.so.1.9
	${LN} -fs libtransfer_function.so.1.9\
	    ${STAGEDIR}${PREFIX}/lib/libtransfer_function.so.1
	${LN} -fs libtransfer_function.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libtransfer_function.so

.include <bsd.port.mk>
