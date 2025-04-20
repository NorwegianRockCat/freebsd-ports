PORTNAME=	lyrionmusicserver
DISTVERSION=	9.0.2
CATEGORIES=	audio


PORTSCOUT=   skipv:10.0.3,10.0.4,release-10.0.0.0

MAINTAINER=	trueos@norwegianrockcat.com
COMMENT=	Audio streaming server that powers Squeezebox players previously from Logitech and many other devices
WWW=		https://lyrion.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/License.txt

BUILD_DEPENDS=	nasm:devel/nasm \
		bash:shells/bash \
		rsync:net/rsync
RUN_DEPENDS=	p5-IO-Socket-SSL>=0:security/p5-IO-Socket-SSL \
		p5-DBD-SQLite>0:databases/p5-DBD-SQLite \
		p5-AnyEvent>0:devel/p5-AnyEvent \
	        p5-Class-Data-Inheritable>0:devel/p5-Class-Data-Inheritable \
	        p5-Class-Inspector>0:devel/p5-Class-Inspector \
	        p5-DBIx-Class>0:databases/p5-DBIx-Class \
	        p5-Data-URIEncode>0:devel/p5-Data-URIEncode \
	        p5-File-BOM>0:devel/p5-File-BOM \
	        p5-File-Next>0:sysutils/p5-File-Next \
	        p5-File-Slurp>0:devel/p5-File-Slurp \
	        p5-File-Which>0:sysutils/p5-File-Which \
		p5-IO-String>0:devel/p5-IO-String \
		p5-Exporter-Lite>0:devel/p5-Exporter-Lite \
		p5-JSON-XS-VersionOneAndTwo>0:converters/p5-JSON-XS-VersionOneAndTwo \
	        p5-Log-Log4perl>0:devel/p5-Log-Log4perl \
		p5-Path-Class>0:devel/p5-Path-Class \
		p5-Proc-Background>0:devel/p5-Proc-Background \
	        p5-SQL-Abstract>0:databases/p5-SQL-Abstract \
		p5-Text-Unidecode>0:converters/p5-Text-Unidecode \
	        p5-Tie-Cache>0:devel/p5-Tie-Cache \
		p5-Tie-RegexpHash>0:devel/p5-Tie-RegexpHash \
	        p5-Text-Unidecode>0:converters/p5-Text-Unidecode \
		p5-YAML>0:textproc/p5-YAML \
		p5-YAML-LibYAML>0:textproc/p5-YAML-LibYAML \
		p5-Image-Scale>0:graphics/p5-Image-Scale \
	        p5-JSON-XS>0:converters/p5-JSON-XS \
	        p5-Sub-Name>0:devel/p5-Sub-Name \
	        p5-Audio-Scan>0:audio/p5-Audio-Scan \
	        p5-Class-C3-XS>0:devel/p5-Class-C3-XS \
	        p5-Class-XSAccessor>0:devel/p5-Class-XSAccessor \
	        p5-Digest-SHA1>0:security/p5-Digest-SHA1 \
	        p5-EV>0:devel/p5-EV \
	        p5-Encode-Detect>0:converters/p5-Encode-Detect \
	        p5-HTML-Parser>0:www/p5-HTML-Parser \
	        p5-IO-AIO>0:devel/p5-IO-AIO \
	        p5-IO-Interface>0:net/p5-IO-Interface \
	        p5-Template-Toolkit>0:www/p5-Template-Toolkit \
	        p5-XML-Parser>0:textproc/p5-XML-Parser \
	        p5-XML-Simple>0:textproc/p5-XML-Simple

ONLY_FOR_ARCHS=	i386 amd64 aarch64
ONLY_FOR_ARCHS_REASON=	Only tested on these archs, custom Perl triplet for plist.

USES=		gettext-runtime gmake perl5 shebangfix
USE_GITHUB=	yes
GH_TUPLE=	LMS-Community:slimserver:1470c94 \
		LMS-Community:slimserver-vendor:bf9bf02:vendor
USE_RC_SUBR=	lyrionmusicserver
SHEBANG_FILES=	Bin/darwin/check-update.pl \
		CPAN/Log/Log4perl/Layout/PatternLayout/Multiline.pm \
		Slim/Plugin/UPnP/t/MediaRenderer.t \
		Slim/Plugin/UPnP/t/MediaServer.t \
		cleanup.pl \
		gdresized.pl \
		lib/MPEG/Audio/Frame.pm \
		scanner.pl \
		slimserver.pl \
		${WRKSRC_vendor}/CPAN/hints/darwin.pl

SUB_FILES=	Custom.pm \
		lyrionmusicserver.conf \
		custom-convert.conf

SUB_LIST=	PERL=${PERL} \
		PORTNAME=${PORTNAME} \
		SITE_PERL=${PREFIX}/${SITE_PERL_REL} \
		SLIMDIR=${SLIMDIR} \
		SLIMDBDIR=${SLIMDBDIR} \
		SLIMUSER=${SLIMUSER} \
		SLIMGROUP=${SLIMGROUP} \
		CONFFILES="${CONFFILES}"

USERS=		${SLIMUSER}
GROUPS=		${SLIMGROUP}

