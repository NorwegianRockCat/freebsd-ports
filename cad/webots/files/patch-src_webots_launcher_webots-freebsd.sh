--- src/webots/launcher/webots-freebsd.sh.orig	2021-02-23 08:38:18 UTC
+++ src/webots/launcher/webots-freebsd.sh
@@ -0,0 +1,32 @@
+#!/bin/sh
+
+export WEBOTS_TMPDIR="${TMPDIR:=/tmp}"
+export QT_ENABLE_HIGHDPI_SCALING=1
+
+# Delay kill signals until Webots has started
+kill_needed=false; trap "kill_needed=true" TERM INT
+
+# Get the location of the Webots directory, even if symlinks are used
+webots_home="$(dirname "$(readlink -f "$0")")"
+
+# Safely create a temporary directory.
+# Note that the following two lines cannot be merged into one
+# because `export` would "hide" the return status of `mktemp`.
+WEBOTS_TMP_PATH="$(mktemp -d $TMPDIR/webots-$$-XXXXXX)/" || exit 1
+export WEBOTS_TMP_PATH
+
+# Prepend directories to LD_LIBRARY_PATH so we can find our libraries
+mkdir -p "${TMP_LIB_DIR:=$WEBOTS_TMP_PATH/lib}"
+export LD_LIBRARY_PATH="$webots_home/lib/webots:$TMP_LIB_DIR:$LD_LIBRARY_PATH"
+
+# Execute the real Webots binary and get its PID
+"$webots_home/bin/webots-bin" "$@" & webots_pid=$!
+if $kill_needed; then kill ${webots_pid}; fi
+trap "kill $webots_pid" TERM INT
+wait $webots_pid
+webots_return_code=$?
+
+# Remove tmp folder and pipe files in case webots crashed without clean-up
+rm -rf $WEBOTS_TMP_PATH
+rm -f ${TMPDIR}/webots_${webots_pid}_*
+exit $webots_return_code
