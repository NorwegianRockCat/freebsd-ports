PORTNAME=	ros-controller_manager
DISTVERSION=	0.19.4
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS controller_manager package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/controller_interface/package.xml:devel/ros-controller_interface \
		${LOCALBASE}/share/controller_manager_msgs/package.xml:devel/ros-controller_manager_msgs \
		${LOCALBASE}/share/hardware_interface/package.xml:devel/ros-hardware_interface \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp
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

RUN_DEPENDS=	${LOCALBASE}/share/controller_interface/package.xml:devel/ros-controller_interface \
		${LOCALBASE}/share/controller_manager_msgs/package.xml:devel/ros-controller_manager_msgs \
		${LOCALBASE}/share/hardware_interface/package.xml:devel/ros-hardware_interface \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-controls
GH_PROJECT=	ros_control

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	controller_manager

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libcontroller_manager.so\
	    ${STAGEDIR}${PREFIX}/lib/libcontroller_manager.so.0.19.4
	${LN} -fs libcontroller_manager.so.0.19.4\
	    ${STAGEDIR}${PREFIX}/lib/libcontroller_manager.so.0.19
	${LN} -fs libcontroller_manager.so.0.19\
	    ${STAGEDIR}${PREFIX}/lib/libcontroller_manager.so.0
	${LN} -fs libcontroller_manager.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libcontroller_manager.so

.include <bsd.port.mk>
