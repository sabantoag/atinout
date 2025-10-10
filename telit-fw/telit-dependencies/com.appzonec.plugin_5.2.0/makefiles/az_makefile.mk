ifneq ($(OS),Windows_NT)
### LINUX PART  ---------------------------------------------------------------------------------
MAKEFILE_LINUX :=  $(APPZONE_MAKEFILE_COMMON)/az_makefile_linux.mk
MAKEFILE_LINUX := $(subst $(space),\$(space),$(MAKEFILE_LINUX))
include $(MAKEFILE_LINUX)

else
### WINDOWS PART  ---------------------------------------------------------------------------------
Q=@

export

space :=
space += 

ifdef PARALLEL_BUILD
  THREADS_B = 
else
  THREADS_B = -j1
endif


EXE := .exe
prebuild_setup = "$(APPZONE_BIN)/set_build.exe"


AZ_LIB_ := $(APPZONE_LIB)/temp
#standard path for exe and compilers... use singole slash
AZ_LIB_STD = $(subst \\,\,$(AZ_LIB_))
AZ_LIB_TMP := $(subst $(space),\$(space),$(AZ_LIB_))

#----   _name 1 direction Linux "\" name__ 2 direction windows "\"  name_  1 direction windows "\"
# so AZ_LIB_STD__ means path with "\\"
AZ_LIB_STD_ = $(subst /,\,$(AZ_LIB_STD))
AZ_LIB_STD__ = $(subst \,\\,$(AZ_LIB_STD_))

SDK = $(TOOLCHAIN_BIN)/../..

ifeq ($(TOOLCHAIN),$(filter $(TOOLCHAIN), GCC_v11.2))
  #pckg_name_toolchain = gnu
  pckg_name_toolchain = gcc112
  cmd_all = all_gcc
  cmd_clean = clean_gcc
  cmd_relink = relink_gcc
else ifeq ($(TOOLCHAIN),$(filter $(TOOLCHAIN), GCC_LINUX GCCARMv7_493_windows))
  pckg_name_toolchain = gcc
  cmd_all = all_gcc
  cmd_clean = clean_gcc
  cmd_relink = relink_gcc
else ifeq ($(TOOLCHAIN),$(filter $(TOOLCHAIN), GCC))
  pckg_name_toolchain = gcc493
  cmd_all = all_gcc
  cmd_clean = clean_gcc
  cmd_relink = relink_gcc
else
  pckg_name_toolchain = rvct
  cmd_all = all_rvct
  cmd_clean = clean_rvct
  cmd_relink = relink_rvct
endif

ifneq (,$(findstring 2G,$(PRODUCT)))
  PLAT = 2G
endif

ifneq (,$(findstring 3G,$(PRODUCT)))
  PLAT = 3G
endif

ifneq (,$(findstring 4G,$(PRODUCT)))
  PLAT = 4G
endif

ifdef PIC
  file_name_pkg_base = az$(PLAT)_d$(pckg_name_toolchain)
else
  file_name_pkg_base = az$(PLAT)_$(pckg_name_toolchain)
endif

file_name_prefix= $(file_name_pkg_base)*.azl

az_pkg_dir := $(subst \,/,$(APPZONE_LIB)/$(file_name_prefix))

az_pkg_dir_unix := $(subst $(space),\$(space),$(az_pkg_dir))

ifeq ($(wildcard $(az_pkg_dir)),)
  ERR_MSG=ERROR: $(notdir $(az_pkg_dir)) for $(TOOLCHAIN) NOT FOUND
  # (call error_stop, $(ERR_MSG))
  $(info $(ERR_MSG) )
  $(error STOP)
endif


az_pkg_list=$(sort $(filter $(file_name_pkg_base)%,$(notdir $(wildcard $(az_pkg_dir_unix)))))

az_pkg_first = $(firstword $(az_pkg_list))
az_pkg_last = $(lastword $(az_pkg_list))

# to use external MAKEFILE_BUILD if needed to personalize build or for debug
ifndef MAKEFILE_BUILD
  ifeq ($(TOOLCHAIN),$(filter $(TOOLCHAIN), GCC GCC_v11.2 GCC_LINUX GCCARMv7_493_windows))
   MAKEFILE_BUILD=$(AZ_LIB_TMP)/MakefileGCC.mk
  else
    MAKEFILE_BUILD=$(AZ_LIB_TMP)/MakefileRVCT.mk
  endif
