REM BATCH SCRIPT

REM	This script 
REM  - Stops any previous instances of AZ binary and GDB
REM  - Loads the contents of the project's /bin folder, along with the
REM  			cm_application binary 
REM  - Configuring it to run at startup (if applicable)
REM  - Runs the binary

echo Telit IoT Connection Manager Application will run now:

adb shell "killall gdbserver"
adb shell "killall cm_application"
set a=%~dp0%
adb push %a%adb_credentials /var/run/
adb shell "chmod 775 /var/run/adb_credentials"

adb shell "rm -rf /data/az"
adb shell "mkdir -p /data/az/"
adb push %1\bin\cm_application /data/az/
adb shell "chmod 775 /data/az/cm_application"

adb shell "/data/az/cm_application"