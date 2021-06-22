PORTNAME=	ros-class_loader
DISTVERSION=	0.5.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS class_loader package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
LIB_DEPENDS=	libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libconsole_bridge.so:devel/ros-console_bridge\
		libPocoFoundation.so:devel/poco
RUN_DEPENDS=	${_COMMON_XDEPS}

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	class_loader

USE_LDCONFIG=	yes

PYTHON_NO_DEPENDS=	yes

SHEBANG_FILES=	scripts/class_loader_headers_update.py

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

_BUILD_RDEPS=	catkin cmake_modules

_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/Poco/Poco.h:devel/poco

_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete
	${MV} ${STAGEDIR}${PREFIX}/lib/libclass_loader.so\
	    ${STAGEDIR}${PREFIX}/lib/libclass_loader.so.0.5.0
	${LN} -fs libclass_loader.so.0.5.0\
	    ${STAGEDIR}${PREFIX}/lib/libclass_loader.so.0.5
	${LN} -fs libclass_loader.so.0.5\
	    ${STAGEDIR}${PREFIX}/lib/libclass_loader.so.0
	${LN} -fs libclass_loader.so.0\
	    ${STAGEDIR}${PREFIX}/lib/libclass_loader.so

.include <bsd.port.mk>
