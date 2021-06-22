PORTNAME=	ros-theora_image_transport
DISTVERSION=	1.14.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS theora_image_transport package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${_PYLIBDIR}/yaml:devel/py-yaml@${PY_FLAVOR}\
		${_COMMON_XDEPS}
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
		libcv_bridge.so:devel/ros-cv_bridge\
		libdynamic_reconfigure_config_init_mutex.so:devel/ros-dynamic_reconfigure\
		libimage_transport.so:devel/ros-image_transport\
		liblog4cxx.so:devel/log4cxx\
		liblz4.so:archivers/liblz4\
		libmessage_filters.so:devel/ros-message_filters\
		libogg.so:audio/libogg\
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
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
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
		libtheora.so:multimedia/libtheora\
		libtheoradec.so:multimedia/libtheora\
		libtheoraenc.so:multimedia/libtheora\
		libtinyxml2.so:textproc/tinyxml2\
		libtopic_tools.so:devel/ros-topic_tools\
		libxmlrpcpp.so:devel/ros-xmlrpcpp
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake pkgconfig python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	image_transport_plugins

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS=${_GENERATORS}\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	theora_image_transport

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin message_generation

_COMMON_RDEPS=	cv_bridge dynamic_reconfigure image_transport pluginlib rosbag\
		std_msgs

_COMMON_XDEPS=	${LOCALBASE}/lib/libogg.a:audio/libogg\
		${LOCALBASE}/lib/libtheora.a:multimedia/libtheora

_GENERATORS=	"gencpp;geneus;genlisp;gennodejs;genpy"
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_RUN_RDEPS=	${_COMMON_RDEPS} message_runtime
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libtheora_image_transport.so\
	    ${STAGEDIR}${PREFIX}/lib/libtheora_image_transport.so.1.14.0
	${LN} -fs libtheora_image_transport.so.1.14.0\
	    ${STAGEDIR}${PREFIX}/lib/libtheora_image_transport.so.1.14
	${LN} -fs libtheora_image_transport.so.1.14\
	    ${STAGEDIR}${PREFIX}/lib/libtheora_image_transport.so.1
	${LN} -fs libtheora_image_transport.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libtheora_image_transport.so

.include <bsd.port.mk>
