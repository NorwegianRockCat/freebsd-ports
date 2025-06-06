PORTNAME=	horizon
PORTVERSION=	25.4.0
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	OpenStack Dashboard (Horizon)
WWW=		https://docs.openstack.org/horizon/latest/ \
		https://github.com/openstack/horizon

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbr>=2.0.0:devel/py-pbr@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Babel>=2.6.0:devel/py-babel@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django_compressor>=4.4:www/py-django_compressor@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django-debreach>=1.4.2:www/py-django-debreach@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django42>=4.2<4.3:www/py-django42@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}enmerkar>=0.7.1:www/py-enmerkar@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}futurist>=1.2.0:devel/py-futurist@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}iso8601>=0.1.11:devel/py-iso8601@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}keystoneauth1>=4.3.1:devel/py-keystoneauth1@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}libsass>=0.23.0:www/py-libsass@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}netaddr>=0.7.18:net/py-netaddr@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.concurrency>=4.5.0:devel/py-oslo.concurrency@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.config>=8.8.0:devel/py-oslo.config@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.i18n>=5.1.0:devel/py-oslo.i18n@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.policy>=3.11.0:devel/py-oslo.policy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.serialization>=4.3.0:devel/py-oslo.serialization@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.upgradecheck>=1.5.0:devel/py-oslo.upgradecheck@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.utils>=7.0.0:devel/py-oslo.utils@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}osprofiler>=3.4.2:devel/py-osprofiler@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pbr>=5.5.0:devel/py-pbr@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-cinderclient>=8.0.0:net/py-python-cinderclient@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-glanceclient>=2.8.0:net/py-python-glanceclient@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-keystoneclient>=3.22.0:net/py-python-keystoneclient@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-neutronclient>=8.1.0:net/py-python-neutronclient@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-novaclient>=9.1.0:net/py-python-novaclient@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-swiftclient>=3.2.0:databases/py-python-swiftclient@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyyaml>=6.0:devel/py-pyyaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.25.1:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}semantic-version>=2.3.1:devel/py-semantic-version@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tzdata>=2022.4:devel/py-tzdata@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic>=1.0.3:devel/py-xstatic@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-angular>=1.8.2.2:devel/py-xstatic-angular@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-angular-bootstrap>=2.2.0.0:devel/py-xstatic-angular-bootstrap@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-angular-fileupload>=12.0.4.0:devel/py-xstatic-angular-fileupload@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-angular-gettext>=2.3.8.0:devel/py-xstatic-angular-gettext@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-angular-lrdragndrop>=1.0.2.2:devel/py-xstatic-angular-lrdragndrop@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-angular-schema-form>=0.8.13.0:devel/py-xstatic-angular-schema-form@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-bootstrap-datepicker>=1.3.1.0:devel/py-xstatic-bootstrap-datepicker@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-bootstrap-scss>=3.3.7.1:devel/py-xstatic-bootstrap-scss@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-bootswatch>=3.3.7.0:devel/py-xstatic-bootswatch@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-d3>=3.5.17.0:devel/py-xstatic-d3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-font-awesome>=4.7.0.0:devel/py-xstatic-font-awesome@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-hogan>=2.0.0.2:devel/py-xstatic-hogan@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-jasmine>=2.4.1.1:devel/py-xstatic-jasmine@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-jquery>=3.5.1.1:devel/py-xstatic-jquery@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-jquery-migrate>=3:devel/py-xstatic-jquery-migrate@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-jquery-ui>=1.13.0.1:devel/py-xstatic-jquery-ui@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-jquery.quicksearch>=2.0.3.2:devel/py-xstatic-jquery.quicksearch@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-jquery.tablesorter>=2.14.5.1:devel/py-xstatic-jquery.tablesorter@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-jsencrypt>=2.3.1.1:devel/py-xstatic-jsencrypt@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-mdi>=1.6.50.2:devel/py-xstatic-mdi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-objectpath>=1.2.1.0:devel/py-xstatic-objectpath@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-rickshaw>=1.5.0.0:devel/py-xstatic-rickshaw@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-roboto-fontface>=0.5.0.0:devel/py-xstatic-roboto-fontface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-smart-table>=1.4.13.2:devel/py-xstatic-smart-table@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-spin>=1.2.5.2:devel/py-xstatic-spin@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-term.js>=0.0.7.0:devel/py-xstatic-term.js@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xstatic-tv4>=1.2.7.0:devel/py-xstatic-tv4@${PY_FLAVOR}

USES=		cpe python:3.9+
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

USERS=		horizon
GROUPS=		horizon

SUB_FILES=	pkg-message
SUB_LIST=	PYTHON_SITELIBDIR=${PYTHON_SITELIBDIR}

CONFLICTS_INSTALL=	py[0-9]*-horizon

CPE_VENDOR=	openstack

PORTSCOUT=	skipv:2012.2.3,2012.2.4,2013.1,2013.1.1,2013.1.2,2013.1.3,2013.1.4,2013.1.5,2013.2,2013.2.1,2013.2.2,2013.2.3,2013.2.4,2014.1,2014.1.1,2014.1.2,2014.1.3,2014.1.4,2014.1.5,2014.2,2014.2.1,2014.2.2,2014.2.3,2014.2.4,2015.1.0,2015.1.1,2015.1.2,2015.1.3,2015.1.4

OPTIONS_RADIO=	CACHE
OPTIONS_RADIO_CACHE=	MEMCACHED REDIS
OPTIONS_DEFAULT=MEMCACHED
MEMCACHED_DESC=	Use memcached as caching backend
REDIS_DESC=	Use Redis as caching backend

MEMCACHED_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-memcached>=0:databases/py-python-memcached@${PY_FLAVOR}
REDIS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}redis>=0:databases/py-redis@${PY_FLAVOR}

.include <bsd.port.mk>
