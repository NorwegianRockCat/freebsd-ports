PORTNAME=	pipewire
DISTVERSION=	0.3.31
PORTREVISION=	4
CATEGORIES=	multimedia

PATCH_SITES=	https://gitlab.freedesktop.org/${PORTNAME}/${PORTNAME}/-/commit/
PATCHFILES+=	91988acb6b6a.patch:-p1 # https://gitlab.freedesktop.org/pipewire/pipewire/-/merge_requests/815
PATCHFILES+=	d51634a2f1a7.patch:-p1 # https://gitlab.freedesktop.org/pipewire/pipewire/-/merge_requests/816
PATCHFILES+=	d6bb69f2bd88.patch:-p1 # https://gitlab.freedesktop.org/pipewire/pipewire/-/merge_requests/816
PATCHFILES+=	765bd417decc.patch:-p1 # https://gitlab.freedesktop.org/pipewire/pipewire/-/merge_requests/816
PATCHFILES+=	488150fac6c9.patch:-p1 # https://gitlab.freedesktop.org/pipewire/pipewire/-/merge_requests/816
PATCHFILES+=	2488e87fde51.patch:-p1 # https://gitlab.freedesktop.org/pipewire/pipewire/-/merge_requests/852
PATCHFILES+=	e41187d64345.patch:-p1 # https://gitlab.freedesktop.org/pipewire/pipewire/-/merge_requests/906
PATCHFILES+=	40cbcf288775.patch:-p1 # https://gitlab.freedesktop.org/pipewire/pipewire/-/merge_requests/906

MAINTAINER=	arrowd@FreeBSD.org
COMMENT=	Server and user space API to deal with multimedia pipelines

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	v4l_compat>0:multimedia/v4l_compat
LIB_DEPENDS=	libasound.so:audio/alsa-lib \
		libdbus-1.so:devel/dbus \
		libinotify.so:devel/libinotify \
		libepoll-shim.so:devel/libepoll-shim \
		libudev.so:devel/libudev-devd \
		libwebrtc_audio_processing.so:audio/webrtc-audio-processing0

USES=		compiler:c11 gettext-tools gnome localbase:ldflags meson \
		pkgconfig python:3.6+,build
USE_GNOME=	glib20
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	PipeWire

OPTIONS_DEFINE=		GSTREAMER MANPAGES MEDIASESSION PULSEAUDIO VULKAN
OPTIONS_DEFAULT=	GSTREAMER MANPAGES MEDIASESSION
OPTIONS_SUB=	yes

GSTREAMER_MESON_ENABLED=gstreamer
GSTREAMER_LIB_DEPENDS=	libgstreamer-1.0.so:multimedia/gstreamer1 \
			libgstaudio-1.0.so:multimedia/gstreamer1-plugins

MANPAGES_BUILD_DEPENDS=	rst2man:textproc/py-docutils
MANPAGES_MESON_ENABLED=	man

MEDIASESSION_DESC=	Session manager support
MEDIASESSION_MESON_ENABLED=	alsa pipewire-alsa media-session pw-cat
MEDIASESSION_LIB_DEPENDS=	libsndfile.so:audio/libsndfile

PULSEAUDIO_MESON_ENABLED=	libpulse
PULSEAUDIO_LIB_DEPENDS=		libpulse.so:audio/pulseaudio \
				libavahi-common.so:net/avahi-app \
				libavahi-client.so:net/avahi-app

VULKAN_DESC=		Enable Vulkan integration
VULKAN_MESON_ENABLED=	vulkan
VULKAN_BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:graphics/vulkan-headers
VULKAN_LIB_DEPENDS=	libvulkan.so:graphics/vulkan-loader

MESON_ARGS=	-D bluez5=disabled \
		-D jack=disabled -D pipewire-jack=disabled \
		-D systemd=disabled \
		-D sdl2=disabled \
		-D udevrulesdir="${LOCALBASE}/lib/udev/rules.d"

post-extract:
.if defined(PATCHFILES) && ${PATCHFILES:Me41187d64345*}
	@${REINPLACE_CMD} -e '/_TAG/s/06-02/07-06/' \
		-e '/which/a'$$'\\\n      valgrind' \
		${WRKSRC}/.gitlab-ci.yml
.endif

post-patch-MEDIASESSION-on:
# alsa-seq is not supported & causes SIGSEGV with media session
	@${REINPLACE_CMD} 's| alsa-seq|\ #alsa-seq|g' \
		${WRKSRC}/src/daemon/media-session.d/media-session.conf
# start media session by default
	@${REINPLACE_CMD} '/manager_args/ s/@comment@//g' \
		${WRKSRC}/src/daemon/pipewire.conf.in

.include <bsd.port.mk>