PLIST_SUB=	SLIMDIR=${SLIMDIR} \
		SLIMDBDIR=${SLIMDBDIR} \
		OPSYS=${OPSYS:tl} \
		ARCH=${ARCH} \
		ARCHNAME=${ARCHNAME}

# Defaults support playback of relativly unrestricted formats on SB2 or
# SB3 devices and wired SB1 devices.
OPTIONS_DEFINE=	APE FAAD FLAC LAME SOX TEST DOCS
OPTIONS_DEFAULT=APE FAAD FLAC SOX TEST
SOX_DESC=	Support OGG Vorbis input via SoX (SliMP3 and SB1)
APE_RUN_DEPENDS=	mac:audio/mac
FAAD_RUN_DEPENDS=	faad:audio/faad
FLAC_RUN_DEPENDS=	flac:audio/flac
LAME_RUN_DEPENDS=	lame:audio/lame
SOX_RUN_DEPENDS=	sox:audio/sox
TEST_VARS_OFF=		CONTRIB_FLAGS=-t

DOCFILES=	Changelog*.html License*.txt
CONFFILES=	convert.conf types.conf

SLIMDIR?=	share/lyrionmusicserver
SLIMDBDIR?=	/var/db/lyrionmusicserver
SLIMUSER?=	slimserv
SLIMGROUP?=	${SLIMUSER}

.include <bsd.port.pre.mk>

.if ${ARCH} == "i386"
ARCHNAME=	i386-freebsd-thread-multi-64int
.endif

.if ${ARCH} == "amd64"
ARCHNAME=	amd64-freebsd-thread-multi
.endif

.if ${ARCH} == "aarch64"
ARCHNAME=	arm64-freebsd-thread-multi
.endif


do-build:
	cd ${WRKSRC_vendor}/CPAN && ./buildme.sh ${CONTRIB_FLAGS}

do-install:
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/${SLIMDIR})
	(cd ${STAGEDIR}${PREFIX}/${SLIMDIR}/CPAN && \
		${RM} -r -- AE.pm Algorithm AnyEvent* Archive Bundle Cache Carp Class common Data Date DBD DBI* Devel Digest Encode enum* Error.pm EV.pm Exporter File HTML HTTP Image IO JSON Linux Locale Log LWP* Mac Module MRO Net PAR* Path Proc Readonly.pm Scope SOAP SQL Sub Template* Test Text Time Tie/RegexpHash.pm Try URI* UUID version* WWW XML XS YAML)

	(cd ${WRKSRC_vendor}/CPAN/build && \
		${COPYTREE_SHARE} arch ${STAGEDIR}${PREFIX}/${SLIMDIR}/CPAN)
	(cd ${WRKSRC_vendor}/CPAN/build/${PERL_VER}/lib/perl5 && \
		${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/${SLIMDIR}/CPAN/arch/${PERL_VER}/)
	(cd ${STAGEDIR}${PREFIX}/${SLIMDIR} && \
		${FIND} . -name \*.orig -delete -o -name \*.bak -delete -o -name \*.packlist -delete && \
		${FIND} ./CPAN/arch/ ! -path './CPAN/arch/${PERL_VER}*' -delete && \
		${RM} -r -- ./CPAN/arch/${PERL_VER}/DBD ./CPAN/arch/${PERL_VER}/Audio/Scan.pm ./CPAN/arch/${PERL_VER}/JSON ./CPAN/arch/${PERL_VER}/Class ./CPAN/arch/${PERL_VER}/DBI* ./CPAN/arch/${PERL_VER}/Image && \
		${RM} -r -- Bin/* .editorconfig .github && \
		${RM} -- ${CONFFILES} ${DOCFILES})
	(cd ${STAGEDIR}${PREFIX}/${SLIMDIR} && \
		${RM} -r -- Firmware/* && \
		${RM} -r -- Graphics/CODE2000*.*)
	(cd ${STAGEDIR}${PREFIX}/${SLIMDIR}/CPAN/arch/${PERL_VER} && \
		${RM} -r -- arm-linux-gnueabihf-thread-multi-64int && \
		${RM} -r -- aarch64-linux-thread-multi && \
		${RM} -r -- i386-linux-thread-multi-64int && \
		${RM} -r -- x86_64-linux-thread-multi)
.for _CONF in ${CONFFILES}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${_CONF} ${STAGEDIR}${PREFIX}/${SLIMDIR}/${_CONF}.sample)
.endfor
	${INSTALL_DATA} ${WRKDIR}/Custom.pm \
	    ${STAGEDIR}${PREFIX}/${SLIMDIR}/Slim/Utils/OS/Custom.pm
	${INSTALL_DATA} ${WRKDIR}/custom-convert.conf \
	    ${STAGEDIR}${PREFIX}/${SLIMDIR}/custom-convert.conf.sample
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/newsyslog.conf.d
	${INSTALL_DATA} ${WRKDIR}/lyrionmusicserver.conf \
	    ${STAGEDIR}${PREFIX}/etc/newsyslog.conf.d/
	@${MKDIR} ${STAGEDIR}${SLIMDBDIR}
	@${LN} -s ${SLIMDBDIR}/cache ${STAGEDIR}${PREFIX}/${SLIMDIR}/Cache
do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${DOCFILES} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.post.mk>
