PORTNAME=	lmdb
PORTVERSION=	0.97
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	k@stereochro.me
COMMENT=	Python bindings for LMDB
WWW=		https://github.com/jnwatson/py-lmdb

LICENSE=	OPENLDAP
LICENSE_NAME=	OpenLDAP Public LIcense
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>0.8:devel/py-cffi@${PY_FLAVOR}
LIB_DEPENDS=	liblmdb.so:databases/lmdb
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${PY_FLAVOR}

USES=		localbase python
USE_PYTHON=	autoplist distutils

MAKE_ENV=	LMDB_FORCE_SYSTEM=1 \
		LMDB_FORCE_CFFI=1

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/lmdb/lmdb_cffi*.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m pytest -rs -v

.include <bsd.port.mk>
