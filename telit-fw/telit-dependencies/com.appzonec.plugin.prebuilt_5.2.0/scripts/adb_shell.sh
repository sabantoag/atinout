#!/bin/bash

# A wrapper to imitate `adb shell` command but sending the credentials
# from the file `adb_credentials`

# To programmatically send commands with adb use
#
#   (sleep 1; echo USERNAME; sleep 1; echo PASSWORD; sleep 1;\
#     echo COMMAND1; echo COMMAND2; \
#     ....; \
#     echo COMMANDN;\
#     echo exit;) | adb shell
#
# Credentials are expected to be in the file adb_credentials in the format:
#   1|username
#   2|password
#
# USAGE:
#   adb_shell.sh "COMMAND1; COMMAND2; ...; COMMANDN;"
#

#set -x

adb devices

ADB_CREDENTIALS_FILE=adb_credentials; # hard-coded for now
COMMAND="(sleep 1;"

USERNAME=$(head -n1 $ADB_CREDENTIALS_FILE)
PASSWORD=$(tail -n1 $ADB_CREDENTIALS_FILE)

if [ $USERNAME ]; then
  COMMAND=$COMMAND\ "echo $USERNAME; sleep 1; echo $PASSWORD;"
fi

# First sanitise the commands to be sent to adb shell.
# It is assumed it is in argument position ${1}
CMD=${1//'; '/';'}
CMD=${CMD//' ;'/';'}
CMD=${CMD/%;/}

# Now create the patched command by
# replacing all ';' with '; echo '
CMD_PATCHED="echo ${CMD//';'/'; echo '};"

# Finalise
COMMAND="$COMMAND $CMD_PATCHED echo exit;) | adb shell"

# Execute COMMAND
eval ${COMMAND}