endif

AZ_LIB_TMP := $(subst \\,\,$(AZ_LIB_TMP))
AZ_LIB_TMP := $(subst \,/,$(AZ_LIB_TMP))
# m2m_inc = "$(APPZONE_DIR)/skeleton/inc/"


m2m_inc := $(APPZONE_DIR)/m2m_inc
m2m_src := $(APPZONE_DIR)/m2m_src

#----   _name 1 direction Linux "\" name__ 2 direction windows "\"  name_  1 direction windows "\"
_m2m_inc = $(APPZONE_DIR)/m2m_inc
_m2m_src = $(APPZONE_DIR)/m2m_src

m2m_inc_ = $(subst /,\,$(_m2m_inc))
m2m_src_ = $(subst /,\,$(_m2m_src))
ifdef USE_CYGWIN
  m2m_inc___ = $(subst \\,\,$(m2m_inc_))
  m2m_inc__ = $(subst \,\\,$(m2m_inc___))
  m2m_src___ = $(subst \\,\,$(m2m_src_))
  m2m_src__ = $(subst \,\\,$(m2m_src___))
else
  m2m_inc___ = $(subst \\,\,$(m2m_inc_))
  m2m_inc__ = $(subst \,\\\,$(m2m_inc___))
  m2m_src___ = $(subst \\,\,$(m2m_src_))
  m2m_src__ = $(subst \,\\\,$(m2m_src___))
endif
m2m_inc =$(m2m_inc__)
m2m_src =$(m2m_src__)

