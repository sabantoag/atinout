#!/bin/bash

# This script is ran to restore secure boot on the module
#
#

disclaimer='''
WARNING:\n 
  This will restore the secure boot on your module.\n
  Any modifications you made will be lost
'''

echo $disclaimer
read -p "Do you want to continue? (Y/n)" yn

if [ ${yn} != "Y" ]
then
  echo Aborting.
  exit 1
fi

adb devices
# TODO: Do something clever in case there is no device, or there are more than one

# Get the verified rootfs
wget # I guess?

echo Flashing the new root partition to the modem
adb reboot bootloader
fastboot flash rootfs ubi0_0.rootfs.squashfs
fastboot reboot
echo done

rm ubi0_0.rootfs.squashfs
