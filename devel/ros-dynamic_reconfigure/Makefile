PORTNAME=	ros-dynamic_reconfigure
DISTVERSION=	1.7.1
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS dynamic_reconfigure package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg\
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}\
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs \
		${LOCALBASE}/share/cpp_common/package.xml:devel/ros-cpp_common \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/roscpp_serialization/package.xml:devel/ros-roscpp_serialization \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rosservice/package.xml:devel/ros-rosservice

RUN_DEPENDS=	${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/message_runtime/package.xml:devel/ros-message_runtime \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rosservice/package.xml:devel/ros-rosservice

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	dynamic_reconfigure

USE_LDCONFIG=	yes

SHEBANG_FILES=	cmake/gendeps\
		cmake/setup_custom_pythonpath.sh.in

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS="gencpp;geneus;genlisp;gennodejs;genpy"\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libdynamic_reconfigure_config_init_mutex.so\
	    ${STAGEDIR}${PREFIX}/lib/libdynamic_reconfigure_config_init_mutex.so.1.7.1
	${LN} -fs libdynamic_reconfigure_config_init_mutex.so.1.7.1\
	    ${STAGEDIR}${PREFIX}/lib/libdynamic_reconfigure_config_init_mutex.so.1.7
	${LN} -fs libdynamic_reconfigure_config_init_mutex.so.1.7\
	    ${STAGEDIR}${PREFIX}/lib/libdynamic_reconfigure_config_init_mutex.so.1
	${LN} -fs libdynamic_reconfigure_config_init_mutex.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libdynamic_reconfigure_config_init_mutex.so

.include <bsd.port.mk>
