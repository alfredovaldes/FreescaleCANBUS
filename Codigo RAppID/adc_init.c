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
 * file                   : adc_init.c
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
 * Brief Description      : This file contains the ADC-CTU Configuration and
 *                          initialization functions.
 *
 ******************************************************************************** 
 *
 * Detail Description     : This File contains function that setup Normal & injected
 *                         channels, Sampling, PreSampling, interrupt,Threshold,
 *                         CTU and DMA for ADC0 and ADC1.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "adc_init.h"




/*********************  Initialization Function(s) ************************/

void adc_init_fnc(void)
{
/*-----------------------------------------------------------*/
/* ADC 0 Configuration                                       */
/*-----------------------------------------------------------*/
    adc_0_init_fnc();

/*-----------------------------------------------------------*/
/* ADC 1 Configuration                                       */
/*-----------------------------------------------------------*/
    adc_1_init_fnc();
/*-----------------------------------------------------------*/
/* ADC CTU Configuration                                       */
/*-----------------------------------------------------------*/
    adc_ctuevent_init_fnc();
} 


void adc_0_init_fnc(void)
{

    ADC_0.MCR.B.PWDN = 0x1;
        /* Enter power down state */
    ADC_0.MCR.B.ABORT =0x1;
        /* Abort all conversion in process */

/*-----------------------------------------------------------*/
/* Clear All Interrupt Flags - Write 1 to Clear              */
/*-----------------------------------------------------------*/
    ADC_0.ISR.R = 0x0000001F; 
        /* B27: End of CTU Conversion EOCTU Flag */
        /* B28: End of Injected Channel Conversion JEOC Flag */
        /* B29: End of Injected Chain Conversion interrupt JECH Flag */
        /* B30: End of Channel Conversion EOC Flag */
        /* B31: End of Chain Conversion ECH Flag */

/*-----------------------------------------------------------*/
/* All Init that can be done in Power Down State             */
/*-----------------------------------------------------------*/
/*-----------------------------------------------------------*/
/* ADC General Setup                                         */
/*-----------------------------------------------------------*/
    ADC_0.MCR.R = 0x00000000;
        /* Conversion data Overwrite : Disabled */
        /* Conversion Data Aligned: Right Aligned */
        /* Conversion Mode Selected :  One Shot */
        /* Normal Start conversion Disabled :- can be configured using adc_normal_Start_fnc */
        /* Injected Start conversion Disabled :- can be configured using adc_injected_Start_fnc */
        /* Injection external trigger : Configured in adc_trigger_setup_fnc */
        /* Injection trigger edge : Configured in adc_trigger_setup_fnc */
        /* Cross Triggering Unit needs to be configured after CTU initialization */
        /* ADC Conversion clock selected as :  System Clock/2 */
        /* ADCLKSEL Init needs to be done in POWER DOWN State */
        /* Abort chain Conversion Disabled can be configured using adc_abort_chain_fnc */
        /* Abort Normal Conversion Disabled can be configured using adc_normal_stop_fnc */
        /* Auto Clock Off feature: Disabled */
        /* Power Down Mode is Enabled while ADC Clock initialization */


    ADC_0.MCR.B.PWDN = 0x0;
        /* ADC Power down state :Disabled */
    ADC_0.DSDR.R = 0x00000000;
        /* The Decode Signal Delay : 0 clock Cycle      */
    ADC_0.PDEDR.R = 0x00000000;
        /* The Power Down Delay : 0 clock Cycle      */



/*-----------------------------------------------------------*/
/*      Conversion Timing Register 0(ADC_0_CTR0)               */
/*-----------------------------------------------------------*/
    ADC_0.CTR0.R = 0x00000203;
        /* Phase duration Latch : 0 */
        /* Input Sampling Duration : 3 clock Cycles  */
        /* Input Comparison Duration : 1 clock Cycles*/
        /* Offset Shift Duration : 0 clock Cycles*/

/*-----------------------------------------------------------*/
/*      Conversion Timing Register 0(ADC_0_CTR1)               */
/*-----------------------------------------------------------*/
    ADC_0.CTR1.R = 0x00000203;
        /* Phase duration Latch : 0 */
        /* Input Sampling Duration : 3 clock Cycles  */
        /* Input Comparison Duration : 1 clock Cycles*/

/*-----------------------------------------------------------*/
/*      Conversion Timing Register 0(ADC_0_CTR2)               */
/*-----------------------------------------------------------*/
    ADC_0.CTR2.R = 0x00000203;
        /* Phase duration Latch : 0 */
        /* Input Sampling Duration : 3 clock Cycles  */
        /* Input Comparison Duration : 1 clock Cycles*/
/*-----------------------------------------------------------*/
/*   ADC PreSampling Configuration                           */
/*-----------------------------------------------------------*/
/*-----------------------------------------------------------*/
/*     PreSampling Control Register(ADC_0_PSCR)              */
/*-----------------------------------------------------------*/
    ADC_0.PSCR.R = 0x00000000;
        /* Sampling bypass : Disabled */
        /* PreSampling Voltage Selected for internal precision channels : V0    */
        /* PreSampling Voltage Selected for internal extended channels : V0    */
        /* PreSampling Voltage Selected for external channels : V0    */


/*-----------------------------------------------------------*/
/*        PreSampling Channel Enable Register(ADC_0_PSR0)        */
/*-----------------------------------------------------------*/
    ADC_0.PSR0.R = 0x00000000;
        /* ADC Channel 0 PreSampling : Disabled */
        /* ADC Channel 1 PreSampling : Disabled */
        /* ADC Channel 2 PreSampling : Disabled */
        /* ADC Channel 3 PreSampling : Disabled */
        /* ADC Channel 4 PreSampling : Disabled */
        /* ADC Channel 5 PreSampling : Disabled */
        /* ADC Channel 6 PreSampling : Disabled */
        /* ADC Channel 7 PreSampling : Disabled */
        /* ADC Channel 8 PreSampling : Disabled */
        /* ADC Channel 9 PreSampling : Disabled */
        /* ADC Channel 10 PreSampling : Disabled */
        /* ADC Channel 11 PreSampling : Disabled */
        /* ADC Channel 12 PreSampling : Disabled */
        /* ADC Channel 13 PreSampling : Disabled */
        /* ADC Channel 14 PreSampling : Disabled */
        /* ADC Channel 15 PreSampling : Disabled */

/*-----------------------------------------------------------*/
/*        PreSampling Channel Enable Register(ADC_0_PSR1)        */
/*-----------------------------------------------------------*/
    ADC_0.PSR1.R = 0x00000000;
        /* ADC Channel 32 PreSampling : Disabled */
        /* ADC Channel 33 PreSampling : Disabled */
        /* ADC Channel 34 PreSampling : Disabled */
        /* ADC Channel 37 PreSampling : Disabled */
        /* ADC Channel 38 PreSampling : Disabled */
        /* ADC Channel 39 PreSampling : Disabled */
        /* ADC Channel 40 PreSampling : Disabled */
        /* ADC Channel 41 PreSampling : Disabled */
        /* ADC Channel 42 PreSampling : Disabled */
        /* ADC Channel 43 PreSampling : Disabled */
        /* ADC Channel 44 PreSampling : Disabled */
        /* ADC Channel 45 PreSampling : Disabled */
        /* ADC Channel 46 PreSampling : Disabled */
        /* ADC Channel 47 PreSampling : Disabled */

/*-----------------------------------------------------------*/
/*        PreSampling Channel Enable Register(ADC_0_PSR2)        */
/*-----------------------------------------------------------*/
    ADC_0.PSR2.R = 0x00000000;
        /* ADC Channel 64 PreSampling : Disabled */
        /* ADC Channel 65 PreSampling : Disabled */
        /* ADC Channel 66 PreSampling : Disabled */
        /* ADC Channel 67 PreSampling : Disabled */
        /* ADC Channel 68 PreSampling : Disabled */
        /* ADC Channel 69 PreSampling : Disabled */
        /* ADC Channel 70 PreSampling : Disabled */
        /* ADC Channel 71 PreSampling : Disabled */
        /* ADC Channel 72 PreSampling : Disabled */
        /* ADC Channel 73 PreSampling : Disabled */
        /* ADC Channel 74 PreSampling : Disabled */
        /* ADC Channel 75 PreSampling : Disabled */
        /* ADC Channel 76 PreSampling : Disabled */
        /* ADC Channel 77 PreSampling : Disabled */
        /* ADC Channel 78 PreSampling : Disabled */
        /* ADC Channel 79 PreSampling : Disabled */
        /* ADC Channel 80 PreSampling : Disabled */
        /* ADC Channel 81 PreSampling : Disabled */
        /* ADC Channel 82 PreSampling : Disabled */
        /* ADC Channel 83 PreSampling : Disabled */
        /* ADC Channel 84 PreSampling : Disabled */
        /* ADC Channel 85 PreSampling : Disabled */
        /* ADC Channel 86 PreSampling : Disabled */
        /* ADC Channel 87 PreSampling : Disabled */
        /* ADC Channel 88 PreSampling : Disabled */
        /* ADC Channel 89 PreSampling : Disabled */
        /* ADC Channel 90 PreSampling : Disabled */
        /* ADC Channel 91 PreSampling : Disabled */
        /* ADC Channel 92 PreSampling : Disabled */
        /* ADC Channel 93 PreSampling : Disabled */
        /* ADC Channel 94 PreSampling : Disabled */
        /* ADC Channel 95 PreSampling : Disabled */



/*-----------------------------------------------------------*/
/*  ADC Channel/Interrupt/Watchdog/DMA Configuration         */
/*-----------------------------------------------------------*/
        adc_0_channel_setup_fnc();            

/*-----------------------------------------------------------*/
/* ADC Trigger Configuration                                 */
/*-----------------------------------------------------------*/

        adc_0_trigger_setup_fnc();            
/*-----------------------------------------------------------*/
/* All Init that can be done in Normal State                 */
/*-----------------------------------------------------------*/

    ADC_0.MCR.B.ABORT =0x0;  
            /* ADC can start conversion */

}


