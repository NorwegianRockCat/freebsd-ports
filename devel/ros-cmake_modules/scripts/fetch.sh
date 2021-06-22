#!/bin/sh
################################################################################
# Copyright (C) 2021 Henrik Gulbrandsen <henrik@gulbra.net>                    #
# Redistribution and use in source and binary forms,                           #
# with or without modification, are permitted.                                 #
################################################################################
# $FreeBSD$
set -e

### Sanity check ###############################################################

REQUIRED="DISTDIR WRKDIR"

for var in ${REQUIRED}; do
        if eval [ -z "\${$var}" ]; then
                echo "${var} is not set"
                exit 1
        fi
done

### Fetch the tarball ##########################################################

fetch "$@"

# Extract the package name
distfile="${*##*/}"
name="${distfile%_GH0.tar.gz}"
name="${name#ros-}"

# Only the cmake_modules package is a special case...
if [ "${name#cmake_modules-}" = "${name}" ]; then
        exit 0
fi

### Edit the tarball ###########################################################

# Do all work in a temporary directory
tmpdir="${WRKDIR}/tmp"
mkdir -p "${tmpdir}"

# Remove FindXenomai.cmake from the distribution, because the CISST
# Software License is non-standard and might require no-auto-accept.
# Besides, Xenomai is a Linux-specific framework that we don't need.
tar -pxz -C "${tmpdir}" -f "${DISTDIR}/ros-${name}_GH0.tar.gz"
rm -f "${tmpdir}/${name}/cmake/Modules/FindXenomai.cmake"

# Restore the original timestamp to keep things reproducible
touch -r "${tmpdir}/${name}" "${tmpdir}/${name}/cmake/Modules"

# For the same reason, keep the file order and skip the gzip timestamp
tar -tz -f "${DISTDIR}/ros-${name}_GH0.tar.gz"\
    | grep -v FindXenomai | tar -cnz -T- --options !timestamp\
    --uid=0 --gid=0 --uname root --gname root\
     -C "${tmpdir}" -f "${tmpdir}/ros-${name}_GH0.tar.gz"

# Replace the original tarball and clean up
mv "${tmpdir}/ros-${name}_GH0.tar.gz" "${DISTDIR}/"
rm -rf "${tmpdir}"

################################################################################
