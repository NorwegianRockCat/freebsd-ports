PORTNAME=		gazebo
DISTVERSIONPREFIX=	${PORTNAME}${DISTVERSION:R:R}_
DISTVERSION=		11.5.1
CATEGORIES=		cad

MAINTAINER=	henrik@gulbra.net
COMMENT=	Dynamic multi-robot simulator

LICENSE=	APACHE20

BUILD_DEPENDS=	dartsim>=6.6:misc/dartsim\
		gdal>0:graphics/gdal\
		ignition-cmake>=2<3:devel/ignition-cmake\
		ignition-common>=3<4:devel/ignition-common\
		ignition-msgs>=5<6:devel/ignition-msgs\
		libtar>0:devel/libtar\
		libxslt>0:textproc/libxslt\
		rubygem-ronn>0:textproc/rubygem-ronn\
		sdformat>0:misc/sdformat\
		simbody>0:science/simbody
LIB_DEPENDS=	libassimp.so:multimedia/assimp\
		libavcodec.so:multimedia/ffmpeg\
		libavdevice.so:multimedia/ffmpeg\
		libavformat.so:multimedia/ffmpeg\
		libavutil.so:multimedia/ffmpeg\
		libboost_atomic.so:devel/boost-libs\
		libboost_chrono.so:devel/boost-libs\
		libboost_date_time.so:devel/boost-libs\
		libboost_filesystem.so:devel/boost-libs\
		libboost_iostreams.so:devel/boost-libs\
		libboost_program_options.so:devel/boost-libs\
		libboost_regex.so:devel/boost-libs\
		libboost_system.so:devel/boost-libs\
		libboost_thread.so:devel/boost-libs\
		libBulletCollision.so:devel/bullet\
		libBulletDynamics.so:devel/bullet\
		libBulletSoftBody.so:devel/bullet\
		libccd.so:math/libccd\
		libcdt.so:graphics/graphviz\
		libcgraph.so:graphics/graphviz\
		libconsole_bridge.so:devel/ros-console_bridge\
		libcurl.so:ftp/curl\
		libdart-collision-bullet.so:misc/dartsim\
		libdart-collision-ode.so:misc/dartsim\
		libdart-external-odelcpsolver.so:misc/dartsim\
		libdart-utils-urdf.so:misc/dartsim\
		libdart-utils.so:misc/dartsim\
		libdart.so:misc/dartsim\
		libfcl.so:math/fcl\
		libfreeimage.so:graphics/freeimage\
		libgdal.so:graphics/gdal\
		libgts.so:graphics/gts\
		libgvc.so:graphics/graphviz\
		libignition-common3-graphics.so:devel/ignition-common\
		libignition-common3.so:devel/ignition-common\
		libignition-fuel_tools4.so:misc/ignition-fuel-tools\
		libignition-math6.so:math/ignition-math\
		libignition-msgs5.so:devel/ignition-msgs\
		libignition-transport8.so:devel/ignition-transport\
		libLinearMath.so:devel/bullet\
		liboctomap.so:math/octomap\
		liboctomath.so:math/octomap\
		libode.so:devel/ode\
		libOgreMain.so:graphics/ogre3d\
		libOgreOverlay.so:graphics/ogre3d\
		libOgrePaging.so:graphics/ogre3d\
		libOgreRTShaderSystem.so:graphics/ogre3d\
		libOgreTerrain.so:graphics/ogre3d\
		libopenblas.so:math/openblas\
		libprotobuf.so:devel/protobuf\
		libqwt6.so:x11-toolkits/qwt6\
		libsdformat9.so:misc/sdformat\
		libSimTKcommon.so:science/simbody\
		libSimTKmath.so:science/simbody\
		libSimTKsimbody.so:science/simbody\
		libswscale.so:multimedia/ffmpeg\
		libtar.so:devel/libtar\
		libtbb.so:devel/onetbb\
		libtinyxml.so:textproc/tinyxml\
		libtinyxml2.so:textproc/tinyxml2\
		liburdfdom_model_state.so:devel/ros-urdfdom\
		liburdfdom_model.so:devel/ros-urdfdom\
		liburdfdom_sensor.so:devel/ros-urdfdom\
		liburdfdom_world.so:devel/ros-urdfdom\
		libuuid.so:misc/e2fsprogs-libuuid

USES=		cmake gettext-runtime gl gnome openal\
		qmake:no_configure,no_env qt:5 xorg

USE_GITHUB=	yes
GH_ACCOUNT=	osrf
GH_PROJECT=	gazebo

USE_GL=		gl glu
USE_GNOME=	glib20
USE_LDCONFIG=	yes
USE_QT=		buildtools core gui testlib widgets
USE_XORG=	x11

PLIST_SUB+=	DISTVERSION=${DISTVERSION}

.include <bsd.port.mk>
