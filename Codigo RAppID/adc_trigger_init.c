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
 * file                   : adc_trigger_init.c
 *
 * Target Compiler        : Codewarrior
 *
 * Target Part            : MPC5606B
 *
 * Part Errata Fixes      : none
 *
 * Project Last Save Date : 05-Apr-2016 14:39:29
 *
 * Created on Date        : 05-Apr-2016 14:39:29
 *
 * Brief Description      : This File contains the utility function used to trigger
 *                          ADC Sampling.
 *
 ******************************************************************************** 
 *
 * Detail Description     : This File contains utility function which can trigger
 *                         Normal & Injected Sampling and Abort Normal and chain
 *                         conversion and power down mode for ADC0 and ADC1.
 *                         These functions are never called by RAppID.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "adc_trigger_init.h"







/*********************  Normal Software Trigger Function ************************/

void adc_0_normal_start_fnc(void)
{
    ADC_0.MCR.B.NSTART = 1; 
        /* Starts The Normal ADC 0 Conversion */

}

void adc_1_normal_start_fnc(void)
{
    ADC_1.MCR.B.NSTART = 1; 
        /* Starts The Normal ADC 1 Conversion */

}

/*********************  Injected Software Trigger Function ************************/

void adc_0_injected_start_fnc(void)
{
    ADC_0.MCR.B.JSTART = 1;
        /* Starts The Injected ADC 0 Conversion */

}

void adc_1_injected_start_fnc(void)
{
    ADC_1.MCR.B.JSTART = 1;
        /* Starts The Injected ADC 1 Conversion */

}
/*********************  Normal Software Conversion  Stop Function ************************/

void adc_0_normal_stop_fnc(void)
{
    ADC_0.MCR.B.ABORT = 1; 
        /*  Stops The Normal ADC 0 Conversion */

}

void adc_1_normal_stop_fnc(void)
{
    ADC_1.MCR.B.ABORT = 1; 
        /*  Stops The Normal ADC 1 Conversion */

}
/*********************  Stop ADC Chain Conversion Function ************************/

void adc_0_chain_stop_fnc(void)
{
    ADC_0.MCR.B.ABORT_CHAIN = 1; 
        /*  Stops The ADC 0 chain Conversion */

}

void adc_1_chain_stop_fnc(void)
{
    ADC_1.MCR.B.ABORT_CHAIN = 1; 
        /*  Stops The ADC 1 chain Conversion */

}
/*********************  Power Down Mode Control Function ************************/

void adc_0_enter_powerdown_mode(void)
{
    ADC_0.MCR.B.PWDN = 1; 
        /* Power Down Mode enabled for ADC 0 */

}

void adc_1_enter_powerdown_mode(void)
{
    ADC_1.MCR.B.PWDN = 1; 
        /* Power Down Mode enabled for ADC 1 */

}

void adc_0_exit_powerdown_mode(void)
{
    ADC_0.MCR.B.PWDN = 0; 
        /* Power Down Mode disabled for ADC 0 */

}

void adc_1_exit_powerdown_mode(void)
{
    ADC_1.MCR.B.PWDN = 0; 
        /* Power Down Mode disabled for ADC 1 */

}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