void adc_1_init_fnc(void)
{

    ADC_1.MCR.B.PWDN = 0x1;
        /* Enter power down state */
    ADC_1.MCR.B.ABORT =0x1;
        /* Abort all conversion in process */

/*-----------------------------------------------------------*/
/* Clear All Interrupt Flags - Write 1 to Clear              */
/*-----------------------------------------------------------*/
    ADC_1.ISR.R = 0x0000001F; 
        /* B27: End of CTU Conversion EOCTU Flag */
        /* B28: End of Injected Channel Conversion JEOC Flag */
        /* B29: End of Injected Chain Conversion interrupt JECH Flag */
        /* B30: End of Channel Conversion EOC Flag */
        /* B31: End of Chain Conversion ECH Flag */

/*-----------------------------------------------------------*/
/* All Init that can be done in Power Down State             */
/*-----------------------------------------------------------*/
/*-----------------------------------------------------------*/
/* ADC General Setup                                         */
/*-----------------------------------------------------------*/
    ADC_1.MCR.R = 0x00000000;
        /* Conversion data Overwrite : Disabled */
        /* Conversion Data Aligned: Right Aligned */
        /* Conversion Mode Selected :  One Shot */
        /* Normal Start conversion Disabled :- can be configured using adc_normal_Start_fnc */
        /* Injected Start conversion Disabled :- can be configured using adc_injected_Start_fnc */
        /* Injection external trigger : Configured in adc_trigger_setup_fnc */
        /* Injection trigger edge : Configured in adc_trigger_setup_fnc */
        /* Cross Triggering Unit needs to be configured after CTU initialization */
        /* ADC Conversion clock selected as :  System Clock/2 */
        /* ADCLKSEL Init needs to be done in POWER DOWN State */
        /* Abort chain Conversion Disabled can be configured using adc_abort_chain_fnc */
        /* Abort Normal Conversion Disabled can be configured using adc_normal_stop_fnc */
        /* Auto Clock Off feature: Disabled */
        /* Power Down Mode is Enabled while ADC Clock initialization */


    ADC_1.MCR.B.PWDN = 0x1;
        /* ADC Power down state :Enabled */
    ADC_1.DSDR.R = 0x00000000;
        /* The Decode Signal Delay : 0 clock Cycle      */
    ADC_1.PDEDR.R = 0x00000000;
        /* The Power Down Delay : 0 clock Cycle      */



/*-----------------------------------------------------------*/
/*      Conversion Timing Register 0(ADC_1_CTR0)               */
/*-----------------------------------------------------------*/
    ADC_1.CTR0.R = 0x00000203;
        /* Phase duration Latch : 0 */
        /* Input Sampling Duration : 3 clock Cycles  */
        /* Input Comparison Duration : 1 clock Cycles*/
        /* Offset Shift Duration : 0 clock Cycles*/

/*-----------------------------------------------------------*/
/*      Conversion Timing Register 0(ADC_1_CTR1)               */
/*-----------------------------------------------------------*/
    ADC_1.CTR1.R = 0x00000203;
        /* Phase duration Latch : 0 */
        /* Input Sampling Duration : 3 clock Cycles  */
        /* Input Comparison Duration : 1 clock Cycles*/
/*-----------------------------------------------------------*/
/*   ADC PreSampling Configuration                           */
/*-----------------------------------------------------------*/
/*-----------------------------------------------------------*/
/*     PreSampling Control Register(ADC_1_PSCR)              */
/*-----------------------------------------------------------*/
    ADC_1.PSCR.R = 0x00000000;
        /* Sampling bypass : Disabled */
        /* PreSampling Voltage Selected for internal precision channels : V0    */
        /* PreSampling Voltage Selected for internal extended channels : V0    */


/*-----------------------------------------------------------*/
/*        PreSampling Channel Enable Register(ADC_1_PSR0)        */
/*-----------------------------------------------------------*/
    ADC_1.PSR0.R = 0x00000000;
        /* ADC Channel 0 PreSampling : Disabled */
        /* ADC Channel 1 PreSampling : Disabled */
        /* ADC Channel 2 PreSampling : Disabled */
        /* ADC Channel 3 PreSampling : Disabled */
        /* ADC Channel 4 PreSampling : Disabled */
        /* ADC Channel 5 PreSampling : Disabled */
        /* ADC Channel 6 PreSampling : Disabled */
        /* ADC Channel 7 PreSampling : Disabled */
        /* ADC Channel 8 PreSampling : Disabled */
        /* ADC Channel 9 PreSampling : Disabled */
        /* ADC Channel 10 PreSampling : Disabled */
        /* ADC Channel 11 PreSampling : Disabled */
        /* ADC Channel 12 PreSampling : Disabled */
        /* ADC Channel 13 PreSampling : Disabled */
        /* ADC Channel 14 PreSampling : Disabled */
        /* ADC Channel 15 PreSampling : Disabled */

/*-----------------------------------------------------------*/
/*        PreSampling Channel Enable Register(ADC_1_PSR1)        */
/*-----------------------------------------------------------*/
    ADC_1.PSR1.R = 0x00000000;
        /* ADC Channel 32 PreSampling : Disabled */
        /* ADC Channel 33 PreSampling : Disabled */
        /* ADC Channel 34 PreSampling : Disabled */
        /* ADC Channel 35 PreSampling : Disabled */
        /* ADC Channel 36 PreSampling : Disabled */
        /* ADC Channel 37 PreSampling : Disabled */
        /* ADC Channel 38 PreSampling : Disabled */
        /* ADC Channel 39 PreSampling : Disabled */



/*-----------------------------------------------------------*/
/*  ADC Channel/Interrupt/Watchdog/DMA Configuration         */
/*-----------------------------------------------------------*/
        adc_1_channel_setup_fnc();            

/*-----------------------------------------------------------*/
/* ADC Trigger Configuration                                 */
/*-----------------------------------------------------------*/

        adc_1_trigger_setup_fnc();            
/*-----------------------------------------------------------*/
/* All Init that can be done in Normal State                 */
/*-----------------------------------------------------------*/

    ADC_1.MCR.B.ABORT =0x0;  
            /* ADC can start conversion */

}

/*********************  CTU Initialization Function(s)  ************************/

