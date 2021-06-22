PORTNAME=	ros-pluginlib
DISTVERSION=	1.13.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS pluginlib package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:O:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/rospkg:devel/ros-rospkg\
		${LOCALBASE}/include/gtest/gtest.h:devel/googletest\
		${_COMMON_XDEPS}
RUN_DEPENDS=	${_COMMON_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_COMMON_XDEPS}

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	pluginlib

PYTHON_NO_DEPENDS=	yes

SHEBANG_FILES=	scripts/pluginlib_headers_migration.py

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	pluginlib

_BUILD_RDEPS=	${_COMMON_RDEPS} catkin cmake_modules
_COMMON_RDEPS=	class_loader rosconsole roslib

_COMMON_XDEPS=	${LOCALBASE}/include/boost/version.hpp:devel/boost-libs\
		${LOCALBASE}/include/tinyxml2.h:textproc/tinyxml2

_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
