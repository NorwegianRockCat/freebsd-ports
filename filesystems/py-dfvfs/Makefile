PORTNAME=	dfvfs
PORTVERSION=	20240505
CATEGORIES=	filesystems security devel python
MASTER_SITES=	https://github.com/log2timeline/dfvfs/releases/download/${PORTVERSION}/ \
		LOCAL/antoine
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Digital Forensics Virtual File System
WWW=		https://github.com/log2timeline/dfvfs

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PY_SETUPTOOLS} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	libbde>=a:filesystems/libbde \
		libcaes>=a:security/libcaes \
		libewf>=0:devel/libewf \
		libfcrypto>=a:security/libfcrypto \
		libfsapfs>=e:filesystems/libfsapfs \
		libfsext>=e:filesystems/libfsext \
		libfsfat>=e:filesystems/libfsfat \
		libfshfs>=e:filesystems/libfshfs \
		libfsntfs>=e:filesystems/libfsntfs \
		libfsxfs>=e:filesystems/libfsxfs \
		libfvde>=0:sysutils/libfvde \
		libfwnt>=e:devel/libfwnt \
		libluksde>=e:devel/libluksde \
		libmodi>=e:filesystems/libmodi \
		libphdi>=e:devel/libphdi \
		libqcow>=a:devel/libqcow \
		libsigscan>=e:devel/libsigscan \
		libsmdev>=a:devel/libsmdev \
		libsmraw>=a:devel/libsmraw \
		libvhdi>=e:devel/libvhdi \
		libvmdk>=e:devel/libvmdk \
		libvsapm>=e:devel/libvsapm \
		libvsgpt>=e:devel/libvsgpt \
		libvshadow>=0:devel/libvshadow \
		libvslvm>=e:devel/libvslvm \
		${PYTHON_PKGNAMEPREFIX}dfdatetime>=0:security/py-dfdatetime@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dtfabric>=0:devel/py-dtfabric@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytsk>=0:sysutils/py-pytsk@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>=0:databases/py-sqlite3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xattr>=0:devel/py-xattr@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyyaml>=3.10:devel/py-pyyaml@${PY_FLAVOR}

USES=		python
USE_LOCALE=	en_US.UTF-8
USE_PYTHON=	autoplist cryptography pep517
DO_MAKE_TEST=	${SETENV} ${TEST_ENV} ${PYTHON_CMD}
TEST_TARGET=	run_tests.py

NO_ARCH=	yes

# Upstream archive contains files with UTF-8 names
EXTRACT_CMD=	${SETENV} LC_ALL=en_US.UTF-8 /usr/bin/bsdtar

.include <bsd.port.mk>
