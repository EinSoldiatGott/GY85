################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
ADX.obj: ../ADX.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="ADX.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

HMC.obj: ../HMC.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="HMC.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

i2c.obj: ../i2c.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="i2c.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="main.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: ../main.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/xdctools_3_31_00_24_core/xs" --xdcpath="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/grace_3_00_03_66/packages;C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/msp430/MSP430ware_1_97_00_47/driverlib/packages;C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/msp430/MSP430ware_1_97_00_47/driverlib;C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.msp430.elf.MSP430 -p ti.platforms.msp430:MSP430G2553 -r debug -c "C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4" -Dxdc.cfg.tsort.policy=fast -Dxdc.cfg.gen.metadataFiles=false -Dxdc.cfg.SourceDir.verbose=7 --compileOptions "-vmsp --abi=eabi --use_hw_mpy=none --include_path=\"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include\" --include_path=\"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include\" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal  " "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/compiler.opt: | configPkg/linker.cmd
configPkg/: | configPkg/linker.cmd

retardos.obj: ../retardos.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="retardos.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

uart.obj: ../uart.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="uart.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


