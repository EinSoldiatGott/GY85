#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/grace_3_00_03_66/packages;C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/msp430/MSP430ware_1_97_00_47/driverlib/packages;C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/msp430/MSP430ware_1_97_00_47/driverlib;C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base
override XDCROOT = C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/xdctools_3_31_00_24_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/grace_3_00_03_66/packages;C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/msp430/MSP430ware_1_97_00_47/driverlib/packages;C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/msp430/MSP430ware_1_97_00_47/driverlib;C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/ccsv6/ccs_base;C:/PROGRA~2/eclipse-SDK-3.8.2-win32/TI/xdctools_3_31_00_24_core/packages;..
HOSTOS = Windows
endif
