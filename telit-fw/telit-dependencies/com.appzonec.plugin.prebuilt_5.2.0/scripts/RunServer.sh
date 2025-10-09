#!/bin/bash
# Usage: RunServer.sh LOCATION

echo Telit IoT Connection Manager Application will debug now:

adb shell 'killall gdbserver'
adb shell 'killall cm_application'

adb shell 'rm -rf /data/az/'
adb shell 'mkdir -p /data/az/'
adb push "${1}"/bin/cm_application /data/az/
adb shell "chmod 775 /data/az/cm_application"

adb forward tcp:4444 tcp:4444
adb shell "gdbserver :4444 /data/az/cm_application"

exit 0
