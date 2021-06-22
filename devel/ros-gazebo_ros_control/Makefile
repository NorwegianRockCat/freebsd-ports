PORTNAME=	ros-gazebo_ros_control
DISTVERSION=	2.9.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS gazebo_ros_control package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
LIB_DEPENDS=	libassimp.so:multimedia/assimp\
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
		libclass_loader.so:devel/ros-class_loader\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcontrol_toolbox.so:devel/ros-control_toolbox\
		libcontroller_manager.so:devel/ros-controller_manager\
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
		libPocoFoundation.so:devel/poco\
		libprotobuf.so:devel/protobuf\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librealtime_tools.so:devel/ros-realtime_tools\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_bridge.so:devel/ros-rosconsole_bridge\
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
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		libtransmission_interface_loader_plugins.so:devel/ros-transmission_interface\
		libtransmission_interface_loader.so:devel/ros-transmission_interface\
		libtransmission_interface_parser.so:devel/ros-transmission_interface\
		liburdf.so:devel/ros-urdf\
		liburdfdom_model_state.so:devel/ros-urdfdom\
		liburdfdom_model.so:devel/ros-urdfdom\
		liburdfdom_sensor.so:devel/ros-urdfdom\
		liburdfdom_world.so:devel/ros-urdfdom\
		libuuid.so:misc/e2fsprogs-libuuid\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-simulation
GH_PROJECT=	gazebo_ros_pkgs

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	gazebo_ros_control

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin controller_interface\
		controller_manager_msgs gazebo_dev

_COMMON_RDEPS=	angles control_toolbox controller_manager hardware_interface\
		joint_limits_interface pluginlib roscpp std_msgs\
		transmission_interface urdf

_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_RUN_RDEPS=	${_COMMON_RDEPS} gazebo_ros
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libdefault_robot_hw_sim.so\
	    ${STAGEDIR}${PREFIX}/lib/libdefault_robot_hw_sim.so.2.9.2
	${LN} -fs libdefault_robot_hw_sim.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libdefault_robot_hw_sim.so.2.9
	${LN} -fs libdefault_robot_hw_sim.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libdefault_robot_hw_sim.so.2
	${LN} -fs libdefault_robot_hw_sim.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libdefault_robot_hw_sim.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_control.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_control.so.2.9.2
	${LN} -fs libgazebo_ros_control.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_control.so.2.9
	${LN} -fs libgazebo_ros_control.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_control.so.2
	${LN} -fs libgazebo_ros_control.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_control.so

.include <bsd.port.mk>
