PORTNAME=	fmirror
PORTVERSION=	0.8.4
PORTREVISION=	5
CATEGORIES=	ftp
MASTER_SITES=	https://BSDforge.com/projects/source/ftp/fmirror/

MAINTAINER=	kiwi@FreeBSD.org
COMMENT=	Program for mirroring files and directories from FTP server

LICENSE=	GPLv2

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

do-install:
	cd ${WRKSRC} && \
		${INSTALL_PROGRAM} fmirror ${STAGEDIR}${PREFIX}/bin && \
		${INSTALL_MAN} ${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${MKDIR} ${STAGEDIR}${DOCSDIR} && \
	cd ${WRKSRC} && \
		${INSTALL_DATA} ChangeLog README ${STAGEDIR}${DOCSDIR} && \
	cd ${WRKSRC}/configs && \
		${INSTALL_DATA} generic.conf redhat.conf sample.conf \
			${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
