PORTNAME=	ros-cv_bridge
DISTVERSION=	1.15.0
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS cv_bridge package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${_PYLIBDIR}/numpy:math/py-numpy@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_python${_PY}.so:devel/boost-python-libs@${PY_FLAVOR}\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liblog4cxx.so:devel/log4cxx\
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
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		librostime.so:devel/ros-rostime
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros-perception
GH_PROJECT=	vision_opencv

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	cv_bridge

_BOOSTLIB=	${LOCALBASE}/lib/lib${PY_BOOST_LIB}.so
_BUILD_RDEPS=	${_COMMON_RDEPS} catkin rostest
_COMMON_RDEPS=	rosconsole sensor_msgs

_COMMON_XDEPS=	${_BOOSTLIB}:devel/boost-python-libs@${PY_FLAVOR}\
		${LOCALBASE}/include/opencv4:graphics/opencv

_PY=		${PYTHON_SUFFIX}
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libcv_bridge.so\
	    ${STAGEDIR}${PREFIX}/lib/libcv_bridge.so.1.15.0
	${LN} -fs libcv_bridge.so.1.15.0\
	    ${STAGEDIR}${PREFIX}/lib/libcv_bridge.so.1.15
	${LN} -fs libcv_bridge.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libcv_bridge.so.1
	${LN} -fs libcv_bridge.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libcv_bridge.so

.include <bsd.port.mk>
