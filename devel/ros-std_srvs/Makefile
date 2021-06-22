PORTNAME=	ros-std_srvs
DISTVERSION=	1.11.3
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS std_srvs package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${_BUILD_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}\
		${_PYLIBDIR}/yaml:devel/py-yaml@${PY_FLAVOR}
RUN_DEPENDS=	${_RUN_RDEPS:C|.*|${_SHAREDIR}/&/package.xml:devel/ros-&|}

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm_msgs

CMAKE_ARGS=	-DCATKIN_MESSAGE_GENERATORS=${_GENERATORS}\
		-DCMAKE_PREFIX_PATH=${LOCALBASE}

WRKSRC_SUBDIR=	std_srvs

_BUILD_RDEPS=	catkin message_generation
_GENERATORS=	"gencpp;geneus;genlisp;gennodejs;genpy"
_PYLIBDIR=	${PYTHON_SITELIBDIR}
_RUN_RDEPS=	message_runtime
_SHAREDIR=	${LOCALBASE}/share

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
