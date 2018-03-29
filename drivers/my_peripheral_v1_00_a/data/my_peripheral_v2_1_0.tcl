##############################################################################
## Filename:          D:\rA18-2015\lab45-1/drivers/my_peripheral_v1_00_a/data/my_peripheral_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Thu Mar 29 09:39:01 2018 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "my_peripheral" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
