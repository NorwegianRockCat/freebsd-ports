PORTNAME=	ros-rviz
DISTVERSION=	1.14.7
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rviz package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/cmake_modules/package.xml:devel/ros-cmake_modules \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/rosunit/package.xml:devel/ros-rosunit \
		${LOCALBASE}/share/map_msgs/package.xml:devel/ros-map_msgs \
		${PYTHON_PKGNAMEPREFIX}qtbuilder>0:devel/py-qtbuilder@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg\
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}\
		${LOCALBASE}/include/urdfdom_headers/urdf_model:devel/ros-urdfdom_headers\
		check_urdf:devel/ros-urdfdom\
		sip-build:devel/py-sip@${PY_FLAVOR}\
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding


LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
		libassimp.so:multimedia/assimp\
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
		libGL.so:graphics/mesa-libs\
		libGLU.so:graphics/libGLU\
		libimage_transport.so:devel/ros-image_transport\
		libinteractive_markers.so:devel/ros-interactive_markers\
		liblaser_geometry.so:devel/ros-laser_geometry\
		liblog4cxx.so:devel/log4cxx\
		liblz4.so:archivers/liblz4\
		libmessage_filters.so:devel/ros-message_filters\
		libOgreBites.so:graphics/ogre3d\
		libOgreHLMS.so:graphics/ogre3d\
		libOgreMain.so:graphics/ogre3d\
		libOgreMeshLodGenerator.so:graphics/ogre3d\
		libOgreOverlay.so:graphics/ogre3d\
		libOgrePaging.so:graphics/ogre3d\
		libOgreProperty.so:graphics/ogre3d\
		libOgreRTShaderSystem.so:graphics/ogre3d\
		libOgreTerrain.so:graphics/ogre3d\
		libOgreVolume.so:graphics/ogre3d\
		liborocos-kdl.so:devel/orocos_kdl\
		libPocoFoundation.so:devel/poco\
		libQt5Core.so:devel/qt5-core\
		libQt5Gui.so:x11-toolkits/qt5-gui\
		libQt5Widgets.so:x11-toolkits/qt5-widgets\
		libresource_retriever.so:devel/ros-resource_retriever\
		librosbag_storage.so:devel/ros-rosbag_storage\
		librosbag.so:devel/ros-rosbag\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_bridge.so:devel/ros-rosconsole_bridge\
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
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		libtopic_tools.so:devel/ros-topic_tools\
		liburdf.so:devel/ros-urdf\
		liburdfdom_model_state.so:devel/ros-urdfdom\
		liburdfdom_model.so:devel/ros-urdfdom\
		liburdfdom_sensor.so:devel/ros-urdfdom\
		liburdfdom_world.so:devel/ros-urdfdom\
		libX11.so:x11/libX11\
		libxmlrpcpp.so:devel/ros-xmlrpcpp\
		libyaml-cpp.so:devel/yaml-cpp
RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/image_transport/package.xml:devel/ros-image_transport \
		${LOCALBASE}/share/interactive_markers/package.xml:devel/ros-interactive_markers \
		${LOCALBASE}/share/laser_geometry/package.xml:devel/ros-laser_geometry \
		${LOCALBASE}/share/map_msgs/package.xml:devel/ros-map_msgs \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/nav_msgs/package.xml:devel/ros-nav_msgs \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		${LOCALBASE}/share/resource_retriever/package.xml:devel/ros-resource_retriever \
		${LOCALBASE}/share/rosbag/package.xml:devel/ros-rosbag \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/tf2_geometry_msgs/package.xml:devel/ros-tf2_geometry_msgs \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/share/urdf/package.xml:devel/ros-urdf \
		${LOCALBASE}/share/visualization_msgs/package.xml:devel/ros-visualization_msgs \
		${LOCALBASE}/share/media_export/package.xml:devel/ros-media_export \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${LOCALBASE}/share/python_qt_binding/package.xml:devel/ros-python_qt_binding \
		eigen>0:math/eigen3

USES=		cmake eigen:3 localbase:ldflags pyqt:5 python qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rviz

USE_LDCONFIG=	yes
USE_PYQT=	pyqt5 sip
USE_QT=		buildtools_build qmake_build

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS="gencpp;geneus;genlisp;gennodejs;genpy"\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librviz_default_plugin.so\
	    ${STAGEDIR}${PREFIX}/lib/librviz_default_plugin.so.1.14.7
	${LN} -fs librviz_default_plugin.so.1.14.7\
	    ${STAGEDIR}${PREFIX}/lib/librviz_default_plugin.so.1.14
	${LN} -fs librviz_default_plugin.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/librviz_default_plugin.so.1
	${LN} -fs librviz_default_plugin.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librviz_default_plugin.so
	${MV} ${STAGEDIR}${PREFIX}/lib/librviz.so\
	    ${STAGEDIR}${PREFIX}/lib/librviz.so.1.14.7
	${LN} -fs librviz.so.1.14.7\
	    ${STAGEDIR}${PREFIX}/lib/librviz.so.1.14
	${LN} -fs librviz.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/librviz.so.1
	${LN} -fs librviz.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librviz.so

.include <bsd.port.mk>
