################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
src/grace/GPIO_init.obj: ../src/grace/GPIO_init.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="src/grace/GPIO_init.pp" --obj_directory="src/grace" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/grace/InterruptVectors_init.obj: ../src/grace/InterruptVectors_init.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="src/grace/InterruptVectors_init.pp" --obj_directory="src/grace" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/grace/USCI_A0_init.obj: ../src/grace/USCI_A0_init.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="src/grace/USCI_A0_init.pp" --obj_directory="src/grace" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/grace/USCI_B0_init.obj: ../src/grace/USCI_B0_init.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmsp --abi=eabi --use_hw_mpy=none --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base/msp430/include" --include_path="C:/Program Files (x86)/eclipse-SDK-3.8.2-win32/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power=all -g --define=__MSP430G2553__ --diag_warning=225 --display_error_number --diag_wrap=off --printf_support=minimal --preproc_with_compile --preproc_dependency="src/grace/USCI_B0_init.pp" --obj_directory="src/grace" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


