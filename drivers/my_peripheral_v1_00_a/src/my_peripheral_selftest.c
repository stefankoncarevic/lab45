/*****************************************************************************
* Filename:          D:\rA18-2015\lab45-1/drivers/my_peripheral_v1_00_a/src/my_peripheral_selftest.c
* Version:           1.00.a
* Description:       Contains a diagnostic self-test function for the my_peripheral driver
* Date:              Thu Mar 29 09:39:01 2018 (by Create and Import Peripheral Wizard)
*****************************************************************************/


/***************************** Include Files *******************************/

#include "my_peripheral.h"
#include "stdio.h"
#include "xio.h"
#include "xparameters.h"


/************************** Constant Definitions ***************************/

#define READ_WRITE_MUL_FACTOR 0x10

/************************** Variable Definitions ****************************/


/************************** Function Definitions ***************************/

/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the MY_PERIPHERAL instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus MY_PERIPHERAL_SelfTest(void * baseaddr_p)
{
  Xuint32 baseaddr;
  int write_loop_index;
  int read_loop_index;
  int Index;
  
  /*
   * Check and get the device address
   */
  /*
   * Base Address maybe 0. Up to developer to uncomment line below.
  XASSERT_NONVOID(baseaddr_p != XNULL);
   */
  baseaddr = (Xuint32) baseaddr_p;

  xil_printf("******************************\n\r");
  xil_printf("* User Peripheral Self Test\n\r");
  xil_printf("******************************\n\n\r");

  return XST_SUCCESS;
}
