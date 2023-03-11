PORTNAME=	solaar
DISTVERSION=	1.1.8
CATEGORIES=	sysutils

MAINTAINER=	trueos@norwegianrockcat.com
COMMENT=	Device manager for the Logitech Unifying Receiver
WWW=		https://pwr-solaar.github.io/Solaar/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

# libhidapi.so is only loaded at runtime via ctypes (dlopen)
RUN_DEPENDS=	${LOCALBASE}/lib/libhidapi.so:comms/hidapi \
		${PYTHON_PKGNAMEPREFIX}psutil>0:sysutils/py-psutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}evdev>0:devel/py-evdev@${PY_FLAVOR}

USES=		python:3.7+
USE_GITHUB=	yes
GH_ACCOUNT=	pwr-Solaar
GH_PROJECT=	Solaar
USE_PYTHON=	autoplist concurrent distutils autoplist optsuffix

NO_ARCH=	yes

OPTIONS_DEFINE=	GUI

GUI_USES=	gnome
GUI_USE=	GNOME=pygobject3:run

GROUPS=	solaar

SUB_FILES=	pkg-message

post-build:
	${AWK} -f ${FILESDIR}/devd-solaar.awk \
		${WRKSRC}/rules.d/42-logitech-unify-permissions.rules \
		> ${WRKDIR}/solaar.conf

post-install:
	${INSTALL_DATA} ${WRKDIR}/solaar.conf \
		${STAGEDIR}${PREFIX}/etc/devd

.include <bsd.port.mk>
