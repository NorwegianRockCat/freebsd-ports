PORTNAME=	ros-rosbag_migration_rule
DISTVERSION=	1.0.1
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS rosbag_migration_rule package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	rosbag_migration_rule

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

PLIST_FILES=	libdata/pkgconfig/rosbag_migration_rule.pc\
		share/rosbag_migration_rule/cmake/rosbag_migration_ruleConfig-version.cmake\
		share/rosbag_migration_rule/cmake/rosbag_migration_ruleConfig.cmake\
		share/rosbag_migration_rule/package.xml

_BUILD_RDEPS=	catkin
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
