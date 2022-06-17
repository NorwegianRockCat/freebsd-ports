PORTNAME=	ros-diagnostic_aggregator
DISTVERSION=	1.10.4
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS diagnostic_aggregator package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/bondcpp/package.xml:devel/ros-bondcpp \
		${LOCALBASE}/share/bondpy/package.xml:devel/ros-bondpy \
		${LOCALBASE}/share/diagnostic_msgs/package.xml:devel/ros-diagnostic_msgs \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \

LIB_DEPENDS=	libbondcpp.so:devel/ros-bondcpp\
		libboost_atomic.so:devel/boost-libs\
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
		libuuid.so:misc/e2fsprogs-libuuid\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

RUN_DEPENDS=	${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/bondcpp/package.xml:devel/ros-bondcpp \
		${LOCALBASE}/share/bondpy/package.xml:devel/ros-bondpy \
		${LOCALBASE}/share/diagnostic_msgs/package.xml:devel/ros-diagnostic_msgs \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	diagnostics

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	diagnostic_aggregator

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libdiagnostic_aggregator.so\
	    ${STAGEDIR}${PREFIX}/lib/libdiagnostic_aggregator.so.1.10.4
	${LN} -fs libdiagnostic_aggregator.so.1.10.4\
	    ${STAGEDIR}${PREFIX}/lib/libdiagnostic_aggregator.so.1.10
	${LN} -fs libdiagnostic_aggregator.so.1.10\
	    ${STAGEDIR}${PREFIX}/lib/libdiagnostic_aggregator.so.1
	${LN} -fs libdiagnostic_aggregator.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libdiagnostic_aggregator.so

.include <bsd.port.mk>
