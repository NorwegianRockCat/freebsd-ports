PORTNAME=	ros-urdf
DISTVERSION=	1.13.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS urdf package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/include/tinyxml.h:textproc/tinyxml\
		${LOCALBASE}/include/tinyxml2.h:textproc/tinyxml2\
		${LOCALBASE}/include/urdfdom_headers/urdf_model:devel/ros-urdfdom_headers\
		check_urdf:devel/ros-urdfdom \
		${LOCALBASE}/share/cmake_modules/package.xml:devel/ros-cmake_modules \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/urdf_parser_plugin/package.xml:devel/ros-urdf_parser_plugin \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib

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
		librosconsole_bridge.so:devel/ros-rosconsole_bridge\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		liburdfdom_model_state.so:devel/ros-urdfdom\
		liburdfdom_model.so:devel/ros-urdfdom\
		liburdfdom_sensor.so:devel/ros-urdfdom\
		liburdfdom_world.so:devel/ros-urdfdom\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib\
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	urdf

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	urdf

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/liburdf.so\
	    ${STAGEDIR}${PREFIX}/lib/liburdf.so.1.13.2
	${LN} -fs liburdf.so.1.13.2\
	    ${STAGEDIR}${PREFIX}/lib/liburdf.so.1.13
	${LN} -fs liburdf.so.1.13\
	    ${STAGEDIR}${PREFIX}/lib/liburdf.so.1
	${LN} -fs liburdf.so.1\
	    ${STAGEDIR}${PREFIX}/lib/liburdf.so

.include <bsd.port.mk>
