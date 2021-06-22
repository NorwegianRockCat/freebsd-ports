PORTNAME=	ros-dynamic_reconfigure
DISTVERSION=	1.7.1
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS dynamic_reconfigure package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${_PYLIBDIR}/yaml:devel/py-yaml@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	dynamic_reconfigure

USE_LDCONFIG=	yes

SHEBANG_FILES=	cmake/gendeps\
		cmake/setup_custom_pythonpath.sh.in

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS=${_GENERATORS}\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cpp_common message_generation\
		roscpp_serialization rostest

_COMMON_RDEPS=	roscpp roslib std_msgs
_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs
_GENERATORS=	"gencpp;geneus;genlisp;gennodejs;genpy"
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	${_COMMON_RDEPS} message_runtime rospy rosservice
_SHAREDIR=	${LOCALBASE}/share

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
