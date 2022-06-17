PORTNAME=	ros-roslisp
DISTVERSION=	1.9.24
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roslisp package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/ros_environment/package.xml:devel/ros-ros_environment \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslang/package.xml:devel/ros-roslang \
		${LOCALBASE}/share/rospack/package.xml:devel/ros-rospack \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \


RUN_DEPENDS=	${LOCALBASE}/share/ros_environment/package.xml:devel/ros-ros_environment \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslang/package.xml:devel/ros-roslang \
		${LOCALBASE}/share/rospack/package.xml:devel/ros-rospack \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		sbcl:lang/sbcl

USES=		cmake python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	roslisp

PYTHON_NO_DEPENDS=	yes

SHEBANG_FILES=	rosbuild/scripts/genmsg_lisp.py\
		scripts/compile_load_manifest\
		scripts/make_exe_script\
		scripts/make_node_exec\
		scripts/make_roslisp_image\
		scripts/run-roslisp-script.sh\
		scripts/test-genmsg-lisp\
		scripts/test-gensrv-lisp

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

FETCH_CMD=	${SCRIPTDIR}/fetch.sh
FETCH_ENV=	DISTDIR="${DISTDIR}" WRKDIR="${WRKDIR}"

NO_ARCH=	yes

_BUILD_RDEPS=	catkin
_RUN_RDEPS=	
_SHAREDIR=	${LOCALBASE}/share

post-extract:
	${CP} ${FILESDIR}/xhtml-page.xml ${WRKSRC}/s-xml/test/

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
