PORTNAME=	ros-rospack
DISTVERSION=	2.6.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rospack package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=  ${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/tinyxml2.h:textproc/tinyxml2 \
		${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}coverage>=0:devel/py-coverage@${PY_FLAVOR}\
		${LOCALBASE}/share/cmake_modules/package.xml:devel/ros-cmake_modules \
		${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${PY_FLAVOR}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest

LIB_DEPENDS=	libboost_filesystem.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libtinyxml2.so:textproc/tinyxml2

RUN_DEPENDS=	${LOCALBASE}/share/ros_environment/package.xml:devel/ros-ros_environment\
		${PYTHON_PKGNAMEPREFIX}ros-rosdep>=0:devel/ros-rosdep@${PY_FLAVOR}

USES=		cmake pkgconfig python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	rospack

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

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
