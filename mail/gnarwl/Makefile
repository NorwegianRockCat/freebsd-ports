# Created by: Xavier Beaudouin <kiwi@oav.net>

PORTNAME=	gnarwl
PORTVERSION=	3.6
PORTREVISION=	7
CATEGORIES=	mail
MASTER_SITES=	http://www.onyxbits.de/sites/default/files/download/15/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Email autoresponder that gets data from LDAP

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: mail_status
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: mail_status

LIB_DEPENDS=	libgdbm.so:databases/gdbm
BUILD_DEPENDS=	${LOCALBASE}/bin/gsed:textproc/gsed

USES=		iconv gmake groff tar:tgz
USE_OPENLDAP=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-docdir=${DOCSDIR} --localstatedir="${PREFIX}/var"
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib ${ICONV_LIB}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
