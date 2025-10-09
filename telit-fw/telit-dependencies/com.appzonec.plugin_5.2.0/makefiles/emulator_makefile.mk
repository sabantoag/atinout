MY_PROJECT_NAME := $(shell basename $(CURDIR))
PRODUCT_NAME := $(AZ_MODEL)
OUTPUT_FILE := m2mapz
EXTRA_FLAGS := 
CPPFLAGS    += -I hdr/

ifeq ($(AZ_MODEL),$(filter $(AZ_MODEL),ME910 ME910C1_FAMILY ME910G1_FAMILY ME910G1))
	EXTRA_FLAGS += -DM2MB_API_PRODUCT
endif

ifeq ($(OS),Windows_NT)
	M2MAPPENTRY_FILE := "$(eclipse_home)/../emulator/AppZoneEmulator/usr/share/telit/src/M2mAppEntry.c"
	EMULATOR_HEADER_FILES_FOLDER := "$(eclipse_home)/../emulator/AppZoneEmulator/usr/include/telit/inc"
	COMPILER := "$(TOOLCHAIN_BIN)/mingw32-gcc.exe"
	OUTPUT_FILE_FORMAT := dll
	M2MAPI := "$(eclipse_home)\..\emulator\AppZoneEmulator\m2m_api.dll"

	M2MAPI += "$(eclipse_home)\..\emulator\AppZoneEmulator\m2mb_api.dll"

	FINAL_PRODUCT := $(OUTPUT_FILE).$(OUTPUT_FILE_FORMAT)
else
	MACHINE_TYPE := $(shell uname -m)
ifeq ($(MACHINE_TYPE),x86_64)
	EXTRA_FLAGS += -DENABLE_64_BIT_COMPATIBILITY
endif

	M2MAPPENTRY_FILE := "/usr/share/telit/src/M2mAppEntry.c"
	EMULATOR_HEADER_FILES_FOLDER := "/usr/include/telit/inc"
 	COMPILER = gcc
 	OUTPUT_FILE_FORMAT := so
 	M2MAPI := -lm2m_api

 	M2MAPI += -lm2mb_api

 	FINAL_PRODUCT := lib$(OUTPUT_FILE).$(OUTPUT_FILE_FORMAT)
	EXTRA_FLAGS += -fPIC
endif

SRCS = $(subst .o,.c, $(OBJS))

all:
	@echo "---------- Building Project '$(MY_PROJECT_NAME)' for Emulator ----------"
	mkdir -p obje
	$(COMPILER) -g $(EXTRA_FLAGS) -DPRODUCT_NAME="\"$(PRODUCT_NAME)\"" -DAPP_NAME="\"$(MY_PROJECT_NAME)\"" -c $(M2MAPPENTRY_FILE) $(SRCS) src/*.c -I $(EMULATOR_HEADER_FILES_FOLDER) $(CPPFLAGS)
		mv *.o obje
	$(COMPILER) -shared $(EXTRA_FLAGS) -o $(FINAL_PRODUCT) obje/*.o $(M2MAPI)
	

.PHONY: clean
clean:
	rm -rf obje $(FINAL_PRODUCT)
