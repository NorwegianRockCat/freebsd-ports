PORTNAME=	ros-rosbag
DISTVERSION=	1.15.11
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosbag package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${PY_FLAVOR}\
		${LOCALBASE}/share/rosbag_storage/package.xml:devel/ros-rosbag_storage \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/topic_tools/package.xml:devel/ros-topic_tools \
		${LOCALBASE}/share/xmlrpcpp/package.xml:devel/ros-xmlrpcpp \
		${LOCALBASE}/share/genmsg/package.xml:devel/ros-genmsg \
		${LOCALBASE}/share/genpy/package.xml:devel/ros-genpy \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \

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
		liblog4cxx.so:devel/log4cxx\
		liblz4.so:archivers/liblz4\
		libPocoFoundation.so:devel/poco\
		librosbag_storage.so:devel/ros-rosbag_storage\
		librosconsole_backend_interface.so:devel/ros-rosconsole\
		librosconsole_log4cxx.so:devel/ros-rosconsole\
		librosconsole.so:devel/ros-rosconsole\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		libroscpp.so:devel/ros-roscpp\
		libroslib.so:devel/ros-roslib\
		libroslz4.so:devel/ros-roslz4\
		librospack.so:devel/ros-rospack\
		librostime.so:devel/ros-rostime\
		libtinyxml2.so:textproc/tinyxml2\
		libtopic_tools.so:devel/ros-topic_tools\
		libxmlrpcpp.so:devel/ros-xmlrpcpp

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycryptodome>=0:security/py-pycryptodome@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}gnupg>=0:security/py-gnupg@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg@${PY_FLAVOR}\

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tools/rosbag

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librosbag.so\
	    ${STAGEDIR}${PREFIX}/lib/librosbag.so.1.15.11
	${LN} -fs librosbag.so.1.15.11\
	    ${STAGEDIR}${PREFIX}/lib/librosbag.so.1.15
	${LN} -fs librosbag.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/librosbag.so.1
	${LN} -fs librosbag.so.1\
	    ${STAGEDIR}${PREFIX}/lib/librosbag.so

.include <bsd.port.mk>
