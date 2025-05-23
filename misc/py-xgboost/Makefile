PORTNAME=	xgboost
DISTVERSIONPREFIX=	v
DISTVERSION=	2.1.4
CATEGORIES=	misc # machine-learning
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Scalable, Portable and Distributed Gradient Boosting (GBDT, GBRT, GBM)
WWW=		https://xgboost.ai/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/../LICENSE

BROKEN_armv7=	compilation fails due to type conversion issues, like on i386, but the upstream says that they don't support 32-bit architectures
BROKEN_i386=	compilation fails, see https://github.com/dmlc/xgboost/issues/10002

BUILD_DEPENDS=	cmake:devel/cmake-core \
		${PYTHON_PKGNAMEPREFIX}hatchling>=1.12.1:devel/py-hatchling@${PY_FLAVOR}
LIB_DEPENDS=	libdmlc.so:devel/dmlc-core
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}pandas>=1.2:math/py-pandas@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyarrow>0:databases/py-pyarrow@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scikit-learn>0:science/py-scikit-learn@${PY_FLAVOR}

USES=		compiler:c11 python localbase:ldflags
USE_PYTHON=	pep517 autoplist pytest
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	dmlc

WRKSRC_SUBDIR=	python-package

LDFLAGS+=	-lexecinfo \
		-ldmlc

PYDISTUTILS_INSTALLARGS=	--use-system-libxgboost # this is ignored so that setup.py has to be patched, see https://github.com/dmlc/xgboost/issues/6879

TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}
TEST_WRKSRC=	${WRKSRC}/../tests/python

post-install:
	@${PYTHON_CMD} -m compileall -d ${PYTHON_SITELIBDIR} ${STAGEDIR}${PYTHON_SITELIBDIR}
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/xgboost/lib/libxgboost.so

.include <bsd.port.mk>
