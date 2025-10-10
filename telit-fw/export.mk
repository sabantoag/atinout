export
SDK_VERSION=5.2.0
FW_VERSION=25_21_XX0
LOGONSERVER= 
PLUGIN_VERSION=0.3.0.28
APPZONE_DIR=$(CURDIR)/telit-dependencies/com.telit.appzonec.plugin.le910cx_${FW_VERSION}_${PLUGIN_VERSION}
APPZONE_LIB=$(APPZONE_DIR)/lib
TOOLCHAIN_PATH=$(APPZONE_LIB)
APPZONE_INC=$(APPZONE_DIR)/m2m_inc
APPZONE_MAKEFILE=$(APPZONE_DIR)/makefiles
APPZONE_BIN=$(CURDIR)/telit-dependencies/com.appzonec.plugin.prebuilt_$(SDK_VERSION)/prebuilt/bin
APPZONE_MAKEFILE_COMMON=$(CURDIR)/telit-dependencies/com.appzonec.plugin_$(SDK_VERSION)/makefiles
TOOLCHAIN_BIN=$(CURDIR)/telit-dependencies/com.telit.appzonec.toolchain.plugin.gccARMv7_493_linux_4.9.3/arm_gcc493/toolchain/usr/bin/arm-oe-linux-gnueabi/
OUTOBJDIR=obj
AZ_BASE_MAKEFILE=az_makefile.mk
LIB_PATH=-L "$(CURDIR)/telit-dependencies/com.telit.appzonec.toolchain.plugin.gccARMv7_493_linux_4.9.3/gcc-linaro-arm-linux-gnueabi/lib/gcc/arm-linux-gnueabi/4.9.4" -L "$(CURDIR)/telit-dependencies/com.telit.appzonec.toolchain.plugin.gccARMv7_493_linux_4.9.3/gcc-linaro-arm-linux-gnueabi/lib" 
AZ_STATIC_LIB=FALSE
