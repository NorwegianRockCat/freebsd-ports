PORTNAME=	ros-roslisp
DISTVERSION=	1.9.24
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS roslisp package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
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
_RUN_RDEPS=	ros_environment rosgraph_msgs roslang rospack std_srvs
_SHAREDIR=	${LOCALBASE}/share

post-extract:
	${CP} ${FILESDIR}/xhtml-page.xml ${WRKSRC}/s-xml/test/

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
