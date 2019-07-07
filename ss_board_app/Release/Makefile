################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../Device_Startup/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../Device_Startup/startup_samd21.c \
../Device_Startup/system_samd21.c \
../main.cpp


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
Device_Startup/startup_samd21.o \
Device_Startup/system_samd21.o \
main.o

OBJS_AS_ARGS +=  \
Device_Startup/startup_samd21.o \
Device_Startup/system_samd21.o \
main.o

C_DEPS +=  \
Device_Startup/startup_samd21.d \
Device_Startup/system_samd21.d \
main.d

C_DEPS_AS_ARGS +=  \
Device_Startup/startup_samd21.d \
Device_Startup/system_samd21.d \
main.d

OUTPUT_FILE_PATH +=ss_board_app.elf

OUTPUT_FILE_PATH_AS_ARGS +=ss_board_app.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+=  \
C:/Users/Rafael\ Dias/Documents/Atmel\ Studio/7.0/ss_board/ss_board/Release/libss_board.a

LINKER_SCRIPT_DEP+=  \
../Device_Startup/samd21g18a_flash.ld \
../Device_Startup/samd21g18a_sram.ld


# AVR32/GNU C Compiler
Device_Startup/startup_samd21.o: ../Device_Startup/startup_samd21.c
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-gcc.exe$(QUOTE)  -x c -mthumb -D__SAMD21G18A__ -DNDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\ARM\CMSIS\5.4.0\CMSIS\Core\Include" -I"../../ss_board/Config" -I"../../ss_board" -I"../../ss_board/examples" -I"../../ss_board/hal/include" -I"../../ss_board/hal/utils/include" -I"../../ss_board/hpl/core" -I"../../ss_board/hpl/dmac" -I"../../ss_board/hpl/dsu" -I"../../ss_board/hpl/gclk" -I"../../ss_board/hpl/pac" -I"../../ss_board/hpl/pm" -I"../../ss_board/hpl/port" -I"../../ss_board/hpl/sercom" -I"../../ss_board/hpl/sysctrl" -I"../../ss_board/hpl/wdt" -I"../../ss_board/hri" -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\Atmel\SAMD21_DFP\1.3.331\samd21a\include"  -Os -ffunction-sections -mlong-calls -Wall -mcpu=cortex-m0plus -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

Device_Startup/system_samd21.o: ../Device_Startup/system_samd21.c
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-gcc.exe$(QUOTE)  -x c -mthumb -D__SAMD21G18A__ -DNDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\ARM\CMSIS\5.4.0\CMSIS\Core\Include" -I"../../ss_board/Config" -I"../../ss_board" -I"../../ss_board/examples" -I"../../ss_board/hal/include" -I"../../ss_board/hal/utils/include" -I"../../ss_board/hpl/core" -I"../../ss_board/hpl/dmac" -I"../../ss_board/hpl/dsu" -I"../../ss_board/hpl/gclk" -I"../../ss_board/hpl/pac" -I"../../ss_board/hpl/pm" -I"../../ss_board/hpl/port" -I"../../ss_board/hpl/sercom" -I"../../ss_board/hpl/sysctrl" -I"../../ss_board/hpl/wdt" -I"../../ss_board/hri" -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\Atmel\SAMD21_DFP\1.3.331\samd21a\include"  -Os -ffunction-sections -mlong-calls -Wall -mcpu=cortex-m0plus -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./main.o: .././main.cpp
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-g++.exe$(QUOTE) -mthumb -D__SAMD21G18A__ -DNDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\ARM\CMSIS\5.4.0\CMSIS\Core\Include" -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\Atmel\SAMD21_DFP\1.3.331\samd21a\include" -I"../../ss_board/Config" -I"../../ss_board" -I"../../ss_board/examples" -I"../../ss_board/hal/include" -I"../../ss_board/hal/utils/include" -I"../../ss_board/hpl/core" -I"../../ss_board/hpl/dmac" -I"../../ss_board/hpl/dsu" -I"../../ss_board/hpl/gclk" -I"../../ss_board/hpl/pac" -I"../../ss_board/hpl/pm" -I"../../ss_board/hpl/port" -I"../../ss_board/hpl/sercom" -I"../../ss_board/hpl/sysctrl" -I"../../ss_board/hpl/wdt" -I"../../ss_board/hri"  -Os -ffunction-sections -fno-rtti -fno-exceptions -mlong-calls -Wall -mcpu=cortex-m0plus -c -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-g++.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -mthumb -Wl,-Map="ss_board_app.map" -Wl,--start-group -lm -lss_board  -Wl,--end-group -L"..\\Device_Startup" -L"C:\Users\Rafael Dias\Documents\Atmel Studio\7.0\ss_board\ss_board\Release"  -Wl,--gc-sections -mcpu=cortex-m0plus -Tsamd21g18a_flash.ld -Wl,--section-start=.text=0x2000  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O binary "ss_board_app.elf" "ss_board_app.bin"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "ss_board_app.elf" "ss_board_app.hex"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O binary "ss_board_app.elf" "ss_board_app.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objdump.exe" -h -S "ss_board_app.elf" > "ss_board_app.lss"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "ss_board_app.elf" "ss_board_app.srec"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-size.exe" "ss_board_app.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "ss_board_app.elf" "ss_board_app.a" "ss_board_app.hex" "ss_board_app.bin" "ss_board_app.lss" "ss_board_app.eep" "ss_board_app.map" "ss_board_app.srec"
	