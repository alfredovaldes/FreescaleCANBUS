/*
 *######################################################################
 *                                RAppIDJDP
 *           Rapid Application Initialization and Documentation Tool
 *                         Freescale Semiconductor Inc.
 *
 *######################################################################
 *
 * Project Name           : VFDControl_Config
 *
 * Project File           : VFDControl_Config.rsp
 *
 * Revision Number        : 1.0
 *
 * Tool Version           : 1.2.1.5
 *
 * file                   : pit_init.c
 *
 * Target Compiler        : Codewarrior
 *
 * Target Part            : MPC5606B
 *
 * Part Errata Fixes      : none
 *
 * Project Last Save Date : 05-Apr-2016 14:39:29
 *
 * Created on Date        : 05-Apr-2016 14:39:30
 *
 * Brief Description      : PIT Initialization file
 *
 ******************************************************************************** 
 *
 * Detail Description     : File contains Periodic Interrupt Timer (PIT) parameter
 *                         initialization function. Along with PIT module, the
 *                         function configures parameters such as individual
 *                         channel status, interrupt status & timer load value.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "pit_init.h"




/********************* Initialization Function(s) *********************** */


void pit_init_fnc(void)
{
    PIT.PITMCR.B.MDIS   = 1;    
        /*Disable PIT for initialization         */

/* ----------------------------------------------------------- */
/*                     Configure Load Value Registers                */
/* ----------------------------------------------------------- */

    PIT.CH[0].LDVAL.R  = 0x0061A800;    
        /*value loaded in the Timer0: 6400000    */
    
    PIT.CH[1].LDVAL.R  = 0x00000000;    
        /*value loaded in the Timer1: 0    */
    
    PIT.CH[2].LDVAL.R  = 0x00000000;    
        /*value loaded in the Timer2: 0    */
    
    PIT.CH[3].LDVAL.R  = 0x00000000;    
        /*value loaded in the Timer3: 0    */
    
    PIT.CH[4].LDVAL.R  = 0x00000000;    
        /*value loaded in the Timer4: 0    */
    
    PIT.CH[5].LDVAL.R  = 0x00000000;    
        /*value loaded in the Timer5: 0    */
    
    PIT.CH[6].LDVAL.R  = 0x00000000;    
        /*value loaded in the Timer6: 0    */
    
    PIT.CH[7].LDVAL.R  = 0x00000000;    
        /*value loaded in the Timer7: 0    */
    


/* ----------------------------------------------------------- */
/*                     Enable Interrupts                  */
/* ----------------------------------------------------------- */

    PIT.CH[0].TCTRL.B.TIE  = 0x1;    
        /*Timer 0 Interrupt : Enabled    */
    
    PIT.CH[1].TCTRL.B.TIE  = 0x0;    
        /*Timer 1 Interrupt : Disabled    */
    
    PIT.CH[2].TCTRL.B.TIE  = 0x0;    
        /*Timer 2 Interrupt : Disabled    */
    
    PIT.CH[3].TCTRL.B.TIE  = 0x0;    
        /*Timer 3 Interrupt : Disabled    */
    
    PIT.CH[4].TCTRL.B.TIE  = 0x0;    
        /*Timer 4 Interrupt : Disabled    */
    
    PIT.CH[5].TCTRL.B.TIE  = 0x0;    
        /*Timer 5 Interrupt : Disabled    */
    
    PIT.CH[6].TCTRL.B.TIE  = 0x0;    
        /*Timer 6 Interrupt : Disabled    */
    
    PIT.CH[7].TCTRL.B.TIE  = 0x0;    
        /*Timer 7 Interrupt : Disabled    */
    


/* ----------------------------------------------------------- */
/*                   Start Timers                 */
/* ----------------------------------------------------------- */

    PIT.CH[0].TCTRL.B.TEN = 0x1;    
        /*Start Timer 0 is : Enabled    */
    
    PIT.CH[1].TCTRL.B.TEN = 0x0;    
        /*Start Timer 1 is : Disabled    */
    
    PIT.CH[2].TCTRL.B.TEN = 0x0;    
        /*Start Timer 2 is : Disabled    */
    
    PIT.CH[3].TCTRL.B.TEN = 0x0;    
        /*Start Timer 3 is : Disabled    */
    
    PIT.CH[4].TCTRL.B.TEN = 0x0;    
        /*Start Timer 4 is : Disabled    */
    
    PIT.CH[5].TCTRL.B.TEN = 0x0;    
        /*Start Timer 5 is : Disabled    */
    
    PIT.CH[6].TCTRL.B.TEN = 0x0;    
        /*Start Timer 6 is : Disabled    */
    
    PIT.CH[7].TCTRL.B.TEN = 0x0;    
        /*Start Timer 7 is : Disabled    */
    

    PIT.PITMCR.B.MDIS = 0;    
        /*PIT Module : Enabled        */

}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