az_pkg1 = $(subst //,/,$(APPZONE_LIB)/$(az_pkg_last))
az_pkg_ = $(subst \\,\,$(subst /,\,$(az_pkg1)))
az_pkg = $(subst \,/,$(az_pkg_))


OUT_OBJ_DIR_TEMP := $(subst \,/,$(OUTOBJDIR))

PRJ_DIR = $(subst \,/,$(PWD))
PRJ_NAME_TMP = $(subst /, ,$(PRJ_DIR))
PRJ_NAME = $(lastword $(PRJ_NAME_TMP))
VIAFILE = $(PRJ_DIR)/$(PRJ_NAME).via
VIAFILE_TMP = $(PRJ_DIR)/$(PRJ_NAME).via.tmp


ifeq ($(AZ_STATIC_LIB),TRUE)
  DO_ALL=cleanPluginFolder prebuild updatePlugin infopack build_lib build
else
  DO_ALL=cleanPluginFolder prebuild updatePlugin infopack build
endif

### -----------------------------------------------------------------------------------------------
.PHONY: cleanPluginFolder
cleanPluginFolder:
	$(Q)rm -f -R $(m2m_inc)
	$(Q)rm -f -R $(m2m_src)

### -----------------------------------------------------------------------------------------------
updatePlugin: cleanPluginFolder prebuild
	$(Q)mkdir -p "$(m2m_inc)"
	$(Q)mkdir -p "$(m2m_src)"
  ifdef USE_CYGWIN
		$(Q)cp $(AZ_LIB_STD__)/*.c "$(m2m_src)"
		$(Q)cp $(AZ_LIB_STD__)/*.h "$(m2m_inc)"
  else
		$(Q)cp $(AZ_LIB_TMP)/*.c "$(m2m_src)"
		$(Q)cp $(AZ_LIB_TMP)/*.h "$(m2m_inc)"
  endif


### -----------------------------------------------------------------------------------------------
# no need to cleanPluginFolder in case of do_clean, so no pre-requisite here
.PHONY: prebuild
prebuild: cleanPluginFolder  
	$(Q)echo --------------- SDK VERSION   [ $(SDK_VERSION) ] -------------------------
	$(Q)rm -rf "$(AZ_LIB_TMP)"
	$(Q)mkdir -p "$(AZ_LIB_TMP)"
ifneq ($(az_pkg_first),$(az_pkg_last))
	$(Q)echo !
	$(Q)echo -----------------------------------------------------------------------------------
	$(Q)echo " >>>> ERROR: Too many "$(file_name_prefix)" for $(TOOLCHAIN): Delete the unwanted ones! "
	$(Q)echo " >>>> Latest will be used:  $(az_pkg_last)                                         "  
	$(Q)echo ------------------------------------------------------------------------------------
	$(Q)echo !
endif
ifeq (,$(az_pkg))
	$(Q)echo !
	$(Q)echo -----------------------------------------------------------------------------------
	$(Q)echo " >>>> ERROR: Missing package "$(file_name_prefix)" for $(TOOLCHAIN)"
	$(Q)echo ------------------------------------------------------------------------------------
	$(Q)echo !
endif

	$(Q)$(prebuild_setup) ex_pkg "$(az_pkg)" "$(AZ_LIB_)"


### -----------------------------------------------------------------------------------------------
.PHONY: clean_exe
clean_exe: prebuild
	$(Q)$(MAKE) -f $(MAKEFILE_BUILD) --no-print-directory $(cmd_clean)

### -----------------------------------------------------------------------------------------------
.PHONY: remove_tmp 
remove_tmp:
	$(Q)rm -rf "$(AZ_LIB_TMP)"
	$(Q)rm -f $(VIAFILE)

### -----------------------------------------------------------------------------------------------
.PHONY: build_lib
build_lib: cleanPluginFolder prebuild updatePlugin infopack
	$(Q)ls $(PRJ_DIR)/src > $(VIAFILE_TMP)
	$(Q)sed -i -e 's/\.c/\.o/g' $(VIAFILE_TMP)
	$(Q)uniq $(VIAFILE_TMP) > $(VIAFILE)
	$(Q)sed -i -e 's/^/src\//' $(VIAFILE)
	$(Q)echo " $(OBJS)" >> $(VIAFILE)
	$(Q)rm -f $(VIAFILE_TMP)

### -----------------------------------------------------------------------------------------------	
.PHONY: build
build: cleanPluginFolder prebuild updatePlugin infopack 
	$(Q)$(MAKE) -f $(MAKEFILE_BUILD) --no-print-directory $(cmd_all) | tee build.log -a

### -----------------------------------------------------------------------------------------------
.PHONY: infopack
infopack: cleanPluginFolder prebuild updatePlugin
	$(Q)$(MAKE) -f $(MAKEFILE_BUILD) --no-print-directory info az_pkg=$(az_pkg) | tee build.log

### -----------------------------------------------------------------------------------------------
.PHONY: do_all
do_all: $(DO_ALL)
	$(Q)rm -rf "$(AZ_LIB_TMP)"
	$(Q)rm -f $(VIAFILE)

### -----------------------------------------------------------------------------------------------
.PHONY: do_clean
do_clean: prebuild clean_exe remove_tmp

### -----------------------------------------------------------------------------------------------
.PHONY: do_relink
do_relink: prebuild
# important: use only 1 core, indipendently from selected call: second step will be with -j
	$(Q)$(MAKE) -f $(MAKEFILE_BUILD) --no-print-directory $(cmd_relink)
	$(Q)$(MAKE) --no-print-directory remove_tmp

### -----------------------------------------------------------------------------------------------
### ---------------------- ALL -----------------------------

# important: use only 1 core indipendently from selected call if not enabled by PARALLEL_BUILD in environment : second step will be with -j

.PHONY: all
all: 
	$(Q)$(MAKE) --no-print-directory $(THREADS_B) do_all


.PHONY: clean
clean: 
ifeq ($(AZ_STATIC_LIB),TRUE)
	@echo "Cleaning the Library"
	$(Q)rm -f *.l
	$(Q)rm -f *.cmm
	$(Q)rm -f *_metadata
	$(Q)rm -f *.a
	$(Q)rm -rf lib
	$(Q)rm -f *.azsl
	$(Q)rm -f build.log
endif
	$(Q)$(MAKE) --no-print-directory $(THREADS_B) do_clean

.PHONY: relink
relink:
	$(Q)$(MAKE) --no-print-directory $(THREADS_B) do_relink

endif
# end of ifneq Windows_NT



