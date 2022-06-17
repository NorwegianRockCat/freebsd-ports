PORTNAME=	ros-tf2
DISTVERSION=	0.7.5
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS tf2 package

LICENSE=	BSD3CLAUSE



BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/actionlib_msgs/package.xml:devel/ros-actionlib_msgs \
		${LOCALBASE}/share/std_msgs/package.xml:devel/ros-std_msgs \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \
		${LOCALBASE}/share/message_generation/package.xml:devel/ros-message_generation \
		${LOCALBASE}/share/tf2_msgs/package.xml:devel/ros-tf2_msgs \
		${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs

RUN_DEPENDS=	${LOCALBASE}/share/geometry_msgs/package.xml:devel/ros-geometry_msgs \
		${LOCALBASE}/share/rostime/package.xml:devel/ros-rostime \
		${LOCALBASE}/share/tf2_msgs/package.xml:devel/ros-tf2_msgs

LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcpp_common.so:devel/ros-cpp_common\
		libroscpp_serialization.so:devel/ros-roscpp_serialization\
		librostime.so:devel/ros-rostime

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	geometry2

USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	tf2

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libtf2.so\
	    ${STAGEDIR}${PREFIX}/lib/libtf2.so.0.7.5
	${LN} -fs libtf2.so.0.7.5\
	    ${STAGEDIR}${PREFIX}/lib/libtf2.so.0.7
	${LN} -fs libtf2.so.0.7\
	    ${STAGEDIR}${PREFIX}/lib/libtf2.so.0
	${LN} -fs libtf2.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libtf2.so

.include <bsd.port.mk>
