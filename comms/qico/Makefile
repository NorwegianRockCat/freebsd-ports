PORTNAME=	qico
PORTVERSION=	0.59.1
PORTREVISION=	1
CATEGORIES=	comms

MAINTAINER=	admin@5034.ru
COMMENT=	FidoNet Technology Network (FTN) compatible mailer for Unix systems

LICENSE=	BSD4CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		autoreconf
USE_GITHUB=	yes
GH_ACCOUNT=	kosfango
GH_TAGNAME=	15673bf

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-config=${CONFDIR}/qico.conf \
			--with-default-speed=115200
CONFIGURE_TARGET=	--build=${MACHINE_ARCH}-portbld-freebsd${OSREL}

CONFLICTS_INSTALL=	qcc # bin/qcc

PLIST_SUB=	QBASEDIR=${QBASEDIR} QLOGDIR=${QLOGDIR}

CONFDIR?=	${PREFIX}/etc/fido/qico
QBASEDIR?=	/var/spool/fido/qico
QLOGDIR?=	/var/log/fido/qico

.if defined(WITH_OPENLOCK)
CONFIGURE_ARGS+=	--with-lock-style=open
.endif

DOCS=		Changes FAQ README
EXAMPLES=	koi8r_866.cp onchat qhistory qico.xpm qlinks sfreq \
		stat.run synctime test.pl tossing

MANS=		qcc.8 qctl.8 qico.8

OPTIONS_DEFINE=	QCC PERL HYDRA
OPTIONS_DEFAULT=	PERL QCC
OPTIONS_SUB=	yes

HYDRA_DESC=	Enable Hydra 4K/8K/16K protocol extensions
PERL_DESC=	Enable Perl-hooks support
QCC_DESC=	Build Qico control center (qcc)

HYDRA_CONFIGURE_ON=--enable-hydra8k
PERL_CONFIGURE_ON=--enable-perl
PERL_USES=		perl5
QCC_CONFIGURE_OFF=--disable-qcc

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-Wno-error=incompatible-function-pointer-types
.endif

do-install:
.for i in ${QLOGDIR} ${QBASEDIR}/fbox ${QBASEDIR}/inbound/unknown \
		${QBASEDIR}/outbound ${QBASEDIR}/qstoutb
	${MKDIR} ${STAGEDIR}${i}
.endfor
	${MKDIR} ${STAGEDIR}${CONFDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/src/qico ${STAGEDIR}${PREFIX}/sbin/
	${INSTALL_PROGRAM} ${WRKSRC}/src/qctl ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_DATA} ${WRKSRC}/qico.conf.sample ${STAGEDIR}${CONFDIR}/qico.conf.sample
	${INSTALL_DATA} ${WRKSRC}/qico.substs.sample ${STAGEDIR}${CONFDIR}/qico.substs.sample
	${INSTALL_DATA} ${WRKSRC}/qico.passwd.sample ${STAGEDIR}${CONFDIR}/qico.passwd.sample
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}/${i}.ru
.endfor
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
.for i in ${EXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/stuff/${i} ${STAGEDIR}${EXAMPLESDIR}/${i}
.endfor
.for i in ${MANS}
	${INSTALL_MAN} ${WRKSRC}/man/${i} ${STAGEDIR}${PREFIX}/share/man/man8/${i}
.endfor

do-install-QCC-on:
	${INSTALL_PROGRAM} ${WRKSRC}/src/qcc ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
