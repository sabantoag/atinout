import sys
import gdb

# Update module path.
dir_ = '/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/sysroots/x86_64-linux/usr/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from gobject import register
register (gdb.current_objfile ())
