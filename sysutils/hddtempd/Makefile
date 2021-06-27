PORTNAME=	hddtempd
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	henrik@gulbra.net
COMMENT=	Server reporting HDD temperatures

LICENSE=	BSD2CLAUSE

USE_RC_SUBR=	${PORTNAME}

PLIST_FILES=	etc/rc.d/${PORTNAME}\
		sbin/${PORTNAME}

do-build:
	${MKDIR} ${WRKSRC}
	${CC} ${CFLAGS} -Wall -o ${WRKSRC}/${PORTNAME}\
	    ${FILESDIR}/hddtempd.c -lcam -lgeom

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin/

.include <bsd.port.mk>
