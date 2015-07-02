# invoke SourceDir generated makefile for main.pe430
main.pe430: .libraries,main.pe430
.libraries,main.pe430: package/cfg/main_pe430.xdl
	$(MAKE) -f D:\Drive\Master\UAMI\FES\MSP430\GY85/src/makefile.libs

clean::
	$(MAKE) -f D:\Drive\Master\UAMI\FES\MSP430\GY85/src/makefile.libs clean

