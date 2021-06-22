PORTNAME=	ros-gazebo_ros
DISTVERSION=	2.9.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS gazebo_ros package

LICENSE=	APACHE20

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
		libassimp.so:multimedia/assimp\
		libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_iostreams.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libBulletCollision.so:devel/bullet\
		libBulletDynamics.so:devel/bullet\
		libBulletSoftBody.so:devel/bullet\
		libccd.so:math/libccd\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		libdart-external-odelcpsolver.so:misc/dartsim\
		libdart.so:misc/dartsim\
		libdynamic_reconfigure_config_init_mutex.so:devel/ros-dynamic_reconfigure\
		libfcl.so:math/fcl\
		libgazebo_client.so:cad/gazebo\
		libgazebo_common.so:cad/gazebo\
		libgazebo_gimpact.so:cad/gazebo\
		libgazebo_gui.so:cad/gazebo\
		libgazebo_msgs.so:cad/gazebo\
		libgazebo_ode.so:cad/gazebo\
		libgazebo_opcode.so:cad/gazebo\
		libgazebo_opende_ou.so:cad/gazebo\
		libgazebo_physics.so:cad/gazebo\
		libgazebo_rendering.so:cad/gazebo\
		libgazebo_sensors.so:cad/gazebo\
		libgazebo_transport.so:cad/gazebo\
		libgazebo_util.so:cad/gazebo\
		libgazebo.so:cad/gazebo\
		libignition-common3-graphics.so:devel/ignition-common\
		libignition-common3.so:devel/ignition-common\
		libignition-fuel_tools4.so:misc/ignition-fuel-tools\
		libignition-math6.so:math/ignition-math\
		libignition-msgs5.so:devel/ignition-msgs\
		libignition-transport8.so:devel/ignition-transport\
		libLinearMath.so:devel/bullet\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		liboctomap.so:math/octomap\
		liboctomath.so:math/octomap\
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
		libopenblas.so:math/openblas\
		libprotobuf.so:devel/protobuf\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libsdformat9.so:misc/sdformat\
		libSimTKcommon.so:science/simbody\
		libSimTKmath.so:science/simbody\
		libSimTKsimbody.so:science/simbody\
		libtf.so:devel/ros-tf\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		libuuid.so:misc/e2fsprogs-libuuid\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/argparse.py:devel/py-argparse@${PY_FLAVOR}\
		${_COMMON_XDEPS}

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros-simulation
GH_PROJECT=	gazebo_ros_pkgs

USE_LDCONFIG=	yes

SHEBANG_FILES=	scripts/gdbrun\
		test/ros_network/ros_api_checker

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	gazebo_ros

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules

_COMMON_RDEPS=	dynamic_reconfigure gazebo_dev gazebo_msgs geometry_msgs roscpp\
		rosgraph_msgs roslib std_msgs std_srvs tf

_COMMON_XDEPS=	${LOCALBASE}/include/tinyxml.h:textproc/tinyxml
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_api_plugin.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_api_plugin.so.2.9.2
	${LN} -fs libgazebo_ros_api_plugin.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_api_plugin.so.2.9
	${LN} -fs libgazebo_ros_api_plugin.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_api_plugin.so.2
	${LN} -fs libgazebo_ros_api_plugin.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_api_plugin.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_paths_plugin.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_paths_plugin.so.2.9.2
	${LN} -fs libgazebo_ros_paths_plugin.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_paths_plugin.so.2.9
	${LN} -fs libgazebo_ros_paths_plugin.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_paths_plugin.so.2
	${LN} -fs libgazebo_ros_paths_plugin.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_paths_plugin.so

.include <bsd.port.mk>
