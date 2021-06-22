PORTNAME=	ros-rviz
DISTVERSION=	1.14.7
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rviz package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/pyqtbuild:devel/py-qtbuilder@${PY_FLAVOR}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${_PYLIBDIR}/yaml:devel/py-yaml@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${LOCALBASE}/include/urdf_model:devel/ros-urdfdom_headers\
		check_urdf:devel/ros-urdfdom\
		sip-build:devel/py-sip@${PY_FLAVOR}\
		${_COMMON_XDEPS}
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
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
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
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake eigen:3 localbase:ldflags pyqt:5 python qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	ros-visualization
GH_PROJECT=	rviz

USE_LDCONFIG=	yes
USE_PYQT=	gui opengl sip widgets
USE_QT=		buildtools_build qmake_build

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS=${_GENERATORS}\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules message_generation rostest\
		rosunit

_COMMON_RDEPS=	geometry_msgs image_transport interactive_markers laser_geometry\
		map_msgs message_filters nav_msgs pluginlib python_qt_binding\
		resource_retriever rosbag rosconsole roscpp roslib rospy\
		sensor_msgs std_msgs std_srvs tf2_geometry_msgs tf2_ros urdf\
		visualization_msgs

_COMMON_XDEPS=	${LOCALBASE}/include/GL/gl.h:graphics/mesa-libs\
		${LOCALBASE}/include/tinyxml2.h:textproc/tinyxml2\
		${LOCALBASE}/include/yaml-cpp/yaml.h:devel/yaml-cpp\
		assimp:multimedia/assimp\
		SampleBrowser:graphics/ogre3d

_GENERATORS=	"gencpp;geneus;genlisp;gennodejs;genpy"
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_RUN_RDEPS=	${_COMMON_RDEPS} media_export message_runtime
_SHAREDIR=	${LOCALBASE}/share

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
