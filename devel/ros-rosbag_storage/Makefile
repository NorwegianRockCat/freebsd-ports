PORTNAME=	ros-rosbag_storage
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosbag_storage package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/roscpp_traits/package.xml:devel/ros-roscpp_traits \
		${LOCALBASE}/share/roslz4/package.xml:devel/ros-roslz4 \
		${LOCALBASE}/include/gpgme.h:security/gpgme\
		bzip2:archivers/bzip2

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
		libgpgme.so:security/gpgme\
		liblog4cxx.so:devel/log4cxx\
		liblz4.so:archivers/liblz4\
		libPocoFoundation.so:devel/poco\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroslib.so:devel/ros-roslib\
		libroslz4.so:devel/ros-roslz4\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml2.so:textproc/tinyxml2

RUN_DEPENDS=	${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/pluginlib/package.xml:devel/ros-pluginlib \
		${LOCALBASE}/share/roscpp_traits/package.xml:devel/ros-roscpp_traits \
		${LOCALBASE}/share/roslz4/package.xml:devel/ros-roslz4 \

USES=		cmake python ssl

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tools/rosbag_storage

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librosbag_default_encryption_plugins.so\
	    ${STAGEDIR}${PREFIX}/lib/librosbag_default_encryption_plugins.so.1.15.11
	${LN} -fs librosbag_default_encryption_plugins.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/librosbag_default_encryption_plugins.so.1.15
	${LN} -fs librosbag_default_encryption_plugins.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/librosbag_default_encryption_plugins.so.1
	${LN} -fs librosbag_default_encryption_plugins.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosbag_default_encryption_plugins.so
	${MV} ${STAGEDIR}${PREFIX}/lib/librosbag_storage.so\
	    ${STAGEDIR}${PREFIX}/lib/librosbag_storage.so.1.15.11
	${LN} -fs librosbag_storage.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/librosbag_storage.so.1.15
	${LN} -fs librosbag_storage.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/librosbag_storage.so.1
	${LN} -fs librosbag_storage.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosbag_storage.so

.include <bsd.port.mk>
