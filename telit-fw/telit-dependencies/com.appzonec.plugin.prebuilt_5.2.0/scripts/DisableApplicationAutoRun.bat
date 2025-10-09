echo "The script will disable the application from running automatically when the module starts after power up"
adb shell "cd /etc/init.d;update-rc.d -f start_app_script remove;rm start_app_script"