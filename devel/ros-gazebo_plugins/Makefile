PORTNAME=	ros-gazebo_plugins
DISTVERSION=	2.9.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS gazebo_plugins package

LICENSE=	APACHE20 BSD3CLAUSE
LICENSE_COMB=	multi

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/camera_info_manager/package.xml:devel/ros-camera_info_manager \
		${LOCALBASE}/share/cv_bridge/package.xml:devel/ros-cv_bridge \
		${LOCALBASE}/share/diagnostic_updater/package.xml:devel/ros-diagnostic_updater \
		${LOCALBASE}/share/dynamic_reconfigure/package.xml:devel/ros-dynamic_reconfigure \
		${LOCALBASE}/share/gazebo_dev/package.xml:devel/ros-gazebo_dev \
		${LOCALBASE}/share/gazebo_msgs/package.xml:devel/ros-gazebo_msgs \
		${LOCALBASE}/share/gazebo_ros/package.xml:devel/ros-gazebo_ros \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/image_transport/package.xml:devel/ros-image_transport \
		${LOCALBASE}/share/nav_msgs/package.xml:devel/ros-nav_msgs \
		${LOCALBASE}/share/nodelet/package.xml:devel/ros-nodelet \
		${LOCALBASE}/share/polled_camera/package.xml:devel/ros-polled_camera \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/share/trajectory_msgs/package.xml:devel/ros-trajectory_msgs \
		${LOCALBASE}/share/urdf/package.xml:devel/ros-urdf \
		${LOCALBASE}/share/visualization_msgs/package.xml:devel/ros-visualization_msgs \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg\
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest

LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
		libassimp.so:multimedia/assimp\
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
		libBulletCollision.so:devel/bullet\
		libBulletDynamics.so:devel/bullet\
		libBulletSoftBody.so:devel/bullet\
		libcamera_calibration_parsers.so:devel/ros-camera_calibration_parsers\
		libcamera_info_manager.so:devel/ros-camera_info_manager\
		libccd.so:math/libccd\
		libclass_loader.so:devel/ros-class_loader\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		libcv_bridge.so:devel/ros-cv_bridge\
		libdart-external-odelcpsolver.so:misc/dartsim\
		libdart.so:misc/dartsim\
		libdiagnostic_updater.so:devel/ros-diagnostic_updater\
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
		libimage_transport.so:devel/ros-image_transport\
		libLinearMath.so:devel/bullet\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		libnodeletlib.so:devel/ros-nodelet\
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
		libopencv_alphamat.so:graphics/opencv\
		libopencv_aruco.so:graphics/opencv\
		libopencv_bgsegm.so:graphics/opencv\
		libopencv_bioinspired.so:graphics/opencv\
		libopencv_calib3d.so:graphics/opencv\
		libopencv_ccalib.so:graphics/opencv\
		libopencv_core.so:graphics/opencv\
		libopencv_datasets.so:graphics/opencv\
		libopencv_dnn_objdetect.so:graphics/opencv\
		libopencv_dnn_superres.so:graphics/opencv\
		libopencv_dnn.so:graphics/opencv\
		libopencv_dpm.so:graphics/opencv\
		libopencv_face.so:graphics/opencv\
		libopencv_features2d.so:graphics/opencv\
		libopencv_flann.so:graphics/opencv\
		libopencv_freetype.so:graphics/opencv\
		libopencv_fuzzy.so:graphics/opencv\
		libopencv_gapi.so:graphics/opencv\
		libopencv_hdf.so:graphics/opencv\
		libopencv_hfs.so:graphics/opencv\
		libopencv_highgui.so:graphics/opencv\
		libopencv_img_hash.so:graphics/opencv\
		libopencv_imgcodecs.so:graphics/opencv\
		libopencv_imgproc.so:graphics/opencv\
		libopencv_intensity_transform.so:graphics/opencv\
		libopencv_line_descriptor.so:graphics/opencv\
		libopencv_mcc.so:graphics/opencv\
		libopencv_ml.so:graphics/opencv\
		libopencv_objdetect.so:graphics/opencv\
		libopencv_optflow.so:graphics/opencv\
		libopencv_phase_unwrapping.so:graphics/opencv\
		libopencv_photo.so:graphics/opencv\
		libopencv_plot.so:graphics/opencv\
		libopencv_quality.so:graphics/opencv\
		libopencv_rapid.so:graphics/opencv\
		libopencv_reg.so:graphics/opencv\
		libopencv_rgbd.so:graphics/opencv\
		libopencv_saliency.so:graphics/opencv\
		libopencv_sfm.so:graphics/opencv\
		libopencv_shape.so:graphics/opencv\
		libopencv_stereo.so:graphics/opencv\
		libopencv_stitching.so:graphics/opencv\
		libopencv_structured_light.so:graphics/opencv\
		libopencv_superres.so:graphics/opencv\
		libopencv_surface_matching.so:graphics/opencv\
		libopencv_text.so:graphics/opencv\
		libopencv_tracking.so:graphics/opencv\
		libopencv_video.so:graphics/opencv\
		libopencv_videoio.so:graphics/opencv\
		libopencv_videostab.so:graphics/opencv\
		libopencv_xfeatures2d.so:graphics/opencv\
		libopencv_ximgproc.so:graphics/opencv\
		libopencv_xobjdetect.so:graphics/opencv\
		libopencv_xphoto.so:graphics/opencv\
		libPocoFoundation.so:devel/poco\
		libpolled_camera.so:devel/ros-polled_camera\
		libprotobuf.so:devel/protobuf\
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
		libtf.so:devel/ros-tf\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		liburdf.so:devel/ros-urdf\
		liburdfdom_model_state.so:devel/ros-urdfdom\
		liburdfdom_model.so:devel/ros-urdfdom\
		liburdfdom_sensor.so:devel/ros-urdfdom\
		liburdfdom_world.so:devel/ros-urdfdom\
		libuuid.so:misc/e2fsprogs-libuuid\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