void adc_ctuevent_init_fnc()
{


/*-----------------------------------------------------------*/
/* CTU Event Register 0(CTU_EVTCFGR0)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[0].R = 0x00000000;
        /* Trigger Mask for CTU Channel 0 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 0 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 0 */

/*-----------------------------------------------------------*/
/* CTU Event Register 1(CTU_EVTCFGR1)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[1].R = 0x00000000;
        /* Trigger Mask for CTU Channel 1 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 1 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 1 */

/*-----------------------------------------------------------*/
/* CTU Event Register 2(CTU_EVTCFGR2)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[2].R = 0x00000000;
        /* Trigger Mask for CTU Channel 2 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 2 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 2 */

/*-----------------------------------------------------------*/
/* CTU Event Register 3(CTU_EVTCFGR3)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[3].R = 0x00000000;
        /* Trigger Mask for CTU Channel 3 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 3 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 3 */

/*-----------------------------------------------------------*/
/* CTU Event Register 4(CTU_EVTCFGR4)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[4].R = 0x00000000;
        /* Trigger Mask for CTU Channel 4 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 4 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 4 */

/*-----------------------------------------------------------*/
/* CTU Event Register 5(CTU_EVTCFGR5)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[5].R = 0x00000000;
        /* Trigger Mask for CTU Channel 5 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 5 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 5 */

/*-----------------------------------------------------------*/
/* CTU Event Register 6(CTU_EVTCFGR6)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[6].R = 0x00000000;
        /* Trigger Mask for CTU Channel 6 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 6 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 6 */

/*-----------------------------------------------------------*/
/* CTU Event Register 7(CTU_EVTCFGR7)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[7].R = 0x00000000;
        /* Trigger Mask for CTU Channel 7 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 7 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 7 */

/*-----------------------------------------------------------*/
/* CTU Event Register 8(CTU_EVTCFGR8)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[8].R = 0x00000000;
        /* Trigger Mask for CTU Channel 8 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 8 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 8 */

/*-----------------------------------------------------------*/
/* CTU Event Register 9(CTU_EVTCFGR9)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[9].R = 0x00000000;
        /* Trigger Mask for CTU Channel 9 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 9 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 9 */

/*-----------------------------------------------------------*/
/* CTU Event Register 10(CTU_EVTCFGR10)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[10].R = 0x00000000;
        /* Trigger Mask for CTU Channel 10 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 10 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 10 */

/*-----------------------------------------------------------*/
/* CTU Event Register 11(CTU_EVTCFGR11)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[11].R = 0x00000000;
        /* Trigger Mask for CTU Channel 11 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 11 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 11 */

/*-----------------------------------------------------------*/
/* CTU Event Register 12(CTU_EVTCFGR12)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[12].R = 0x00000000;
        /* Trigger Mask for CTU Channel 12 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 12 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 12 */

/*-----------------------------------------------------------*/
/* CTU Event Register 13(CTU_EVTCFGR13)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[13].R = 0x00000000;
        /* Trigger Mask for CTU Channel 13 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 13 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 13 */

/*-----------------------------------------------------------*/
/* CTU Event Register 14(CTU_EVTCFGR14)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[14].R = 0x00000000;
        /* Trigger Mask for CTU Channel 14 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 14 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 14 */

/*-----------------------------------------------------------*/
/* CTU Event Register 15(CTU_EVTCFGR15)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[15].R = 0x00000000;
        /* Trigger Mask for CTU Channel 15 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 15 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 15 */

/*-----------------------------------------------------------*/
/* CTU Event Register 16(CTU_EVTCFGR16)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[16].R = 0x00000000;
        /* Trigger Mask for CTU Channel 16 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 16 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 16 */

/*-----------------------------------------------------------*/
/* CTU Event Register 17(CTU_EVTCFGR17)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[17].R = 0x00000000;
        /* Trigger Mask for CTU Channel 17 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 17 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 17 */

/*-----------------------------------------------------------*/
/* CTU Event Register 18(CTU_EVTCFGR18)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[18].R = 0x00000000;
        /* Trigger Mask for CTU Channel 18 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 18 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 18 */

/*-----------------------------------------------------------*/
/* CTU Event Register 19(CTU_EVTCFGR19)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[19].R = 0x00000000;
        /* Trigger Mask for CTU Channel 19 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 19 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 19 */

/*-----------------------------------------------------------*/
/* CTU Event Register 20(CTU_EVTCFGR20)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[20].R = 0x00000000;
        /* Trigger Mask for CTU Channel 20 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 20 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 20 */

/*-----------------------------------------------------------*/
/* CTU Event Register 21(CTU_EVTCFGR21)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[21].R = 0x00000000;
        /* Trigger Mask for CTU Channel 21 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 21 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 21 */

/*-----------------------------------------------------------*/
/* CTU Event Register 22(CTU_EVTCFGR22)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[22].R = 0x00000000;
        /* Trigger Mask for CTU Channel 22 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 22 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 22 */

/*-----------------------------------------------------------*/
/* CTU Event Register 23(CTU_EVTCFGR23)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[23].R = 0x00000000;
        /* Trigger Mask for CTU Channel 23 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 23 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : PIT_Channel 3 */

/*-----------------------------------------------------------*/
/* CTU Event Register 24(CTU_EVTCFGR24)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[24].R = 0x00000000;
        /* Trigger Mask for CTU Channel 24 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 24 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 24 */

/*-----------------------------------------------------------*/
/* CTU Event Register 25(CTU_EVTCFGR25)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[25].R = 0x00000000;
        /* Trigger Mask for CTU Channel 25 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 25 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 25 */

/*-----------------------------------------------------------*/
/* CTU Event Register 26(CTU_EVTCFGR26)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[26].R = 0x00000000;
        /* Trigger Mask for CTU Channel 26 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 26 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 26 */

/*-----------------------------------------------------------*/
/* CTU Event Register 27(CTU_EVTCFGR27)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[27].R = 0x00000000;
        /* Trigger Mask for CTU Channel 27 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 27 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 27 */

/*-----------------------------------------------------------*/
/* CTU Event Register 28(CTU_EVTCFGR28)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[28].R = 0x00000000;
        /* Trigger Mask for CTU Channel 28 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 28 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 28 */

/*-----------------------------------------------------------*/
/* CTU Event Register 29(CTU_EVTCFGR29)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[29].R = 0x00000000;
        /* Trigger Mask for CTU Channel 29 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 29 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 29 */

/*-----------------------------------------------------------*/
/* CTU Event Register 30(CTU_EVTCFGR30)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[30].R = 0x00000000;
        /* Trigger Mask for CTU Channel 30 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 30 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 30 */

/*-----------------------------------------------------------*/
/* CTU Event Register 31(CTU_EVTCFGR31)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[31].R = 0x00000000;
        /* Trigger Mask for CTU Channel 31 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 31 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS0_Channel 31 */

/*-----------------------------------------------------------*/
/* CTU Event Register 32(CTU_EVTCFGR32)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[32].R = 0x00000000;
        /* Trigger Mask for CTU Channel 32 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 32 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 0 */

/*-----------------------------------------------------------*/
/* CTU Event Register 33(CTU_EVTCFGR33)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[33].R = 0x00000000;
        /* Trigger Mask for CTU Channel 33 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 33 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 1 */

/*-----------------------------------------------------------*/
/* CTU Event Register 34(CTU_EVTCFGR34)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[34].R = 0x00000000;
        /* Trigger Mask for CTU Channel 34 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 34 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 2 */

/*-----------------------------------------------------------*/
/* CTU Event Register 35(CTU_EVTCFGR35)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[35].R = 0x00000000;
        /* Trigger Mask for CTU Channel 35 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 35 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 3 */

/*-----------------------------------------------------------*/
/* CTU Event Register 36(CTU_EVTCFGR36)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[36].R = 0x00000000;
        /* Trigger Mask for CTU Channel 36 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 36 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 4 */

/*-----------------------------------------------------------*/
/* CTU Event Register 37(CTU_EVTCFGR37)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[37].R = 0x00000000;
        /* Trigger Mask for CTU Channel 37 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 37 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 5 */

/*-----------------------------------------------------------*/
/* CTU Event Register 38(CTU_EVTCFGR38)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[38].R = 0x00000000;
        /* Trigger Mask for CTU Channel 38 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 38 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 6 */

/*-----------------------------------------------------------*/
/* CTU Event Register 39(CTU_EVTCFGR39)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[39].R = 0x00000000;
        /* Trigger Mask for CTU Channel 39 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 39 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 7 */

/*-----------------------------------------------------------*/
/* CTU Event Register 40(CTU_EVTCFGR40)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[40].R = 0x00000000;
        /* Trigger Mask for CTU Channel 40 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 40 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 8 */

/*-----------------------------------------------------------*/
/* CTU Event Register 41(CTU_EVTCFGR41)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[41].R = 0x00000000;
        /* Trigger Mask for CTU Channel 41 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 41 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 9 */

/*-----------------------------------------------------------*/
/* CTU Event Register 42(CTU_EVTCFGR42)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[42].R = 0x00000000;
        /* Trigger Mask for CTU Channel 42 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 42 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 10 */

/*-----------------------------------------------------------*/
/* CTU Event Register 43(CTU_EVTCFGR43)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[43].R = 0x00000000;
        /* Trigger Mask for CTU Channel 43 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 43 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 11 */

/*-----------------------------------------------------------*/
/* CTU Event Register 44(CTU_EVTCFGR44)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[44].R = 0x00000000;
        /* Trigger Mask for CTU Channel 44 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 44 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 12 */

/*-----------------------------------------------------------*/
/* CTU Event Register 45(CTU_EVTCFGR45)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[45].R = 0x00000000;
        /* Trigger Mask for CTU Channel 45 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 45 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 13 */

/*-----------------------------------------------------------*/
/* CTU Event Register 46(CTU_EVTCFGR46)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[46].R = 0x00000000;
        /* Trigger Mask for CTU Channel 46 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 46 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 14 */

/*-----------------------------------------------------------*/
/* CTU Event Register 47(CTU_EVTCFGR47)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[47].R = 0x00000000;
        /* Trigger Mask for CTU Channel 47 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 47 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 15 */

/*-----------------------------------------------------------*/
/* CTU Event Register 48(CTU_EVTCFGR48)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[48].R = 0x00000000;
        /* Trigger Mask for CTU Channel 48 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 48 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 16 */

/*-----------------------------------------------------------*/
/* CTU Event Register 49(CTU_EVTCFGR49)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[49].R = 0x00000000;
        /* Trigger Mask for CTU Channel 49 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 49 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 17 */

/*-----------------------------------------------------------*/
/* CTU Event Register 50(CTU_EVTCFGR50)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[50].R = 0x00000000;
        /* Trigger Mask for CTU Channel 50 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 50 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 18 */

/*-----------------------------------------------------------*/
/* CTU Event Register 51(CTU_EVTCFGR51)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[51].R = 0x00000000;
        /* Trigger Mask for CTU Channel 51 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 51 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 19 */

/*-----------------------------------------------------------*/
/* CTU Event Register 52(CTU_EVTCFGR52)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[52].R = 0x00000000;
        /* Trigger Mask for CTU Channel 52 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 52 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 20 */

/*-----------------------------------------------------------*/
/* CTU Event Register 53(CTU_EVTCFGR53)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[53].R = 0x00000000;
        /* Trigger Mask for CTU Channel 53 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 53 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 21 */

/*-----------------------------------------------------------*/
/* CTU Event Register 54(CTU_EVTCFGR54)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[54].R = 0x00000000;
        /* Trigger Mask for CTU Channel 54 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 54 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 22 */

/*-----------------------------------------------------------*/
/* CTU Event Register 55(CTU_EVTCFGR55)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[55].R = 0x00000000;
        /* Trigger Mask for CTU Channel 55 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 55 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : PIT_Channel 7 */

/*-----------------------------------------------------------*/
/* CTU Event Register 56(CTU_EVTCFGR56)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[56].R = 0x00000000;
        /* Trigger Mask for CTU Channel 56 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 56 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 24 */

/*-----------------------------------------------------------*/
/* CTU Event Register 57(CTU_EVTCFGR57)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[57].R = 0x00000000;
        /* Trigger Mask for CTU Channel 57 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 57 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 25 */

/*-----------------------------------------------------------*/
/* CTU Event Register 58(CTU_EVTCFGR58)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[58].R = 0x00000000;
        /* Trigger Mask for CTU Channel 58 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 58 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 26 */

/*-----------------------------------------------------------*/
/* CTU Event Register 59(CTU_EVTCFGR59)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[59].R = 0x00000000;
        /* Trigger Mask for CTU Channel 59 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 59 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 27 */

/*-----------------------------------------------------------*/
/* CTU Event Register 60(CTU_EVTCFGR60)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[60].R = 0x00000000;
        /* Trigger Mask for CTU Channel 60 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 60 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 28 */

/*-----------------------------------------------------------*/
/* CTU Event Register 61(CTU_EVTCFGR61)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[61].R = 0x00000000;
        /* Trigger Mask for CTU Channel 61 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 61 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 29 */

/*-----------------------------------------------------------*/
/* CTU Event Register 62(CTU_EVTCFGR62)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[62].R = 0x00000000;
        /* Trigger Mask for CTU Channel 62 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 62 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 30 */

/*-----------------------------------------------------------*/
/* CTU Event Register 63(CTU_EVTCFGR63)                        */
/*-----------------------------------------------------------*/
    CTUL.EVTCFGR[63].R = 0x00000000;
        /* Trigger Mask for CTU Channel 63 : Disabled */
        /* ADC Selected is : 10 Bit ADC 0*/
        /* CTU Channel 63 will Trigger ADC Channel : 0 */
        /* Source for the CTU trigger is : eMIOS1_Channel 31 */

    ADC_0.MCR.B.CTUEN= 0x0;
        /* Cross Triggering Unit for ADC0: Disabled */

    ADC_1.MCR.B.CTUEN= 0x0;
        /* Cross Triggering Unit for ADC1 : Disabled */
}

