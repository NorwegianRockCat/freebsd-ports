PORTNAME=	ros-urdf_parser_plugin
DISTVERSION=	1.13.2
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS urdf_parser_plugin package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${LOCALBASE}/include/urdf_model:devel/ros-urdfdom_headers

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	urdf

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	urdf_parser_plugin

PLIST_FILES=	include/urdf_parser_plugin/parser.h\
		libdata/pkgconfig/urdf_parser_plugin.pc\
		share/urdf_parser_plugin/cmake/urdf_parser_pluginConfig-version.cmake\
		share/urdf_parser_plugin/cmake/urdf_parser_pluginConfig.cmake\
		share/urdf_parser_plugin/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
