#!/bin/bash 
clear
echo "The script will disable the application from running automatically when the module starts after power up"

adb shell "update-rc.d -f /etc/init.d/start_app_script remove"
adb shell "rm /etc/init.d/start_app_script"
read -p "Do you wish to delete the application as well? (y/n)" yn
case $yn in
  [Yy]* ) echo "The application will be deleted from the module";
    adb shell "rm /data/az/cm_application"
    ;;
  [Nn]* ) echo "The application will not be deleted but it will stop running automatically when the module starts after power up";
    ;;
  * ) echo "please type y or n";;
esac

