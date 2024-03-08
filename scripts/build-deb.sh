#!/bin/bash
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

#  No way to specify a source directory or build directory. So change dir
cd ${SCRIPT_DIR}/../
#  -uc: Do not sign changes list, -us: do not sign source file
#  See man dpkg-buildpackage for more info
debuild --host-type aarch64-linux-gnu -aarm64 -uc -us -B
cd ${SCRIPT_DIR}