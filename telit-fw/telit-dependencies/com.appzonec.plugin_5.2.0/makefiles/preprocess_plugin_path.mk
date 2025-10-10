#APPZONE_DIR := $${eclipse_loc}/plugins/le910v2_12.00.007_12.00.007-rc1


# These statements searche for an alternative of the product package with other
# version
#
# Path to product package:
# * may contain environment variables
# * must have plugins directory
# * must have device name, like he910, le910v2 or LE920A4, etc.
# * must have product notation in the plugin name, i.e. le910v2_20.xx.xxx, or
#   he910_12.00.007
# * firmware version must not contain any underscores, i.e. he910_12.00_007 -
#   is a wrong name
# * may have version, that is not aligned with firmware name, like 20.40.001,
#   or 12.00.007-rc1, etc.
#
# Assumption: in order to compile application, we have to match product package
# (plugin) version to any firmware version with the same base by name
#
# Therefore, solution:
#   If we can't find a corresponding plugin, including plugin version, we should
#   find any other plugin with different version (maximum is desired), but with
#   the same product package name

APPZONE_DIR:=$(subst \,/,$(APPZONE_DIR))

#ifeq ($(shell set -x; ls -1d "$(APPZONE_DIR)"),)
ifeq ($(shell ls -1d "$(APPZONE_DIR)" 2>/dev/null),)
  $(warning Cannot find exact match for product package with version)
  $(info Older product package: $(lastword $(notdir $(APPZONE_DIR:%/=%))))
  # C:\Program Files\...\com.telit.appzonec.plugin.he910_12_00_007_12.0.7-rc1 =>
  ### "C:\Program Files\...\com.telit.appzonec.plugin.he910_12_00_007_"* =>
  ###### C:\Program Files\...\com.telit.appzonec.plugin.he910_12_00_007_12.0.7
  APPZONE_DIR_WILDCARD := \
	$(shell echo '"$(APPZONE_DIR)"' | sed -r 'sx(.*/[^/]+[eE]9([^_]*_){4})[^/]*(.*)x\1\"*\3x')
  #$(info APPZONE_DIR_WILDCARD = $(APPZONE_DIR_WILDCARD)) ## DEBUG
  #APPZONE_DIR := $(shell set -x; ls -1d $(APPZONE_DIR_WILDCARD) | tail -n1)
  APPZONE_DIR := $(shell ls -1d $(APPZONE_DIR_WILDCARD) 2>/dev/null | tail -n1)
  ifneq ($(APPZONE_DIR),)
    $(info New product package:   $(lastword $(notdir $(APPZONE_DIR:%/=%))))
  else
    $(error There is no alternatives for this product package)
  endif
endif
