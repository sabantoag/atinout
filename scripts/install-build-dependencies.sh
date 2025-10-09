#!/bin/bash
SCRIPT_DIR="$(dirname -- $(readlink -f "${0}"))"

wget -P "${SCRIPT_DIR}" http://ftp.de.debian.org/debian/pool/main/r/ruby-ronn/ronn_0.9.1-3_all.deb
wget -P "${SCRIPT_DIR}" http://ftp.de.debian.org/debian/pool/main/r/ruby-ronn/ruby-ronn_0.9.1-3_all.deb

sudo apt-get install -y \
devscripts \
gcc-aarch64-linux-gnu \
dpkg-cross \
debhelper-compat \
"${SCRIPT_DIR}"/ronn_0.9.1-3_all.deb \
"${SCRIPT_DIR}"/ruby-ronn_0.9.1-3_all.deb

rm "${SCRIPT_DIR}"/ronn_0.9.1-3_all.deb "${SCRIPT_DIR}"/ruby-ronn_0.9.1-3_all.deb
