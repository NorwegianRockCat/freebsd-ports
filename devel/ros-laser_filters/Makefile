PORTNAME=	ros-laser_filters
DISTVERSION=	1.8.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS laser_filters package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
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
		libdynamic_reconfigure_config_init_mutex.so:devel/ros-dynamic_reconfigure\
		libincrement.so:devel/ros-filters\
		liblaser_geometry.so:devel/ros-laser_geometry\
		liblog4cxx.so:devel/log4cxx\
		libmean.so:devel/ros-filters\
		libmedian.so:devel/ros-filters\
		libmessage_filters.so:devel/ros-message_filters\
		libparams.so:devel/ros-filters\
		libPocoFoundation.so:devel/poco\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtf.so:devel/ros-tf\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libtinyxml2.so:textproc/tinyxml2\
		libtransfer_function.so:devel/ros-filters\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/dynamic_reconfigure/package.xml:devel/ros-dynamic_reconfigure \
		${LOCALBASE}/share/filters/package.xml:devel/ros-filters \
		${LOCALBASE}/share/laser_geometry/package.xml:devel/ros-laser_geometry \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf

USES=		cmake eigen:3 python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	laser_filters

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/liblaser_scan_filters.so\
	    ${STAGEDIR}${PREFIX}/lib/liblaser_scan_filters.so.1.8.11
	${LN} -fs liblaser_scan_filters.so.1.8.11\
	    ${STAGEDIR}${PREFIX}/lib/liblaser_scan_filters.so.1.8
	${LN} -fs liblaser_scan_filters.so.1.8\
	    ${STAGEDIR}${PREFIX}/lib/liblaser_scan_filters.so.1
	${LN} -fs liblaser_scan_filters.so.1\
	    ${STAGEDIR}${PREFIX}/lib/liblaser_scan_filters.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libpointcloud_filters.so\
	    ${STAGEDIR}${PREFIX}/lib/libpointcloud_filters.so.1.8.11
	${LN} -fs libpointcloud_filters.so.1.8.11\
	    ${STAGEDIR}${PREFIX}/lib/libpointcloud_filters.so.1.8
	${LN} -fs libpointcloud_filters.so.1.8\
	    ${STAGEDIR}${PREFIX}/lib/libpointcloud_filters.so.1
	${LN} -fs libpointcloud_filters.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libpointcloud_filters.so

.include <bsd.port.mk>
