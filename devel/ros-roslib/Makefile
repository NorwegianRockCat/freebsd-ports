PORTNAME=	ros-roslib
DISTVERSION=	1.15.7
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roslib package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${LOCALBASE}/share/rospack/package.xml:devel/ros-rospack \
		${LOCALBASE}/share/rosmake/package.xml:devel/ros-rosmake \
		${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${PY_FLAVOR}\
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		librospack.so:devel/ros-rospack\
		libtinyxml2.so:textproc/tinyxml2

RUN_DEPENDS=	${LOCALBASE}/share/ros_environment/package.xml:devel/ros-ros_environment \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	core/roslib

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libroslib.so\
	    ${STAGEDIR}${PREFIX}/lib/libroslib.so.1.15.7
	${LN} -fs libroslib.so.1.15.7\
	    ${STAGEDIR}${PREFIX}/lib/libroslib.so.1.15
	${LN} -fs libroslib.so.1.15\
	    ${STAGEDIR}${PREFIX}/lib/libroslib.so.1
	${LN} -fs libroslib.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libroslib.so

.include <bsd.port.mk>
