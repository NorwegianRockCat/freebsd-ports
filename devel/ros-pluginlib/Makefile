PORTNAME=	ros-pluginlib
DISTVERSION=	1.13.0
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS pluginlib package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/cmake_modules/package.xml:devel/ros-cmake_modules \
		${LOCALBASE}/share/class_loader/package.xml:devel/ros-class_loader \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \
		${PYTHON_PKGNAMEPREFIX}ros-rospkg>=0:devel/ros-rospkg

RUN_DEPENDS=	${LOCALBASE}/share/cmake_modules/package.xml:devel/ros-cmake_modules \
		${LOCALBASE}/share/class_loader/package.xml:devel/ros-class_loader \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roslib/package.xml:devel/ros-roslib \

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	pluginlib

PYTHON_NO_DEPENDS=	yes

SHEBANG_FILES=	scripts/pluginlib_headers_migration.py

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	pluginlib

_PYLIBDIR=	${PYTHON_SITELIBDIR}
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
