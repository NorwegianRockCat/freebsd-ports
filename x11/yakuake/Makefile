PORTNAME=	yakuake
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	x11 kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Drop-down terminal emulator for KDE

LICENSE=	GPLv2

RUN_DEPENDS=	konsole:x11/konsole

USES=		cmake compiler:c++11-lang gettext kde:5 qt:5 tar:xz xorg
USE_KDE=	attica auth archive codecs completion config configwidgets \
		coreaddons crash dbusaddons globalaccel i18n iconthemes \
		jobwidgets kio newstuff notifications notifyconfig parts \
		service solid sonnet textwidgets wayland widgetsaddons windowsystem \
		xmlgui \
		ecm_build
USE_QT=		concurrent core dbus gui network widgets x11extras xml \
		buildtools_build qmake_build
USE_XORG=	x11

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
