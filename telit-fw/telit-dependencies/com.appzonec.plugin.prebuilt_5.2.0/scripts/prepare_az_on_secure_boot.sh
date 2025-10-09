#!/bin/bash

# This script is ran to enable AZ development on the module
#
# This script requires elevated permission to mount the old and 
# create the new squashfs
#

disclaimer='''
WARNING:\n 
  Running this script will disable the secure boot nature of the module.\n
  Your device will be vulnerable, and anyone can easily modify the code that
  will be ran at startup.
'''


root_usage_warning='''
Elevated privileges required.\n
Elevated privileges are required to \n
 - extract and compress the module root partition.
 - install the following (if needed)\n
  - squashfs-tools
  - adb
	- fastboot
'''

echo -e $disclaimer

echo -e $root_usage_warning

# Check if necessary packages are present, and install them if needed
which mksquashfs || sudo apt-get install squashfs-tools
which adb || sudo apt-get install android-tools-adb
which fastboot || sudo apt-get install android-tools-fastboot

if [ "$(adb get-state)" != "device" ]
then
  echo -e '''\nFailed.
  Make sure the module is connected and try again''' >&2
  exit 2
fi

# First load the credentials to the modem
adb push `dirname $0`/adb_credentials /var/run/

SCRIPT_LOCATION=$PWD
cd /tmp
echo Getting the current root partition from the module
# Maybe keep this around?
adb pull /dev/ubi0_0 .

echo Uncompressing the root partition
sudo unsquashfs ubi0_0
sudo rm ubi0_0
echo Enabling AZ Development on the modem
sudo cp --preserve=mode,ownership --recursive ${SCRIPT_LOCATION}/changes/* squashfs-root/
echo Recompressing the root partition
sudo mksquashfs squashfs-root/ modified.rootfs.squashfs -noappend -b 128K -no-fragments -xattrs -noI
sudo rm -rf squashfs-root/

echo Flashing the new root partition to the modem
adb reboot bootloader

fastboot flash rootfs modified.rootfs.squashfs
fastboot reboot
echo done

sudo rm modified.rootfs.squashfs

exit 0
