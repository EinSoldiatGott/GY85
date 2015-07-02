################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../lnk_msp430g2553.cmd 

CFG_SRCS += \
../main.cfg 

C_SRCS += \
../i2c.c \
../main.c \
../uart.c 

OBJS += \
./i2c.obj \
./main.obj \
./uart.obj 

C_DEPS += \
./i2c.pp \
./main.pp \
./uart.pp 

GEN_MISC_DIRS += \
./configPkg/ 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_OPTS += \
./configPkg/compiler.opt 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

C_DEPS__QUOTED += \
"i2c.pp" \
"main.pp" \
"uart.pp" 

OBJS__QUOTED += \
"i2c.obj" \
"main.obj" \
"uart.obj" 

C_SRCS__QUOTED += \
"../i2c.c" \
"../main.c" \
"../uart.c" 

GEN_CMDS__FLAG += \
-l"./configPkg/linker.cmd" 

GEN_OPTS__FLAG += \
--cmd_file="./configPkg/compiler.opt" 


