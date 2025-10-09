#!/bin/bash

# This script 
#  - Stops any previous instances of AZ binary and GDB
#  - Loads the contents of the project's /bin folder, along with the
#  			cm_application binary 
#  - Configuring it to run at startup (if applicable)
#  - Runs the binary

echo "Telit IoT Connection Manager Application will run now:"

#  - Invokes if the product is not LE910C1
copyDefaultStartScripts () {

	adb shell 'killall gdbserver'
	adb shell 'killall cm_application'
	adb push `dirname $0`/start_app_script /etc/init.d
	adb shell "chmod 775 /etc/init.d/start_app_script"
	adb shell "update-rc.d /etc/init.d/start_app_script start 45 2 3 4 5 . stop 80 0 1 6 ."
}

fileUri="${1}"/.in
if [ -e $fileUri ]
then
  value=$(<$fileUri)
  if [[ $value == "Product=linux_LE910 C1" || $value == "Product=linux_LE910C1 PL 2.1" || $value == "Product=linux_LE910CX" ]]
  then
	# Check if necessary packages are present, and install them if needed
	#which mksquashfs || sudo apt-get install squashfs-tools
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
	adb shell 'killall gdbserver'
	adb shell 'killall cm_application'

	echo "Copying start-up scripts"
	adb push "${1}"/script/oem_earlystart.sh /data/
	adb shell "chmod 775 /data/oem_earlystart.sh"
	adb push "${1}"/script/oem_poststart.sh /data/
	adb shell "chmod 775 /data/oem_poststart.sh"
	adb push "${1}"/script/oemstart.sh /data/
	adb shell "chmod 775 /data/oemstart.sh"
    else
      copyDefaultStartScripts
  fi
else
copyDefaultStartScripts
fi


adb shell 'rm -rf /data/az/'
adb shell 'mkdir -p /data/az/'
adb push "${1}"/bin/cm_application /data/az/
adb shell 'chmod 775 /data/az/cm_application'
adb shell "/data/az/cm_application"

exit 0
