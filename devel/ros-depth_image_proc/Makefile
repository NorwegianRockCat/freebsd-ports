PORTNAME=	ros-depth_image_proc
DISTVERSION=	1.15.3
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS depth_image_proc package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${LOCALBASE}/share/cv_bridge/package.xml:devel/ros-cv_bridge \
		${LOCALBASE}/share/eigen_conversions/package.xml:devel/ros-eigen_conversions \
		${LOCALBASE}/share/image_geometry/package.xml:devel/ros-image_geometry \
		${LOCALBASE}/share/image_transport/package.xml:devel/ros-image_transport \
		${LOCALBASE}/share/eigen_conversions/package.xml:devel/ros-eigen_conversions \
		${LOCALBASE}/share/nodelet/package.xml:devel/ros-nodelet \
		${LOCALBASE}/share/tf2/package.xml:devel/ros-tf2 \
		${LOCALBASE}/share/tf2_ros/package.xml:devel/ros-tf2_ros \
		${LOCALBASE}/share/cmake_modules/package.xml:devel/ros-cmake_modules \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/sensor_msgs/package.xml:devel/ros-sensor_msgs \
		${LOCALBASE}/share/stereo_msgs/package.xml:devel/ros-stereo_msgs \
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs

LIB_DEPENDS=	libactionlib.so:devel/ros-actionlib\
		libbondcpp.so:devel/ros-bondcpp\
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
		libcv_bridge.so:devel/ros-cv_bridge\
		libeigen_conversions.so:devel/ros-eigen_conversions\
		libimage_geometry.so:devel/ros-image_geometry\
		libimage_transport.so:devel/ros-image_transport\
		liblog4cxx.so:devel/log4cxx\
		libmessage_filters.so:devel/ros-message_filters\
		libnodeletlib.so:devel/ros-nodelet\
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
		liborocos-kdl.so:devel/orocos_kdl\
		libPocoFoundation.so:devel/poco\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtf2_ros.so:devel/ros-tf2_ros\
		libtf2.so:devel/ros-tf2\
		libtinyxml2.so:textproc/tinyxml2\
		libuuid.so:misc/e2fsprogs-libuuid\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

USES=		cmake python eigen:3

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_pipeline

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	depth_image_proc

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libdepth_image_proc.so\
	    ${STAGEDIR}${PREFIX}/lib/libdepth_image_proc.so.1.15.3
	${LN} -fs libdepth_image_proc.so.1.15.3\
	    ${STAGEDIR}${PREFIX}/lib/libdepth_image_proc.so.1.15
	${LN} -fs libdepth_image_proc.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libdepth_image_proc.so.1
	${LN} -fs libdepth_image_proc.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libdepth_image_proc.so

.include <bsd.port.mk>
