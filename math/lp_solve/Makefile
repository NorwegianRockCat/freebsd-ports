PORTNAME=	lp_solve
DISTVERSION=	5.5.2.5
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	SF/lpsolve/lpsolve/${DISTVERSION}
DISTNAME=	${PORTNAME}_${DISTVERSION}_source

MAINTAINER=	mayo@oyam.ca
COMMENT=	Linear Programming Solver
WWW=		http://tech.groups.yahoo.com/group/lp_solve/

LICENSE=	LGPL21

WRKSRC=		${WRKDIR}/${PORTNAME}_${PORTVERSION:R:R}

USE_LDCONFIG=	yes

BUILDENV=	${SETENV} TMPDIR="${WRKDIR}"

.include <bsd.port.pre.mk>

.if ${ARCH} == armv6 || ${ARCH} == armv7 || ${ARCH} == i386 || ${ARCH} == mips || \
	${ARCH} == powerpc || ${ARCH} == powerpcspe
LPSOLVE_ARCH=	ux32
.else
LPSOLVE_ARCH=	ux64
.endif

pre-build:
	@${FIND} ${WRKSRC} -name "ccc" | ${XARGS} ${REINPLACE_CMD} -e \
		"s|^c=.*$$|c='${CC}'|g ; \
		 s|^opts=.*$$|opts='${CFLAGS}'|g ; \
		 s|-fpic|-fPIC|g ; \
		 s|-ldl||g"

do-build:
	cd ${WRKSRC}/lp_solve  ; ${BUILDENV} ${SH} -x ccc
	cd ${WRKSRC}/demo      ; ${BUILDENV} ${SH} -x ccc
	cd ${WRKSRC}/lpsolve55 ; ${BUILDENV} ${SH} -x ccc

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lp_solve/bin/${LPSOLVE_ARCH}/lp_solve ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/lpsolve55/bin/${LPSOLVE_ARCH}/liblpsolve55.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_LIB} ${WRKSRC}/lpsolve55/bin/${LPSOLVE_ARCH}/liblpsolve55.so ${STAGEDIR}${PREFIX}/lib
	${LN} -sf liblpsolve55.so ${STAGEDIR}${PREFIX}/lib/liblpsolve55.so.1
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/lpsolve
.for i in declare.h fortify.h ini.h lp_*.h lpkit.h lpsolve.h ufortify.h yacc_read.h
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${PREFIX}/include/lpsolve
.endfor

.include <bsd.port.post.mk>