/*********************  Channel/Interrupt/Watchdog/DMA Initialization Function(s) ************************/

void adc_0_channel_setup_fnc()
{
/*-----------------------------------------------------------*/
/*    Interrupt Mask Register(ADC_IMR)                       */
/*-----------------------------------------------------------*/

    ADC_0.IMR.R = 0x00000000;
        /* End of Chain Conversion Interrupt : Disabled */
        /* End of Injected Chain Interrupt : Disabled */
        /* End of Channel Conversion Interrupt : Disabled */
        /* End of Injected Channel Interrupt : Disabled */
        /* End of CTU conversion Interrupt : Disabled */

/*-----------------------------------------------------------*/
/*        channel Interrupt Mask Register 0 ADC_0_CIMR0)    */
/*-----------------------------------------------------------*/
    ADC_0.CIMR0.R = 0x00000000;
        /* ADC Channel 0 Interrupt : Disabled */
        /* ADC Channel 1 Interrupt : Disabled */
        /* ADC Channel 2 Interrupt : Disabled */
        /* ADC Channel 3 Interrupt : Disabled */
        /* ADC Channel 4 Interrupt : Disabled */
        /* ADC Channel 5 Interrupt : Disabled */
        /* ADC Channel 6 Interrupt : Disabled */
        /* ADC Channel 7 Interrupt : Disabled */
        /* ADC Channel 8 Interrupt : Disabled */
        /* ADC Channel 9 Interrupt : Disabled */
        /* ADC Channel 10 Interrupt : Disabled */
        /* ADC Channel 11 Interrupt : Disabled */
        /* ADC Channel 12 Interrupt : Disabled */
        /* ADC Channel 13 Interrupt : Disabled */
        /* ADC Channel 14 Interrupt : Disabled */
        /* ADC Channel 15 Interrupt : Disabled */

/*-----------------------------------------------------------*/
/*        channel Interrupt Mask Register 1 ADC_0_CIMR1)    */
/*-----------------------------------------------------------*/
    ADC_0.CIMR1.R = 0x00000000;
        /* ADC Channel 32 Interrupt : Disabled */
        /* ADC Channel 33 Interrupt : Disabled */
        /* ADC Channel 34 Interrupt : Disabled */
        /* ADC Channel 37 Interrupt : Disabled */
        /* ADC Channel 38 Interrupt : Disabled */
        /* ADC Channel 39 Interrupt : Disabled */
        /* ADC Channel 40 Interrupt : Disabled */
        /* ADC Channel 41 Interrupt : Disabled */
        /* ADC Channel 42 Interrupt : Disabled */
        /* ADC Channel 43 Interrupt : Disabled */
        /* ADC Channel 44 Interrupt : Disabled */
        /* ADC Channel 45 Interrupt : Disabled */
        /* ADC Channel 46 Interrupt : Disabled */
        /* ADC Channel 47 Interrupt : Disabled */

/*-----------------------------------------------------------*/
/*        channel Interrupt Mask Register 2 ADC_0_CIMR2)    */
/*-----------------------------------------------------------*/
    ADC_0.CIMR2.R = 0x00000000;
        /* ADC Channel 64 Interrupt : Disabled */
        /* ADC Channel 65 Interrupt : Disabled */
        /* ADC Channel 66 Interrupt : Disabled */
        /* ADC Channel 67 Interrupt : Disabled */
        /* ADC Channel 68 Interrupt : Disabled */
        /* ADC Channel 69 Interrupt : Disabled */
        /* ADC Channel 70 Interrupt : Disabled */
        /* ADC Channel 71 Interrupt : Disabled */
        /* ADC Channel 72 Interrupt : Disabled */
        /* ADC Channel 73 Interrupt : Disabled */
        /* ADC Channel 74 Interrupt : Disabled */
        /* ADC Channel 75 Interrupt : Disabled */
        /* ADC Channel 76 Interrupt : Disabled */
        /* ADC Channel 77 Interrupt : Disabled */
        /* ADC Channel 78 Interrupt : Disabled */
        /* ADC Channel 79 Interrupt : Disabled */
        /* ADC Channel 80 Interrupt : Disabled */
        /* ADC Channel 81 Interrupt : Disabled */
        /* ADC Channel 82 Interrupt : Disabled */
        /* ADC Channel 83 Interrupt : Disabled */
        /* ADC Channel 84 Interrupt : Disabled */
        /* ADC Channel 85 Interrupt : Disabled */
        /* ADC Channel 86 Interrupt : Disabled */
        /* ADC Channel 87 Interrupt : Disabled */
        /* ADC Channel 88 Interrupt : Disabled */
        /* ADC Channel 89 Interrupt : Disabled */
        /* ADC Channel 90 Interrupt : Disabled */
        /* ADC Channel 91 Interrupt : Disabled */
        /* ADC Channel 92 Interrupt : Disabled */
        /* ADC Channel 93 Interrupt : Disabled */
        /* ADC Channel 94 Interrupt : Disabled */
        /* ADC Channel 95 Interrupt : Disabled */

/*-----------------------------------------------------------*/
/*      ADC 0 Channel Setup                                  */
/*-----------------------------------------------------------*/

/*-----------------------------------------------------------*/
/* Normal Channel Conversion Mask Register 0(ADC_0_NCMR0)      */
/*-----------------------------------------------------------*/
    ADC_0.NCMR0.R = 0x00000003;
        /* ADC Channel 0 in Normal Mode : Enabled */
        /* ADC Channel 1 in Normal Mode : Enabled */
        /* ADC Channel 2 in Normal Mode : Disabled */
        /* ADC Channel 3 in Normal Mode : Disabled */
        /* ADC Channel 4 in Normal Mode : Disabled */
        /* ADC Channel 5 in Normal Mode : Disabled */
        /* ADC Channel 6 in Normal Mode : Disabled */
        /* ADC Channel 7 in Normal Mode : Disabled */
        /* ADC Channel 8 in Normal Mode : Disabled */
        /* ADC Channel 9 in Normal Mode : Disabled */
        /* ADC Channel 10 in Normal Mode : Disabled */
        /* ADC Channel 11 in Normal Mode : Disabled */
        /* ADC Channel 12 in Normal Mode : Disabled */
        /* ADC Channel 13 in Normal Mode : Disabled */
        /* ADC Channel 14 in Normal Mode : Disabled */
        /* ADC Channel 15 in Normal Mode : Disabled */


/*-----------------------------------------------------------*/
/* Normal Channel Conversion Mask Register 1(ADC_0_NCMR1)      */
/*-----------------------------------------------------------*/
    ADC_0.NCMR1.R = 0x00000000;
        /* ADC Channel 32 in Normal Mode : Disabled */
        /* ADC Channel 33 in Normal Mode : Disabled */
        /* ADC Channel 34 in Normal Mode : Disabled */
        /* ADC Channel 37 in Normal Mode : Disabled */
        /* ADC Channel 38 in Normal Mode : Disabled */
        /* ADC Channel 39 in Normal Mode : Disabled */
        /* ADC Channel 40 in Normal Mode : Disabled */
        /* ADC Channel 41 in Normal Mode : Disabled */
        /* ADC Channel 42 in Normal Mode : Disabled */
        /* ADC Channel 43 in Normal Mode : Disabled */
        /* ADC Channel 44 in Normal Mode : Disabled */
        /* ADC Channel 45 in Normal Mode : Disabled */
        /* ADC Channel 46 in Normal Mode : Disabled */
        /* ADC Channel 47 in Normal Mode : Disabled */


/*-----------------------------------------------------------*/
/* Normal Channel Conversion Mask Register 2(ADC_0_NCMR2)      */
/*-----------------------------------------------------------*/
    ADC_0.NCMR2.R = 0x00000000;
        /* ADC Channel 64 in Normal Mode : Disabled */
        /* ADC Channel 65 in Normal Mode : Disabled */
        /* ADC Channel 66 in Normal Mode : Disabled */
        /* ADC Channel 67 in Normal Mode : Disabled */
        /* ADC Channel 68 in Normal Mode : Disabled */
        /* ADC Channel 69 in Normal Mode : Disabled */
        /* ADC Channel 70 in Normal Mode : Disabled */
        /* ADC Channel 71 in Normal Mode : Disabled */
        /* ADC Channel 72 in Normal Mode : Disabled */
        /* ADC Channel 73 in Normal Mode : Disabled */
        /* ADC Channel 74 in Normal Mode : Disabled */
        /* ADC Channel 75 in Normal Mode : Disabled */
        /* ADC Channel 76 in Normal Mode : Disabled */
        /* ADC Channel 77 in Normal Mode : Disabled */
        /* ADC Channel 78 in Normal Mode : Disabled */
        /* ADC Channel 79 in Normal Mode : Disabled */
        /* ADC Channel 80 in Normal Mode : Disabled */
        /* ADC Channel 81 in Normal Mode : Disabled */
        /* ADC Channel 82 in Normal Mode : Disabled */
        /* ADC Channel 83 in Normal Mode : Disabled */
        /* ADC Channel 84 in Normal Mode : Disabled */
        /* ADC Channel 85 in Normal Mode : Disabled */
        /* ADC Channel 86 in Normal Mode : Disabled */
        /* ADC Channel 87 in Normal Mode : Disabled */
        /* ADC Channel 88 in Normal Mode : Disabled */
        /* ADC Channel 89 in Normal Mode : Disabled */
        /* ADC Channel 90 in Normal Mode : Disabled */
        /* ADC Channel 91 in Normal Mode : Disabled */
        /* ADC Channel 92 in Normal Mode : Disabled */
        /* ADC Channel 93 in Normal Mode : Disabled */
        /* ADC Channel 94 in Normal Mode : Disabled */
        /* ADC Channel 95 in Normal Mode : Disabled */


/*-----------------------------------------------------------*/
/* Injected Channel Conversion Mask Register 0(ADC_0_JCMR0)    */
/*-----------------------------------------------------------*/
    ADC_0.JCMR0.R = 0x00000000;
        /* ADC Channel 0 in Injected Mode : Disabled */
        /* ADC Channel 1 in Injected Mode : Disabled */
        /* ADC Channel 2 in Injected Mode : Disabled */
        /* ADC Channel 3 in Injected Mode : Disabled */
        /* ADC Channel 4 in Injected Mode : Disabled */
        /* ADC Channel 5 in Injected Mode : Disabled */
        /* ADC Channel 6 in Injected Mode : Disabled */
        /* ADC Channel 7 in Injected Mode : Disabled */
        /* ADC Channel 8 in Injected Mode : Disabled */
        /* ADC Channel 9 in Injected Mode : Disabled */
        /* ADC Channel 10 in Injected Mode : Disabled */
        /* ADC Channel 11 in Injected Mode : Disabled */
        /* ADC Channel 12 in Injected Mode : Disabled */
        /* ADC Channel 13 in Injected Mode : Disabled */
        /* ADC Channel 14 in Injected Mode : Disabled */
        /* ADC Channel 15 in Injected Mode : Disabled */


/*-----------------------------------------------------------*/
/* Injected Channel Conversion Mask Register 1(ADC_0_JCMR1)    */
/*-----------------------------------------------------------*/
    ADC_0.JCMR1.R = 0x00000000;
        /* ADC Channel 32 in Injected Mode : Disabled */
        /* ADC Channel 33 in Injected Mode : Disabled */
        /* ADC Channel 34 in Injected Mode : Disabled */
        /* ADC Channel 37 in Injected Mode : Disabled */
        /* ADC Channel 38 in Injected Mode : Disabled */
        /* ADC Channel 39 in Injected Mode : Disabled */
        /* ADC Channel 40 in Injected Mode : Disabled */
        /* ADC Channel 41 in Injected Mode : Disabled */
        /* ADC Channel 42 in Injected Mode : Disabled */
        /* ADC Channel 43 in Injected Mode : Disabled */
        /* ADC Channel 44 in Injected Mode : Disabled */
        /* ADC Channel 45 in Injected Mode : Disabled */
        /* ADC Channel 46 in Injected Mode : Disabled */
        /* ADC Channel 47 in Injected Mode : Disabled */


/*-----------------------------------------------------------*/
/* Injected Channel Conversion Mask Register 2(ADC_0_JCMR2)    */
/*-----------------------------------------------------------*/
    ADC_0.JCMR2.R = 0x00000000;
        /* ADC Channel 64 in Injected Mode : Disabled */
        /* ADC Channel 65 in Injected Mode : Disabled */
        /* ADC Channel 66 in Injected Mode : Disabled */
        /* ADC Channel 67 in Injected Mode : Disabled */
        /* ADC Channel 68 in Injected Mode : Disabled */
        /* ADC Channel 69 in Injected Mode : Disabled */
        /* ADC Channel 70 in Injected Mode : Disabled */
        /* ADC Channel 71 in Injected Mode : Disabled */
        /* ADC Channel 72 in Injected Mode : Disabled */
        /* ADC Channel 73 in Injected Mode : Disabled */
        /* ADC Channel 74 in Injected Mode : Disabled */
        /* ADC Channel 75 in Injected Mode : Disabled */
        /* ADC Channel 76 in Injected Mode : Disabled */
        /* ADC Channel 77 in Injected Mode : Disabled */
        /* ADC Channel 78 in Injected Mode : Disabled */
        /* ADC Channel 79 in Injected Mode : Disabled */
        /* ADC Channel 80 in Injected Mode : Disabled */
        /* ADC Channel 81 in Injected Mode : Disabled */
        /* ADC Channel 82 in Injected Mode : Disabled */
        /* ADC Channel 83 in Injected Mode : Disabled */
        /* ADC Channel 84 in Injected Mode : Disabled */
        /* ADC Channel 85 in Injected Mode : Disabled */
        /* ADC Channel 86 in Injected Mode : Disabled */
        /* ADC Channel 87 in Injected Mode : Disabled */
        /* ADC Channel 88 in Injected Mode : Disabled */
        /* ADC Channel 89 in Injected Mode : Disabled */
        /* ADC Channel 90 in Injected Mode : Disabled */
        /* ADC Channel 91 in Injected Mode : Disabled */
        /* ADC Channel 92 in Injected Mode : Disabled */
        /* ADC Channel 93 in Injected Mode : Disabled */
        /* ADC Channel 94 in Injected Mode : Disabled */
        /* ADC Channel 95 in Injected Mode : Disabled */


/*-----------------------------------------------------------*/
/*    DMA Register (ADC_0_DMAE)*/
/*-----------------------------------------------------------*/

    ADC_0.DMAE.R = 0x00000000;
        /* DMA request cleared by: Acknowledge from INT*/
        /* DMA feature: Disabled*/

/*-----------------------------------------------------------*/
/* DMA Channel Select Register 0(ADC_0_DMAR0)    */
/*-----------------------------------------------------------*/
    ADC_0.DMAR0.R = 0x00000000;
        /* DMA for ADC channel 0 : Disabled */
        /* DMA for ADC channel 1 : Disabled */
        /* DMA for ADC channel 2 : Disabled */
        /* DMA for ADC channel 3 : Disabled */
        /* DMA for ADC channel 4 : Disabled */
        /* DMA for ADC channel 5 : Disabled */
        /* DMA for ADC channel 6 : Disabled */
        /* DMA for ADC channel 7 : Disabled */
        /* DMA for ADC channel 8 : Disabled */
        /* DMA for ADC channel 9 : Disabled */
        /* DMA for ADC channel 10 : Disabled */
        /* DMA for ADC channel 11 : Disabled */
        /* DMA for ADC channel 12 : Disabled */
        /* DMA for ADC channel 13 : Disabled */
        /* DMA for ADC channel 14 : Disabled */
        /* DMA for ADC channel 15 : Disabled */


/*-----------------------------------------------------------*/
/* DMA Channel Select Register 1(ADC_0_DMAR1)    */
/*-----------------------------------------------------------*/
    ADC_0.DMAR1.R = 0x00000000;
        /* DMA for ADC channel 32 : Disabled */
        /* DMA for ADC channel 33 : Disabled */
        /* DMA for ADC channel 34 : Disabled */
        /* DMA for ADC channel 37 : Disabled */
        /* DMA for ADC channel 38 : Disabled */
        /* DMA for ADC channel 39 : Disabled */
        /* DMA for ADC channel 40 : Disabled */
        /* DMA for ADC channel 41 : Disabled */
        /* DMA for ADC channel 42 : Disabled */
        /* DMA for ADC channel 43 : Disabled */
        /* DMA for ADC channel 44 : Disabled */
        /* DMA for ADC channel 45 : Disabled */
        /* DMA for ADC channel 46 : Disabled */
        /* DMA for ADC channel 47 : Disabled */


/*-----------------------------------------------------------*/
/* DMA Channel Select Register 2(ADC_0_DMAR2)    */
/*-----------------------------------------------------------*/
    ADC_0.DMAR2.R = 0x00000000;
        /* DMA for ADC channel 64 : Disabled */
        /* DMA for ADC channel 65 : Disabled */
        /* DMA for ADC channel 66 : Disabled */
        /* DMA for ADC channel 67 : Disabled */
        /* DMA for ADC channel 68 : Disabled */
        /* DMA for ADC channel 69 : Disabled */
        /* DMA for ADC channel 70 : Disabled */
        /* DMA for ADC channel 71 : Disabled */
        /* DMA for ADC channel 72 : Disabled */
        /* DMA for ADC channel 73 : Disabled */
        /* DMA for ADC channel 74 : Disabled */
        /* DMA for ADC channel 75 : Disabled */
        /* DMA for ADC channel 76 : Disabled */
        /* DMA for ADC channel 77 : Disabled */
        /* DMA for ADC channel 78 : Disabled */
        /* DMA for ADC channel 79 : Disabled */
        /* DMA for ADC channel 80 : Disabled */
        /* DMA for ADC channel 81 : Disabled */
        /* DMA for ADC channel 82 : Disabled */
        /* DMA for ADC channel 83 : Disabled */
        /* DMA for ADC channel 84 : Disabled */
        /* DMA for ADC channel 85 : Disabled */
        /* DMA for ADC channel 86 : Disabled */
        /* DMA for ADC channel 87 : Disabled */
        /* DMA for ADC channel 88 : Disabled */
        /* DMA for ADC channel 89 : Disabled */
        /* DMA for ADC channel 90 : Disabled */
        /* DMA for ADC channel 91 : Disabled */
        /* DMA for ADC channel 92 : Disabled */
        /* DMA for ADC channel 93 : Disabled */
        /* DMA for ADC channel 94 : Disabled */
        /* DMA for ADC channel 95 : Disabled */


/*-----------------------------------------------------------*/
/*     Threshold Register 0 (ADC_0_THRHLR0)                    */
/*-----------------------------------------------------------*/
    ADC_0.THRHLR[0].R = 0x03FF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 1023 */

/*-----------------------------------------------------------*/
/*     Threshold Register 1 (ADC_0_THRHLR1)                    */
/*-----------------------------------------------------------*/
    ADC_0.THRHLR[1].R = 0x03FF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 1023 */

/*-----------------------------------------------------------*/
/*     Threshold Register 2 (ADC_0_THRHLR2)                    */
/*-----------------------------------------------------------*/
    ADC_0.THRHLR[2].R = 0x03FF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 1023 */

/*-----------------------------------------------------------*/
/*     Threshold Register 3 (ADC_0_THRHLR3)                    */
/*-----------------------------------------------------------*/
    ADC_0.THRHLR[3].R = 0x03FF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 1023 */

/*-----------------------------------------------------------*/
/*     Threshold Register 4 (ADC_0_THRHLR4)                    */
/*-----------------------------------------------------------*/
    ADC_0.THRHLR4.R = 0x03FF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 1023 */

/*-----------------------------------------------------------*/
/*     Threshold Register 5 (ADC_0_THRHLR5)                    */
/*-----------------------------------------------------------*/
    ADC_0.THRHLR5.R = 0x03FF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 1023 */

/*-----------------------------------------------------------*/
/* Channel Watchdog Select Register 0(ADC_0_CWSELR)*/
/*-----------------------------------------------------------*/

    ADC_0.CWSELR0.R = 0x00000000;
        /* Watchdog selected for channel 0 : THRHLR0*/
        /* Watchdog selected for channel 1 : THRHLR0*/
        /* Watchdog selected for channel 2 : THRHLR0*/
        /* Watchdog selected for channel 3 : THRHLR0*/
        /* Watchdog selected for channel 4 : THRHLR0*/
        /* Watchdog selected for channel 5 : THRHLR0*/
        /* Watchdog selected for channel 6 : THRHLR0*/
        /* Watchdog selected for channel 7 : THRHLR0*/

    ADC_0.CWSELR1.R = 0x00000000;
        /* Watchdog selected for channel 8 : THRHLR0*/
        /* Watchdog selected for channel 9 : THRHLR0*/
        /* Watchdog selected for channel 10 : THRHLR0*/
        /* Watchdog selected for channel 11 : THRHLR0*/
        /* Watchdog selected for channel 12 : THRHLR0*/
        /* Watchdog selected for channel 13 : THRHLR0*/
        /* Watchdog selected for channel 14 : THRHLR0*/
        /* Watchdog selected for channel 15 : THRHLR0*/

    ADC_0.CWSELR4.R = 0x00000000;
        /* Watchdog selected for channel 32 : THRHLR0*/
        /* Watchdog selected for channel 33 : THRHLR0*/
        /* Watchdog selected for channel 34 : THRHLR0*/
        /* Watchdog selected for channel 37 : THRHLR0*/
        /* Watchdog selected for channel 38 : THRHLR0*/
        /* Watchdog selected for channel 39 : THRHLR0*/

    ADC_0.CWSELR5.R = 0x00000000;
        /* Watchdog selected for channel 40 : THRHLR0*/
        /* Watchdog selected for channel 41 : THRHLR0*/
        /* Watchdog selected for channel 42 : THRHLR0*/
        /* Watchdog selected for channel 43 : THRHLR0*/
        /* Watchdog selected for channel 44 : THRHLR0*/
        /* Watchdog selected for channel 45 : THRHLR0*/
        /* Watchdog selected for channel 46 : THRHLR0*/
        /* Watchdog selected for channel 47 : THRHLR0*/

    ADC_0.CWSELR8.R = 0x00000000;
        /* Watchdog selected for channel 64 : THRHLR0*/
        /* Watchdog selected for channel 65 : THRHLR0*/
        /* Watchdog selected for channel 66 : THRHLR0*/
        /* Watchdog selected for channel 67 : THRHLR0*/
        /* Watchdog selected for channel 68 : THRHLR0*/
        /* Watchdog selected for channel 69 : THRHLR0*/
        /* Watchdog selected for channel 70 : THRHLR0*/
        /* Watchdog selected for channel 71 : THRHLR0*/

    ADC_0.CWSELR9.R = 0x00000000;
        /* Watchdog selected for channel 72 : THRHLR0*/
        /* Watchdog selected for channel 73 : THRHLR0*/
        /* Watchdog selected for channel 74 : THRHLR0*/
        /* Watchdog selected for channel 75 : THRHLR0*/
        /* Watchdog selected for channel 76 : THRHLR0*/
        /* Watchdog selected for channel 77 : THRHLR0*/
        /* Watchdog selected for channel 78 : THRHLR0*/
        /* Watchdog selected for channel 79 : THRHLR0*/

    ADC_0.CWSELR10.R = 0x00000000;
        /* Watchdog selected for channel 80 : THRHLR0*/
        /* Watchdog selected for channel 81 : THRHLR0*/
        /* Watchdog selected for channel 82 : THRHLR0*/
        /* Watchdog selected for channel 83 : THRHLR0*/
        /* Watchdog selected for channel 84 : THRHLR0*/
        /* Watchdog selected for channel 85 : THRHLR0*/
        /* Watchdog selected for channel 86 : THRHLR0*/
        /* Watchdog selected for channel 87 : THRHLR0*/

    ADC_0.CWSELR11.R = 0x00000000;
        /* Watchdog selected for channel 88 : THRHLR0*/
        /* Watchdog selected for channel 89 : THRHLR0*/
        /* Watchdog selected for channel 90 : THRHLR0*/
        /* Watchdog selected for channel 91 : THRHLR0*/
        /* Watchdog selected for channel 92 : THRHLR0*/
        /* Watchdog selected for channel 93 : THRHLR0*/
        /* Watchdog selected for channel 94 : THRHLR0*/
        /* Watchdog selected for channel 95 : THRHLR0*/

/*-----------------------------------------------------------*/
/* Channel Watchdog Enable Register 0 (ADC_0_CWENR0)*/
/*-----------------------------------------------------------*/
    ADC_0.CWENR[0].R = 0x00000000;
        /* Watchdog enable for channel 0 : Disabled */
        /* Watchdog enable for channel 1 : Disabled */
        /* Watchdog enable for channel 2 : Disabled */
        /* Watchdog enable for channel 3 : Disabled */
        /* Watchdog enable for channel 4 : Disabled */
        /* Watchdog enable for channel 5 : Disabled */
        /* Watchdog enable for channel 6 : Disabled */
        /* Watchdog enable for channel 7 : Disabled */
        /* Watchdog enable for channel 8 : Disabled */
        /* Watchdog enable for channel 9 : Disabled */
        /* Watchdog enable for channel 10 : Disabled */
        /* Watchdog enable for channel 11 : Disabled */
        /* Watchdog enable for channel 12 : Disabled */
        /* Watchdog enable for channel 13 : Disabled */
        /* Watchdog enable for channel 14 : Disabled */
        /* Watchdog enable for channel 15 : Disabled */

/*-----------------------------------------------------------*/
/* Channel Watchdog Enable Register 1 (ADC_0_CWENR1)*/
/*-----------------------------------------------------------*/
    ADC_0.CWENR[1].R = 0x00000000;
        /* Watchdog enable for channel 32 : Disabled */
        /* Watchdog enable for channel 33 : Disabled */
        /* Watchdog enable for channel 34 : Disabled */
        /* Watchdog enable for channel 37 : Disabled */
        /* Watchdog enable for channel 38 : Disabled */
        /* Watchdog enable for channel 39 : Disabled */
        /* Watchdog enable for channel 40 : Disabled */
        /* Watchdog enable for channel 41 : Disabled */
        /* Watchdog enable for channel 42 : Disabled */
        /* Watchdog enable for channel 43 : Disabled */
        /* Watchdog enable for channel 44 : Disabled */
        /* Watchdog enable for channel 45 : Disabled */
        /* Watchdog enable for channel 46 : Disabled */
        /* Watchdog enable for channel 47 : Disabled */

/*-----------------------------------------------------------*/
/* Channel Watchdog Enable Register 2 (ADC_0_CWENR2)*/
/*-----------------------------------------------------------*/
    ADC_0.CWENR[2].R = 0x00000000;
        /* Watchdog enable for channel 64 : Disabled */
        /* Watchdog enable for channel 65 : Disabled */
        /* Watchdog enable for channel 66 : Disabled */
        /* Watchdog enable for channel 67 : Disabled */
        /* Watchdog enable for channel 68 : Disabled */
        /* Watchdog enable for channel 69 : Disabled */
        /* Watchdog enable for channel 70 : Disabled */
        /* Watchdog enable for channel 71 : Disabled */
        /* Watchdog enable for channel 72 : Disabled */
        /* Watchdog enable for channel 73 : Disabled */
        /* Watchdog enable for channel 74 : Disabled */
        /* Watchdog enable for channel 75 : Disabled */
        /* Watchdog enable for channel 76 : Disabled */
        /* Watchdog enable for channel 77 : Disabled */
        /* Watchdog enable for channel 78 : Disabled */
        /* Watchdog enable for channel 79 : Disabled */
        /* Watchdog enable for channel 80 : Disabled */
        /* Watchdog enable for channel 81 : Disabled */
        /* Watchdog enable for channel 82 : Disabled */
        /* Watchdog enable for channel 83 : Disabled */
        /* Watchdog enable for channel 84 : Disabled */
        /* Watchdog enable for channel 85 : Disabled */
        /* Watchdog enable for channel 86 : Disabled */
        /* Watchdog enable for channel 87 : Disabled */
        /* Watchdog enable for channel 88 : Disabled */
        /* Watchdog enable for channel 89 : Disabled */
        /* Watchdog enable for channel 90 : Disabled */
        /* Watchdog enable for channel 91 : Disabled */
        /* Watchdog enable for channel 92 : Disabled */
        /* Watchdog enable for channel 93 : Disabled */
        /* Watchdog enable for channel 94 : Disabled */
        /* Watchdog enable for channel 95 : Disabled */

/*-----------------------------------------------------------*/
/* Watchdog Threshold Interrupt Mask Register (ADC_0_WTIMR)    */
/*-----------------------------------------------------------*/
    ADC_0.WTIMR.R = 0x00000000;
        /* Low Threshold Interrupt for Watchdog 0 : Disabled */
        /* High Threshold Interrupt for Watchdog 0 : Disabled */
        /* Low Threshold Interrupt for Watchdog 1 : Disabled */
        /* High Threshold Interrupt for Watchdog 1 : Disabled */
        /* Low Threshold Interrupt for Watchdog 2 : Disabled */
        /* High Threshold Interrupt for Watchdog 2 : Disabled */
        /* Low Threshold Interrupt for Watchdog 3 : Disabled */
        /* High Threshold Interrupt for Watchdog 3 : Disabled */
        /* Low Threshold Interrupt for Watchdog 4 : Disabled */
        /* High Threshold Interrupt for Watchdog 4 : Disabled */
        /* Low Threshold Interrupt for Watchdog 5 : Disabled */
        /* High Threshold Interrupt for Watchdog 5 : Disabled */

}


