PORTNAME=	nsnotifyd
PORTVERSION=	2.3
CATEGORIES=	dns
MASTER_SITES=	http://dotat.at/prog/nsnotifyd/

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Handle DNS NOTIFY messages by running a command
WWW=		https://dotat.at/prog/nsnotifyd/

LICENSE=	MIT

USES=		shebangfix
SHEBANG_FILES=	nsnotify-liststealth

GNU_CONFIGURE=	yes
USE_RC_SUBR=	nsnotifyd

EXEFILES=	nsnotify nsnotifyd
BINFILES=	nsnotify-liststealth nsnotify2git nsnotify2stealth \
		nsnotify2update
MAN1FILES=	metazone nsnotify nsnotifyd
MAN5FILES=	metazone

do-install:
.for bin in ${EXEFILES}
		${INSTALL_PROGRAM} ${WRKSRC}/${bin} ${STAGEDIR}${PREFIX}/bin
.endfor

.for bin in ${BINFILES}
		${INSTALL_SCRIPT} ${WRKSRC}/${bin} ${STAGEDIR}${PREFIX}/bin
.endfor

.for man in ${MAN1FILES}
		${INSTALL_MAN} ${WRKSRC}/${man}.1 ${STAGEDIR}${PREFIX}/share/man/man1
.endfor

.for man in ${MAN5FILES}
		${INSTALL_MAN} ${WRKSRC}/${man}.5 ${STAGEDIR}${PREFIX}/share/man/man5
.endfor

.include <bsd.port.mk>
