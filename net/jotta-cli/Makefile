PORTNAME=	jotta-cli
DISTVERSION=	0.17.132497
CATEGORIES=	net
MASTER_SITES=	https://repo.jotta.us/archives/freebsd/${ARCH:S|amd64|amd64|:S|i386|386|}/
DISTNAME=	${PORTNAME}-${PORTVERSION}_freebsd_${ARCH:S|amd64|amd64|:S|i386|386|}

MAINTAINER=	trueos@norwegianrockcat.com
COMMENT=	Jotta Cloud Daemon and Command-Line Interface
WWW=		https://www.jottacloud.com

LICENSE=	UNKNOWN
LICENSE_NAME=	"Jottacloud Terms and Service"
LICENSE_TEXT=	"JottaCloud has its own terms and conditions available at https://www.jottacloud.com/en/terms.html"
LICENSE_PERMS=	dist-mirror no-dist-sell pkg-mirror no-pkg-sell auto-accept

ONLY_FOR_ARCHS=	amd64 i386

RESTRICTED=	yes

USE_RC_SUBR=	jottad

NO_BUILD=	yes
SUB_FILES=	jottad pkg-message

USERS=		jottad
GROUPS=		jottad

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/jottad
	${INSTALL_SCRIPT} ${WRKDIR}/jottad ${STAGEDIR}${PREFIX}/etc/rc.d/jottad
	${INSTALL_PROGRAM} ${WRKDIR}/usr/bin/jotta-cli ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKDIR}/usr/bin/jottad ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_DATA} ${WRKDIR}/etc/jottad/config.ini ${STAGEDIR}${PREFIX}/etc/jottad/config.ini.sample

post-install:
	${MKDIR} ${STAGEDIR}/var/lib/jottad

.include <bsd.port.mk>
