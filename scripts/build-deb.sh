#!/bin/bash

# Get the script's current directory
SCRIPT_DIR="$(dirname -- $(readlink -f "${0}"))"
# Get the script's parent directory
PARENT_DIR="$(dirname -- "${SCRIPT_DIR}")"

# No way to specify a source directory or build directory. So change dir
cd "${PARENT_DIR}"
# -uc: Do not sign changes list, -us: do not sign source file
# See man dpkg-buildpackage for more info
debuild --host-type aarch64-linux-gnu -aarm64 -uc -us -B
cd "${SCRIPT_DIR}"