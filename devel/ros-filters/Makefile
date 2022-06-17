PORTNAME=	ros-filters
DISTVERSION=	1.9.1
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS filters package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg\
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib

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
RUN_DEPENDS=	${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	filters

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

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
