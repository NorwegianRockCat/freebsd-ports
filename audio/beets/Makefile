PORTNAME=	beets
DISTVERSION=	2.0.0
PORTREVISION=	2
CATEGORIES=	audio python
MASTER_SITES=	PYPI

MAINTAINER=	leonhard@wachutka.eu
COMMENT=	Media library management system for obsessive-compulsive music geeks
WWW=		https://beets.io/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}confuse>=1.0.0:devel/py-confuse@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jellyfish>=0:devel/py-jellyfish@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mediafile>=0.2.0:devel/py-mediafile@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}munkres>=1.0.0:math/py-munkres@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}musicbrainzngs>=0.4:audio/py-musicbrainzngs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mutagen>=1.45:audio/py-mutagen@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyacoustid>=0:audio/py-pyacoustid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyyaml>=0:devel/py-pyyaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.9:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>=0:databases/py-sqlite3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}typing-extensions>=0:devel/py-typing-extensions@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}unidecode>=0:converters/py-unidecode@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils optsuffix

PLIST_FILES=	share/man/man1/beet.1.gz share/man/man5/beetsconfig.5.gz

NO_ARCH=	yes

OPTIONS_DEFINE=	ACOUSTICBRAINZ BADFILES BEATPORT CHROMA DISCOGS EMBYUPDATE \
		FETCHART FFMPEG IMAGEMAGICK IPFS KODIUPDATE LASTFM \
		LASTIMPORT LYRICS LYRICS_GOOGLE MPDSTATS METASYNC_DBUS \
		PLEXUPDATE REPLAYGAIN SONOS_UPDATE SPOTIFY THUMBNAILS WEB \
		WEB_CORS
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

ACOUSTICBRAINZ_DESC=	AcousticBrainz Plugin
BADFILES_DESC=	Bad Files Plugin
BEATPORT_DESC=	Beatport Catalog Autotagging Support
DISCOGS_DESC=	Discogs Search Plugin
EMBYUPDATE_DESC=	Emby Update Plugin
FETCHART_DESC=	Cover Art Fetch Plugin
IMAGEMAGICK_DESC=	Cover Art Resizing and Comparison
IPFS_DESC=	IPFS Plugin
KODIUPDATE_DESC=	Kodi Update Plugin
LASTFM_DESC=	LastGenre Plugin
LASTIMPORT_DESC=	Last.fm Import Plugin
LYRICS_DESC=	Lyrics Plugin
LYRICS_GOOGLE_DESC=	Use Google Custom Search for Lyrics
METASYNC_DBUS_DESC=	Amarok support for the MetaSync plugin
MPDSTATS_DESC=	MPD Statistics Plugin
PLEXUPDATE_DESC=	PlexUpdate Plugin
REPLAYGAIN_DESC=	Normalize Audio Loudness
SONOS_UPDATE_DESC=	Sonos Update Plugin
SPOTIFY_DESC=	Spotify Plugin
THUMBNAILS_DESC=	Thumbnails for freedesktop.org-compliant file managers
WEB_DESC=		Web plugin for querying, browsing and playing music
WEB_CORS_DESC=		Cross-origin resource sharing for the Web plugin

ACOUSTICBRAINZ_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
BADFILES_RUN_DEPENDS=	flac:audio/flac \
			mp3val:audio/mp3val
BEATPORT_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}requests-oauthlib>=0.6.1:www/py-requests-oauthlib@${PY_FLAVOR}
DISCOGS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}discogs-client>=2.2.1:audio/py-discogs-client@${PY_FLAVOR}
EMBYUPDATE_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
FETCHART_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
FFMPEG_RUN_DEPENDS=	ffmpeg>=2:multimedia/ffmpeg
IMAGEMAGICK_USES=	magick:run
IPFS_RUN_DEPENDS=	kubo-go:sysutils/kubo-go
KODIUPDATE_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
LASTFM_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pylast>=0:audio/py-pylast@${PY_FLAVOR}
LASTIMPORT_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
LYRICS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
LYRICS_GOOGLE_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beautifulsoup>=4:www/py-beautifulsoup@${PY_FLAVOR}
METASYNC_DBUS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dbus>=0:devel/py-dbus@${PY_FLAVOR}
MPDSTATS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-mpd2>=0.4.2:audio/py-python-mpd2@${PY_FLAVOR}
PLEXUPDATE_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
REPLAYGAIN_RUN_DEPENDS=	mp3gain>=0:audio/mp3gain
# Broken, unfechable	aacgain>=0:audio/aacgain
SONOS_UPDATE_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}soco>=0:multimedia/py-soco@${PY_FLAVOR}
SPOTIFY_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
THUMBNAILS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}xdg>=0:devel/py-xdg@${PY_FLAVOR}
WEB_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flask>=0:www/py-flask@${PY_FLAVOR}
WEB_CORS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask-Cors>=0:www/py-flask-cors@${PY_FLAVOR}

post-install:
	${INSTALL} ${WRKSRC}/man/beet.1 ${STAGEDIR}${PREFIX}/share/man/man1/
	${INSTALL} ${WRKSRC}/man/beetsconfig.5 ${STAGEDIR}${PREFIX}/share/man/man5/

.include <bsd.port.mk>
