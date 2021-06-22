PORTNAME=	ros-pcl_ros
DISTVERSION=	1.7.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS pcl_ros package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
		libbondcpp.so:devel/ros-bondcpp\
		libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_iostreams.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libclass_loader.so:devel/ros-class_loader\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		libdynamic_reconfigure_config_init_mutex.so:devel/ros-dynamic_reconfigure\
		libflann_cpp.so:math/flann\
		liblog4cxx.so:devel/log4cxx\
		liblz4.so:archivers/liblz4\
		libmessage_filters.so:devel/ros-message_filters\
		libnodeletlib.so:devel/ros-nodelet\
		libpcl_common.so:graphics/pcl-pointclouds\
		libpcl_features.so:graphics/pcl-pointclouds\
		libpcl_filters.so:graphics/pcl-pointclouds\
		libpcl_io.so:graphics/pcl-pointclouds\
		libpcl_kdtree.so:graphics/pcl-pointclouds\
		libpcl_ml.so:graphics/pcl-pointclouds\
		libpcl_octree.so:graphics/pcl-pointclouds\
		libpcl_sample_consensus.so:graphics/pcl-pointclouds\
		libpcl_search.so:graphics/pcl-pointclouds\
		libpcl_segmentation.so:graphics/pcl-pointclouds\
		libpcl_surface.so:graphics/pcl-pointclouds\
		libPocoFoundation.so:devel/poco\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		libqhull_p.so:math/qhull\
		librosbag_storage.so:devel/ros-rosbag_storage\
		librosbag.so:devel/ros-rosbag\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		libroslz4.so:devel/ros-roslz4\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtf.so:devel/ros-tf\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libtinyxml2.so:textproc/tinyxml2\
		libtopic_tools.so:devel/ros-topic_tools\
		libuuid.so:misc/e2fsprogs-libuuid\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake eigen:3 localbase:ldflags python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	perception_pcl

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	pcl_ros

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules rosconsole roslib rostest

_COMMON_RDEPS=	dynamic_reconfigure geometry_msgs message_filters nodelet\
		nodelet_topic_tools pcl_conversions pcl_msgs pluginlib rosbag\
		roscpp sensor_msgs std_msgs tf tf2 tf2_eigen tf2_ros

_COMMON_XDEPS=	pcl_icp:graphics/pcl-pointclouds
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libpcl_ros_features.so\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_features.so.1.7.2
	${LN} -fs libpcl_ros_features.so.1.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_features.so.1.7
	${LN} -fs libpcl_ros_features.so.1.7\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_features.so.1
	${LN} -fs libpcl_ros_features.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_features.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filter.so\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filter.so.1.7.2
	${LN} -fs libpcl_ros_filter.so.1.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filter.so.1.7
	${LN} -fs libpcl_ros_filter.so.1.7\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filter.so.1
	${LN} -fs libpcl_ros_filter.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filter.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filters.so\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filters.so.1.7.2
	${LN} -fs libpcl_ros_filters.so.1.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filters.so.1.7
	${LN} -fs libpcl_ros_filters.so.1.7\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filters.so.1
	${LN} -fs libpcl_ros_filters.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_filters.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libpcl_ros_io.so\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_io.so.1.7.2
	${LN} -fs libpcl_ros_io.so.1.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_io.so.1.7
	${LN} -fs libpcl_ros_io.so.1.7\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_io.so.1
	${LN} -fs libpcl_ros_io.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_io.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libpcl_ros_segmentation.so\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_segmentation.so.1.7.2
	${LN} -fs libpcl_ros_segmentation.so.1.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_segmentation.so.1.7
	${LN} -fs libpcl_ros_segmentation.so.1.7\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_segmentation.so.1
	${LN} -fs libpcl_ros_segmentation.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_segmentation.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libpcl_ros_surface.so\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_surface.so.1.7.2
	${LN} -fs libpcl_ros_surface.so.1.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_surface.so.1.7
	${LN} -fs libpcl_ros_surface.so.1.7\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_surface.so.1
	${LN} -fs libpcl_ros_surface.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_surface.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libpcl_ros_tf.so\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_tf.so.1.7.2
	${LN} -fs libpcl_ros_tf.so.1.7.2\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_tf.so.1.7
	${LN} -fs libpcl_ros_tf.so.1.7\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_tf.so.1
	${LN} -fs libpcl_ros_tf.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libpcl_ros_tf.so

.include <bsd.port.mk>
