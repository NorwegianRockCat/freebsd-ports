PORTNAME=	ros-eigen_conversions
DISTVERSION=	1.13.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS eigen_conversions package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/include/kdl/kdl.hpp:devel/orocos_kdl \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \


LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		liborocos-kdl.so:devel/orocos_kdl\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		librostime.so:devel/ros-rostime

RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \

USES=		cmake eigen:3 python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	eigen_conversions

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libeigen_conversions.so\
	    ${STAGEDIR}${PREFIX}/lib/libeigen_conversions.so.1.13.2
	${LN} -fs libeigen_conversions.so.1.13.2\
	    ${STAGEDIR}${PREFIX}/lib/libeigen_conversions.so.1.13
	${LN} -fs libeigen_conversions.so.1.13\
	    ${STAGEDIR}${PREFIX}/lib/libeigen_conversions.so.1
	${LN} -fs libeigen_conversions.so.1\
	    ${STAGEDIR}${PREFIX}/lib/libeigen_conversions.so

.include <bsd.port.mk>
