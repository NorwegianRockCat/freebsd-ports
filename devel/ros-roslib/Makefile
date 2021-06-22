PORTNAME=	ros-roslib
DISTVERSION=	1.15.7
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roslib package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${_PYLIBDIR}/setuptools:devel/py-setuptools@${PY_FLAVOR}\
		${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		librospack.so:devel/ros-rospack\
		libtinyxml2.so:textproc/tinyxml2
RUN_DEPENDS=	${_RUN_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg@${PY_FLAVOR}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	core/roslib

_BUILD_RDEPS=	${_COMMON_RDEPS} rosmake
_COMMON_RDEPS=	catkin rospack
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_RUN_RDEPS=	${_COMMON_RDEPS} ros_environment
_SHAREDIR=	${LOCALBASE}/share

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
