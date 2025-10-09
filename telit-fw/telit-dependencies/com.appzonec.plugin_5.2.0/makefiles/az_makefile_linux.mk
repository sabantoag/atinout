Q=@

export

space :=
space += 

ifeq ($(OS),Windows_NT)
  EXE := .exe
  prebuild_setup = "$(APPZONE_BIN)/set_build.exe"
else
  prebuild_setup = "$(APPZONE_BIN)/set_build_linux.exe"
endif

AZ_LIB_ := $(APPZONE_LIB)/temp
#standard path for exe and compilers... use singole slash
AZ_LIB_STD = $(subst \\,\,$(AZ_LIB_))
AZ_LIB_TMP := $(subst $(space),\$(space),$(AZ_LIB_))

#APPZONE_INC = $(AZ_LIB_TMP)

SDK = $(TOOLCHAIN_BIN)/../..

ifeq ($(TOOLCHAIN),$(filter $(TOOLCHAIN), GCC GCC_LINUX GCC_v11.2_Linux GCCARMv7_493))
#pckg_prefix = gnu
pckg_prefix = gcc
cmd_all = all_gcc
cmd_clean = clean_gcc
cmd_relink = relink_gcc
else
pckg_prefix = rvct
cmd_all = all_rvct
cmd_clean = clean_rvct
cmd_relink = relink_rvct
endif

ifneq (,$(findstring 2G,$(PRODUCT)))
file_name_pkg_base = az2G_$(pckg_prefix)
file_name_prefix = $(file_name_pkg_base)*.azl
PLAT = 2G
endif
ifneq (,$(findstring 3G,$(PRODUCT)))
file_name_pkg_base = az3G_$(pckg_prefix)
file_name_prefix = $(file_name_pkg_base)*.azl
PLAT = 3G
endif
ifneq (,$(findstring 4G,$(PRODUCT)))
file_name_pkg_base = az4G_$(pckg_prefix)
file_name_prefix = $(file_name_pkg_base)*.azl
PLAT = 4G
endif


az_pkg_dir = $(subst \,/,$(APPZONE_LIB)/$(file_name_prefix))
az_pkg_dir_unix := $(subst $(space),\$(space),$(az_pkg_dir))

#filter is useful in case of path with spaces inside
az_pkg_list = $(sort $(filter $(file_name_pkg_base)%, $(notdir $(wildcard $(az_pkg_dir_unix)))) )
az_pkg_first = $(firstword $(az_pkg_list))
az_pkg_last = $(lastword $(az_pkg_list))

ifeq ($(TOOLCHAIN),$(filter $(TOOLCHAIN), GCC GCC_LINUX GCC_v11.2_Linux GCCARMv7_493))
MAKEFILE_BUILD=$(AZ_LIB_TMP)/MakefileGCC.mk
else
MAKEFILE_BUILD=$(AZ_LIB_TMP)/MakefileRVCT.mk
endif

m2m_inc = "$(APPZONE_DIR)/skeleton/inc/"

az_pkg1 = $(subst //,/,$(APPZONE_LIB)/$(az_pkg_last))
az_pkg = $(subst \\,\,$(subst /,\,$(az_pkg1)))
az_pkg := $(subst \,/,$(az_pkg))
OUT_OBJ_DIR_TEMP := $(subst \,/,$(OUTOBJDIR))

PRJ_DIR = $(subst \,/,$(PWD))
PRJ_NAME_TMP = $(subst /, ,$(PRJ_DIR))
PRJ_NAME = $(lastword $(PRJ_NAME_TMP))
VIAFILE = $(PRJ_DIR)/$(PRJ_NAME).via
SRC_FOLDERS += src

ifeq ($(AZ_STATIC_LIB),TRUE)
	DO_ALL=$(CLEAN_BEFORE_BUILD) prebuild infopack build_lib build remove_tmp
else
	DO_ALL=$(CLEAN_BEFORE_BUILD) prebuild infopack build remove_tmp
endif

all:

### -----------------------------------------------------------------------------------------------
.PHONY: prebuild
prebuild:
	$(Q)echo --------------- SDK VERSION   [ $(SDK_VERSION) ] -------------------------
	$(Q)rm -rf $(AZ_LIB_TMP)
	$(Q)mkdir $(AZ_LIB_TMP)
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
ifneq ($(OS),Windows_NT)
	$(Q)chmod u+rwx "$(AZ_LIB_)" -R
endif

ALL_FILES := $(foreach fld,$(SRC_FOLDERS), $(wildcard $(fld)/*.c))

.PHONY: clean_exe
clean_exe:
	$(Q)$(MAKE) -f $(MAKEFILE_BUILD) --no-print-directory $(cmd_clean)

.PHONY: remove_tmp
remove_tmp:
	$(Q)rm -rf $(AZ_LIB_TMP)
	$(Q)rm -f $(VIAFILE)
	$(Q)rm -f *.azsl

.PHONY: build_lib
build_lib:
	$(Q)ls $(ALL_FILES) | grep -E "\.c$$" | sed -e 's/\.c$$/.o/' | uniq > $(VIAFILE)

.PHONY: build
build: 
	$(Q)$(MAKE) -f $(MAKEFILE_BUILD) --no-print-directory $(cmd_all)

.PHONY: infopack
infopack: 
	$(Q)$(MAKE) -f $(MAKEFILE_BUILD) --no-print-directory info

.PHONY: do_all
do_all: $(DO_ALL)

.PHONY: do_clean
do_clean: prebuild clean_exe remove_tmp

.PHONY: do_relink
do_relink: prebuild
# important: use only 1 core, indipendently from selected call: second step will be with -j
	$(Q)$(MAKE) -f $(MAKEFILE_BUILD) --no-print-directory $(cmd_relink)
	$(Q)$(MAKE) --no-print-directory remove_tmp

### -----------------------------------------------------------------------------------------------
### ---------------------- ALL -----------------------------

# important: use only 1 core, indipendently from selected call: second step will be with -j

.PHONY: all
all:
	$(Q)$(MAKE) --no-print-directory -j1 do_all

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
	$(Q)$(MAKE) --no-print-directory -j1 do_relink

