################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CC := $(TOOLCHAIN_BIN)/mips-buildroot-linux-uclibc-gcc
RM := rm -rf
SRC_DIR=$(CWD)/src
HDR_DIR=$(CWD)/hdr
BINARY=m2mapz.bin
SRC_FILES := $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES := $(addprefix $(OUTOBJDIR)/,$(notdir $(SRC_FILES:.c=.o)))
C_DEPS :=  $(subst .c,.d,$(SRC_FILES))

-include $(APPZONE_DIR)/makefiles/GCCMakefile.mk