/*********************  Channel/Interrupt/Watchdog/DMA Initialization Function(s) ************************/

void adc_1_channel_setup_fnc()
{
/*-----------------------------------------------------------*/
/*    Interrupt Mask Register(ADC_IMR)                       */
/*-----------------------------------------------------------*/

    ADC_1.IMR.R = 0x00000000;
        /* End of Chain Conversion Interrupt : Disabled */
        /* End of Injected Chain Interrupt : Disabled */
        /* End of Channel Conversion Interrupt : Disabled */
        /* End of Injected Channel Interrupt : Disabled */
        /* End of CTU conversion Interrupt : Disabled */

/*-----------------------------------------------------------*/
/*        channel Interrupt Mask Register 0 ADC_1_CIMR0)    */
/*-----------------------------------------------------------*/
    ADC_1.CIMR0.R = 0x00000000;
        /* ADC Channel 0 Interrupt : Disabled */
        /* ADC Channel 1 Interrupt : Disabled */
        /* ADC Channel 2 Interrupt : Disabled */
        /* ADC Channel 3 Interrupt : Disabled */
        /* ADC Channel 4 Interrupt : Disabled */
        /* ADC Channel 5 Interrupt : Disabled */
        /* ADC Channel 6 Interrupt : Disabled */
        /* ADC Channel 7 Interrupt : Disabled */
        /* ADC Channel 8 Interrupt : Disabled */
        /* ADC Channel 9 Interrupt : Disabled */
        /* ADC Channel 10 Interrupt : Disabled */
        /* ADC Channel 11 Interrupt : Disabled */
        /* ADC Channel 12 Interrupt : Disabled */
        /* ADC Channel 13 Interrupt : Disabled */
        /* ADC Channel 14 Interrupt : Disabled */
        /* ADC Channel 15 Interrupt : Disabled */

/*-----------------------------------------------------------*/
/*        channel Interrupt Mask Register 1 ADC_1_CIMR1)    */
/*-----------------------------------------------------------*/
    ADC_1.CIMR1.R = 0x00000000;
        /* ADC Channel 32 Interrupt : Disabled */
        /* ADC Channel 33 Interrupt : Disabled */
        /* ADC Channel 34 Interrupt : Disabled */
        /* ADC Channel 35 Interrupt : Disabled */
        /* ADC Channel 36 Interrupt : Disabled */
        /* ADC Channel 37 Interrupt : Disabled */
        /* ADC Channel 38 Interrupt : Disabled */
        /* ADC Channel 39 Interrupt : Disabled */

/*-----------------------------------------------------------*/
/*      ADC 0 Channel Setup                                  */
/*-----------------------------------------------------------*/

/*-----------------------------------------------------------*/
/* Normal Channel Conversion Mask Register 0(ADC_1_NCMR0)      */
/*-----------------------------------------------------------*/
    ADC_1.NCMR0.R = 0x00000000;
        /* ADC Channel 0 in Normal Mode : Disabled */
        /* ADC Channel 1 in Normal Mode : Disabled */
        /* ADC Channel 2 in Normal Mode : Disabled */
        /* ADC Channel 3 in Normal Mode : Disabled */
        /* ADC Channel 4 in Normal Mode : Disabled */
        /* ADC Channel 5 in Normal Mode : Disabled */
        /* ADC Channel 6 in Normal Mode : Disabled */
        /* ADC Channel 7 in Normal Mode : Disabled */
        /* ADC Channel 8 in Normal Mode : Disabled */
        /* ADC Channel 9 in Normal Mode : Disabled */
        /* ADC Channel 10 in Normal Mode : Disabled */
        /* ADC Channel 11 in Normal Mode : Disabled */
        /* ADC Channel 12 in Normal Mode : Disabled */
        /* ADC Channel 13 in Normal Mode : Disabled */
        /* ADC Channel 14 in Normal Mode : Disabled */
        /* ADC Channel 15 in Normal Mode : Disabled */


/*-----------------------------------------------------------*/
/* Normal Channel Conversion Mask Register 1(ADC_1_NCMR1)      */
/*-----------------------------------------------------------*/
    ADC_1.NCMR1.R = 0x00000000;
        /* ADC Channel 32 in Normal Mode : Disabled */
        /* ADC Channel 33 in Normal Mode : Disabled */
        /* ADC Channel 34 in Normal Mode : Disabled */
        /* ADC Channel 37 in Normal Mode : Disabled */
        /* ADC Channel 38 in Normal Mode : Disabled */
        /* ADC Channel 39 in Normal Mode : Disabled */


/*-----------------------------------------------------------*/
/* Injected Channel Conversion Mask Register 0(ADC_1_JCMR0)    */
/*-----------------------------------------------------------*/
    ADC_1.JCMR0.R = 0x00000000;
        /* ADC Channel 0 in Injected Mode : Disabled */
        /* ADC Channel 1 in Injected Mode : Disabled */
        /* ADC Channel 2 in Injected Mode : Disabled */
        /* ADC Channel 3 in Injected Mode : Disabled */
        /* ADC Channel 4 in Injected Mode : Disabled */
        /* ADC Channel 5 in Injected Mode : Disabled */
        /* ADC Channel 6 in Injected Mode : Disabled */
        /* ADC Channel 7 in Injected Mode : Disabled */
        /* ADC Channel 8 in Injected Mode : Disabled */
        /* ADC Channel 9 in Injected Mode : Disabled */
        /* ADC Channel 10 in Injected Mode : Disabled */
        /* ADC Channel 11 in Injected Mode : Disabled */
        /* ADC Channel 12 in Injected Mode : Disabled */
        /* ADC Channel 13 in Injected Mode : Disabled */
        /* ADC Channel 14 in Injected Mode : Disabled */
        /* ADC Channel 15 in Injected Mode : Disabled */


/*-----------------------------------------------------------*/
/* Injected Channel Conversion Mask Register 1(ADC_1_JCMR1)    */
/*-----------------------------------------------------------*/
    ADC_1.JCMR1.R = 0x00000000;
        /* ADC Channel 32 in Injected Mode : Disabled */
        /* ADC Channel 33 in Injected Mode : Disabled */
        /* ADC Channel 34 in Injected Mode : Disabled */
        /* ADC Channel 37 in Injected Mode : Disabled */
        /* ADC Channel 38 in Injected Mode : Disabled */
        /* ADC Channel 39 in Injected Mode : Disabled */


/*-----------------------------------------------------------*/
/*    DMA Register (ADC_1_DMAE)*/
/*-----------------------------------------------------------*/

    ADC_1.DMAE.R = 0x00000000;
        /* DMA request cleared by: Acknowledge from INT*/
        /* DMA feature: Disabled*/

/*-----------------------------------------------------------*/
/* DMA Channel Select Register 0(ADC_1_DMAR0)    */
/*-----------------------------------------------------------*/
    ADC_1.DMAR0.R = 0x00000000;
        /* DMA for ADC channel 0 : Disabled */
        /* DMA for ADC channel 1 : Disabled */
        /* DMA for ADC channel 2 : Disabled */
        /* DMA for ADC channel 3 : Disabled */
        /* DMA for ADC channel 4 : Disabled */
        /* DMA for ADC channel 5 : Disabled */
        /* DMA for ADC channel 6 : Disabled */
        /* DMA for ADC channel 7 : Disabled */
        /* DMA for ADC channel 8 : Disabled */
        /* DMA for ADC channel 9 : Disabled */
        /* DMA for ADC channel 10 : Disabled */
        /* DMA for ADC channel 11 : Disabled */
        /* DMA for ADC channel 12 : Disabled */
        /* DMA for ADC channel 13 : Disabled */
        /* DMA for ADC channel 14 : Disabled */
        /* DMA for ADC channel 15 : Disabled */


/*-----------------------------------------------------------*/
/* DMA Channel Select Register 1(ADC_1_DMAR1)    */
/*-----------------------------------------------------------*/
    ADC_1.DMAR1.R = 0x00000000;
        /* DMA for ADC channel 32 : Disabled */
        /* DMA for ADC channel 33 : Disabled */
        /* DMA for ADC channel 34 : Disabled */
        /* DMA for ADC channel 37 : Disabled */
        /* DMA for ADC channel 38 : Disabled */
        /* DMA for ADC channel 39 : Disabled */


/*-----------------------------------------------------------*/
/*     Threshold Register 0 (ADC_1_THRHLR0)                    */
/*-----------------------------------------------------------*/
    ADC_1.THRHLR[0].R = 0x0FFF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 4095 */

/*-----------------------------------------------------------*/
/*     Threshold Register 1 (ADC_1_THRHLR1)                    */
/*-----------------------------------------------------------*/
    ADC_1.THRHLR[1].R = 0x0FFF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 4095 */

/*-----------------------------------------------------------*/
/*     Threshold Register 2 (ADC_1_THRHLR2)                    */
/*-----------------------------------------------------------*/
    ADC_1.THRHLR[2].R = 0x0FFF0000;
        /* Lower Threshold value : 0 */
        /* Higher Threshold value : 4095 */

/*-----------------------------------------------------------*/
/* Channel Watchdog Select Register 0(ADC_1_CWSELR)*/
/*-----------------------------------------------------------*/

    ADC_1.CWSELR0.R = 0x00000000;
        /* Watchdog selected for channel 0 : THRHLR0*/
        /* Watchdog selected for channel 1 : THRHLR0*/
        /* Watchdog selected for channel 2 : THRHLR0*/
        /* Watchdog selected for channel 3 : THRHLR0*/
        /* Watchdog selected for channel 4 : THRHLR0*/
        /* Watchdog selected for channel 5 : THRHLR0*/
        /* Watchdog selected for channel 6 : THRHLR0*/
        /* Watchdog selected for channel 7 : THRHLR0*/

    ADC_1.CWSELR1.R = 0x00000000;
        /* Watchdog selected for channel 8 : THRHLR0*/
        /* Watchdog selected for channel 9 : THRHLR0*/
        /* Watchdog selected for channel 10 : THRHLR0*/
        /* Watchdog selected for channel 11 : THRHLR0*/
        /* Watchdog selected for channel 12 : THRHLR0*/
        /* Watchdog selected for channel 13 : THRHLR0*/
        /* Watchdog selected for channel 14 : THRHLR0*/
        /* Watchdog selected for channel 15 : THRHLR0*/

    ADC_1.CWSELR4.R = 0x00000000;
        /* Watchdog selected for channel 32 : THRHLR0*/
        /* Watchdog selected for channel 33 : THRHLR0*/
        /* Watchdog selected for channel 34 : THRHLR0*/
        /* Watchdog selected for channel 35 : THRHLR0*/
        /* Watchdog selected for channel 36 : THRHLR0*/
        /* Watchdog selected for channel 37 : THRHLR0*/
        /* Watchdog selected for channel 38 : THRHLR0*/
        /* Watchdog selected for channel 39 : THRHLR0*/

/*-----------------------------------------------------------*/
/* Channel Watchdog Enable Register 0 (ADC_1_CWENR0)*/
/*-----------------------------------------------------------*/
    ADC_1.CWENR[0].R = 0x00000000;
        /* Watchdog enable for channel 0 : Disabled */
        /* Watchdog enable for channel 1 : Disabled */
        /* Watchdog enable for channel 2 : Disabled */
        /* Watchdog enable for channel 3 : Disabled */
        /* Watchdog enable for channel 4 : Disabled */
        /* Watchdog enable for channel 5 : Disabled */
        /* Watchdog enable for channel 6 : Disabled */
        /* Watchdog enable for channel 7 : Disabled */
        /* Watchdog enable for channel 8 : Disabled */
        /* Watchdog enable for channel 9 : Disabled */
        /* Watchdog enable for channel 10 : Disabled */
        /* Watchdog enable for channel 11 : Disabled */
        /* Watchdog enable for channel 12 : Disabled */
        /* Watchdog enable for channel 13 : Disabled */
        /* Watchdog enable for channel 14 : Disabled */
        /* Watchdog enable for channel 15 : Disabled */

/*-----------------------------------------------------------*/
/* Channel Watchdog Enable Register 1 (ADC_1_CWENR1)*/
/*-----------------------------------------------------------*/
    ADC_1.CWENR[1].R = 0x00000000;
        /* Watchdog enable for channel 32 : Disabled */
        /* Watchdog enable for channel 33 : Disabled */
        /* Watchdog enable for channel 34 : Disabled */
        /* Watchdog enable for channel 37 : Disabled */
        /* Watchdog enable for channel 38 : Disabled */
        /* Watchdog enable for channel 39 : Disabled */

/*-----------------------------------------------------------*/
/* Watchdog Threshold Interrupt Mask Register (ADC_1_WTIMR)    */
/*-----------------------------------------------------------*/
    ADC_1.WTIMR.R = 0x00000000;
        /* Low Threshold Interrupt for Watchdog 0 : Disabled */
        /* High Threshold Interrupt for Watchdog 0 : Disabled */
        /* Low Threshold Interrupt for Watchdog 1 : Disabled */
        /* High Threshold Interrupt for Watchdog 1 : Disabled */
        /* Low Threshold Interrupt for Watchdog 2 : Disabled */
        /* High Threshold Interrupt for Watchdog 2 : Disabled */

}

/*********************  Trigger Initialization Function(s) ************************/

void adc_0_trigger_setup_fnc()
{
/*-----------------------------------------------------------*/
/*          ADC 0 Trigger Configuration                      */
/*-----------------------------------------------------------*/
     ADC_0.MCR.B.JTRGEN = 0x0;
            /* Injection Trigger : Disabled     */
     ADC_0.MCR.B.JEDGE = 0x0;
            /* Injection trigger edge : Falling*/
}

void adc_1_trigger_setup_fnc()
{
/*-----------------------------------------------------------*/
/*          ADC 1 Trigger Configuration                      */
/*-----------------------------------------------------------*/
     ADC_1.MCR.B.JTRGEN = 0x0;
            /* B9: Injection Trigger : Disabled     */
     ADC_1.MCR.B.JEDGE = 0x0;
            /* Injection trigger edge : Falling */
}
 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