RUN_DEPENDS=	${LOCALBASE}/share/angles/package.xml:devel/ros-angles \
		${LOCALBASE}/share/camera_info_manager/package.xml:devel/ros-camera_info_manager \
		${LOCALBASE}/share/cv_bridge/package.xml:devel/ros-cv_bridge \
		${LOCALBASE}/share/diagnostic_updater/package.xml:devel/ros-diagnostic_updater \
		${LOCALBASE}/share/dynamic_reconfigure/package.xml:devel/ros-dynamic_reconfigure \
		${LOCALBASE}/share/gazebo_dev/package.xml:devel/ros-gazebo_dev \
		${LOCALBASE}/share/gazebo_msgs/package.xml:devel/ros-gazebo_msgs \
		${LOCALBASE}/share/gazebo_ros/package.xml:devel/ros-gazebo_ros \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/image_transport/package.xml:devel/ros-image_transport \
		${LOCALBASE}/share/nav_msgs/package.xml:devel/ros-nav_msgs \
		${LOCALBASE}/share/nodelet/package.xml:devel/ros-nodelet \
		${LOCALBASE}/share/polled_camera/package.xml:devel/ros-polled_camera \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/tf/package.xml:devel/ros-tf \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/share/trajectory_msgs/package.xml:devel/ros-trajectory_msgs \
		${LOCALBASE}/share/urdf/package.xml:devel/ros-urdf \
		${LOCALBASE}/share/visualization_msgs/package.xml:devel/ros-visualization_msgs \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \


USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-simulation
GH_PROJECT=	gazebo_ros_pkgs

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS="gencpp;geneus;genlisp;gennodejs;genpy"\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	gazebo_plugins

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_block_laser.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_block_laser.so.2.9.2
	${LN} -fs libgazebo_ros_block_laser.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_block_laser.so.2.9
	${LN} -fs libgazebo_ros_block_laser.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_block_laser.so.2
	${LN} -fs libgazebo_ros_block_laser.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_block_laser.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_bumper.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_bumper.so.2.9.2
	${LN} -fs libgazebo_ros_bumper.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_bumper.so.2.9
	${LN} -fs libgazebo_ros_bumper.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_bumper.so.2
	${LN} -fs libgazebo_ros_bumper.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_bumper.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera_utils.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera_utils.so.2.9.2
	${LN} -fs libgazebo_ros_camera_utils.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera_utils.so.2.9
	${LN} -fs libgazebo_ros_camera_utils.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera_utils.so.2
	${LN} -fs libgazebo_ros_camera_utils.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera_utils.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera.so.2.9.2
	${LN} -fs libgazebo_ros_camera.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera.so.2.9
	${LN} -fs libgazebo_ros_camera.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera.so.2
	${LN} -fs libgazebo_ros_camera.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_camera.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_depth_camera.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_depth_camera.so.2.9.2
	${LN} -fs libgazebo_ros_depth_camera.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_depth_camera.so.2.9
	${LN} -fs libgazebo_ros_depth_camera.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_depth_camera.so.2
	${LN} -fs libgazebo_ros_depth_camera.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_depth_camera.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_diff_drive.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_diff_drive.so.2.9.2
	${LN} -fs libgazebo_ros_diff_drive.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_diff_drive.so.2.9
	${LN} -fs libgazebo_ros_diff_drive.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_diff_drive.so.2
	${LN} -fs libgazebo_ros_diff_drive.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_diff_drive.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_elevator.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_elevator.so.2.9.2
	${LN} -fs libgazebo_ros_elevator.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_elevator.so.2.9
	${LN} -fs libgazebo_ros_elevator.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_elevator.so.2
	${LN} -fs libgazebo_ros_elevator.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_elevator.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_f3d.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_f3d.so.2.9.2
	${LN} -fs libgazebo_ros_f3d.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_f3d.so.2.9
	${LN} -fs libgazebo_ros_f3d.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_f3d.so.2
	${LN} -fs libgazebo_ros_f3d.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_f3d.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_force.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_force.so.2.9.2
	${LN} -fs libgazebo_ros_force.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_force.so.2.9
	${LN} -fs libgazebo_ros_force.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_force.so.2
	${LN} -fs libgazebo_ros_force.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_force.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_ft_sensor.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_ft_sensor.so.2.9.2
	${LN} -fs libgazebo_ros_ft_sensor.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_ft_sensor.so.2.9
	${LN} -fs libgazebo_ros_ft_sensor.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_ft_sensor.so.2
	${LN} -fs libgazebo_ros_ft_sensor.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_ft_sensor.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_gpu_laser.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_gpu_laser.so.2.9.2
	${LN} -fs libgazebo_ros_gpu_laser.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_gpu_laser.so.2.9
	${LN} -fs libgazebo_ros_gpu_laser.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_gpu_laser.so.2
	${LN} -fs libgazebo_ros_gpu_laser.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_gpu_laser.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_hand_of_god.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_hand_of_god.so.2.9.2
	${LN} -fs libgazebo_ros_hand_of_god.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_hand_of_god.so.2.9
	${LN} -fs libgazebo_ros_hand_of_god.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_hand_of_god.so.2
	${LN} -fs libgazebo_ros_hand_of_god.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_hand_of_god.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_harness.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_harness.so.2.9.2
	${LN} -fs libgazebo_ros_harness.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_harness.so.2.9
	${LN} -fs libgazebo_ros_harness.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_harness.so.2
	${LN} -fs libgazebo_ros_harness.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_harness.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu_sensor.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu_sensor.so.2.9.2
	${LN} -fs libgazebo_ros_imu_sensor.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu_sensor.so.2.9
	${LN} -fs libgazebo_ros_imu_sensor.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu_sensor.so.2
	${LN} -fs libgazebo_ros_imu_sensor.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu_sensor.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu.so.2.9.2
	${LN} -fs libgazebo_ros_imu.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu.so.2.9
	${LN} -fs libgazebo_ros_imu.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu.so.2
	${LN} -fs libgazebo_ros_imu.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_imu.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_pose_trajectory.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_pose_trajectory.so.2.9.2
	${LN} -fs libgazebo_ros_joint_pose_trajectory.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_pose_trajectory.so.2.9
	${LN} -fs libgazebo_ros_joint_pose_trajectory.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_pose_trajectory.so.2
	${LN} -fs libgazebo_ros_joint_pose_trajectory.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_pose_trajectory.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_state_publisher.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_state_publisher.so.2.9.2
	${LN} -fs libgazebo_ros_joint_state_publisher.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_state_publisher.so.2.9
	${LN} -fs libgazebo_ros_joint_state_publisher.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_state_publisher.so.2
	${LN} -fs libgazebo_ros_joint_state_publisher.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_joint_state_publisher.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_laser.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_laser.so.2.9.2
	${LN} -fs libgazebo_ros_laser.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_laser.so.2.9
	${LN} -fs libgazebo_ros_laser.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_laser.so.2
	${LN} -fs libgazebo_ros_laser.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_laser.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_multicamera.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_multicamera.so.2.9.2
	${LN} -fs libgazebo_ros_multicamera.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_multicamera.so.2.9
	${LN} -fs libgazebo_ros_multicamera.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_multicamera.so.2
	${LN} -fs libgazebo_ros_multicamera.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_multicamera.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_openni_kinect.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_openni_kinect.so.2.9.2
	${LN} -fs libgazebo_ros_openni_kinect.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_openni_kinect.so.2.9
	${LN} -fs libgazebo_ros_openni_kinect.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_openni_kinect.so.2
	${LN} -fs libgazebo_ros_openni_kinect.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_openni_kinect.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_p3d.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_p3d.so.2.9.2
	${LN} -fs libgazebo_ros_p3d.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_p3d.so.2.9
	${LN} -fs libgazebo_ros_p3d.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_p3d.so.2
	${LN} -fs libgazebo_ros_p3d.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_p3d.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_planar_move.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_planar_move.so.2.9.2
	${LN} -fs libgazebo_ros_planar_move.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_planar_move.so.2.9
	${LN} -fs libgazebo_ros_planar_move.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_planar_move.so.2
	${LN} -fs libgazebo_ros_planar_move.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_planar_move.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_projector.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_projector.so.2.9.2
	${LN} -fs libgazebo_ros_projector.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_projector.so.2.9
	${LN} -fs libgazebo_ros_projector.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_projector.so.2
	${LN} -fs libgazebo_ros_projector.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_projector.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_prosilica.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_prosilica.so.2.9.2
	${LN} -fs libgazebo_ros_prosilica.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_prosilica.so.2.9
	${LN} -fs libgazebo_ros_prosilica.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_prosilica.so.2
	${LN} -fs libgazebo_ros_prosilica.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_prosilica.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_range.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_range.so.2.9.2
	${LN} -fs libgazebo_ros_range.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_range.so.2.9
	${LN} -fs libgazebo_ros_range.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_range.so.2
	${LN} -fs libgazebo_ros_range.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_range.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_skid_steer_drive.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_skid_steer_drive.so.2.9.2
	${LN} -fs libgazebo_ros_skid_steer_drive.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_skid_steer_drive.so.2.9
	${LN} -fs libgazebo_ros_skid_steer_drive.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_skid_steer_drive.so.2
	${LN} -fs libgazebo_ros_skid_steer_drive.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_skid_steer_drive.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_template.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_template.so.2.9.2
	${LN} -fs libgazebo_ros_template.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_template.so.2.9
	${LN} -fs libgazebo_ros_template.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_template.so.2
	${LN} -fs libgazebo_ros_template.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_template.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_tricycle_drive.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_tricycle_drive.so.2.9.2
	${LN} -fs libgazebo_ros_tricycle_drive.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_tricycle_drive.so.2.9
	${LN} -fs libgazebo_ros_tricycle_drive.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_tricycle_drive.so.2
	${LN} -fs libgazebo_ros_tricycle_drive.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_tricycle_drive.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_camera.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_camera.so.2.9.2
	${LN} -fs libgazebo_ros_triggered_camera.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_camera.so.2.9
	${LN} -fs libgazebo_ros_triggered_camera.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_camera.so.2
	${LN} -fs libgazebo_ros_triggered_camera.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_camera.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_multicamera.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_multicamera.so.2.9.2
	${LN} -fs libgazebo_ros_triggered_multicamera.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_multicamera.so.2.9
	${LN} -fs libgazebo_ros_triggered_multicamera.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_multicamera.so.2
	${LN} -fs libgazebo_ros_triggered_multicamera.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_triggered_multicamera.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_utils.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_utils.so.2.9.2
	${LN} -fs libgazebo_ros_utils.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_utils.so.2.9
	${LN} -fs libgazebo_ros_utils.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_utils.so.2
	${LN} -fs libgazebo_ros_utils.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_utils.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_vacuum_gripper.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_vacuum_gripper.so.2.9.2
	${LN} -fs libgazebo_ros_vacuum_gripper.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_vacuum_gripper.so.2.9
	${LN} -fs libgazebo_ros_vacuum_gripper.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_vacuum_gripper.so.2
	${LN} -fs libgazebo_ros_vacuum_gripper.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_vacuum_gripper.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_video.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_video.so.2.9.2
	${LN} -fs libgazebo_ros_video.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_video.so.2.9
	${LN} -fs libgazebo_ros_video.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_video.so.2
	${LN} -fs libgazebo_ros_video.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_video.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_wheel_slip.so\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_wheel_slip.so.2.9.2
	${LN} -fs libgazebo_ros_wheel_slip.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_wheel_slip.so.2.9
	${LN} -fs libgazebo_ros_wheel_slip.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_wheel_slip.so.2
	${LN} -fs libgazebo_ros_wheel_slip.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libgazebo_ros_wheel_slip.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libMultiCameraPlugin.so\
	    ${STAGEDIR}${PREFIX}/lib/libMultiCameraPlugin.so.2.9.2
	${LN} -fs libMultiCameraPlugin.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libMultiCameraPlugin.so.2.9
	${LN} -fs libMultiCameraPlugin.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libMultiCameraPlugin.so.2
	${LN} -fs libMultiCameraPlugin.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libMultiCameraPlugin.so
	${MV} ${STAGEDIR}${PREFIX}/lib/libvision_reconfigure.so\
	    ${STAGEDIR}${PREFIX}/lib/libvision_reconfigure.so.2.9.2
	${LN} -fs libvision_reconfigure.so.2.9.2\
	    ${STAGEDIR}${PREFIX}/lib/libvision_reconfigure.so.2.9
	${LN} -fs libvision_reconfigure.so.2.9\
	    ${STAGEDIR}${PREFIX}/lib/libvision_reconfigure.so.2
	${LN} -fs libvision_reconfigure.so.2\
	    ${STAGEDIR}${PREFIX}/lib/libvision_reconfigure.so

.include <bsd.port.mk>
