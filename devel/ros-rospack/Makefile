PORTNAME=	ros-rospack
DISTVERSION=	2.6.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rospack package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/coverage:devel/py-coverage@${PY_FLAVOR}\
		${_PYLIBDIR}/nose:devel/py-nose@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libpython${_PYVERSION}.so:lang/python${PYTHON_SUFFIX}\
		libtinyxml2.so:textproc/tinyxml2
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rosdep2:devel/ros-rosdep@${PY_FLAVOR}\
		catkin_find_pkg:devel/ros-catkin_pkg\
		${_COMMON_XDEPS}

USES=		cmake pkgconfig python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	rospack

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	catkin cmake_modules

_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/tinyxml2.h:textproc/tinyxml2

_PYLIBDIR=	${PYTHON_SITELIBDIR}
_PYVERSION=	${PYTHON_VER}${PYTHON_ABIVER}
_RUN_RDEPS=	ros_environment
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/librospack.so\
	    ${STAGEDIR}${PREFIX}/lib/librospack.so.2.6.2
	${LN} -fs librospack.so.2.6.2\
	    ${STAGEDIR}${PREFIX}/lib/librospack.so.2.6
	${LN} -fs librospack.so.2.6\
	    ${STAGEDIR}${PREFIX}/lib/librospack.so.2
	${LN} -fs librospack.so.2\
	    ${STAGEDIR}${PREFIX}/lib/librospack.so

.include <bsd.port.mk>
