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
 * file                   : siu_init.c
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
 * Brief Description      : This File Contains Pads, external Interrupts and
 *                          Wakeups configuration
 *
 ******************************************************************************** 
 *
 * Detail Description     : This File contains function for peripheral assignment
 *                         for each pads, External Interrupt configuration,
 *                         Wakeup configuration and Trigger configuration.
 *                         It also handles Port parallel masking.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "rappid_ref.h"
#include "siu_init.h"




/* ----------------------------------------------------------- */
/*	                SIU Initialization                         */
/* ----------------------------------------------------------- */
void siu_init_fnc(void)
{
    siu_portA_init_fnc();
    siu_portB_init_fnc();
    siu_portC_init_fnc();
    siu_portD_init_fnc();
    siu_portE_init_fnc();
    siu_portF_init_fnc();
    siu_portG_init_fnc();
    siu_portH_init_fnc();
    siu_general_init_fnc();
    siu_parallel_port_init_fnc();
    siu_unused_pins_init_fnc();
    siu_psmi_init_fnc();
}


/* ----------------------------------------------------------- */
/*                 SIU PORT A PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portA_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[0]  eMIOS_0_0_CLKOUT_eMIOS_0_13_PA0 (16) */
    /* ----------------------------------------------------------- */
       SIU.PCR[0].R = 0x0201;
             /*	Selected Function : PA0 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[1]  eMIOS_0_1_NMI_PA1 (11) */
    /* ----------------------------------------------------------- */
       SIU.PCR[1].R = 0x0201;
             /*	Selected Function : PA1 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[2]  eMIOS_0_2_ADC_0_MA2_PA2 (9) */
    /* ----------------------------------------------------------- */
       SIU.PCR[2].R = 0x0201;
             /*	Selected Function : PA2 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[3]  eMIOS_0_3_TXD_5_PCS_1.4_ADC_1_ANS0_PA3 (90) */
    /* ----------------------------------------------------------- */
       SIU.PCR[3].R = 0x0201;
             /*	Selected Function : PA3 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[4]  eMIOS_0_4_PCS_1.0_RXD_5_PA4 (43) */
    /* ----------------------------------------------------------- */
       SIU.PCR[4].R = 0x0201;
             /*	Selected Function : PA4 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[5]  eMIOS_0_5_TXD_4_PA5 (118) */
    /* ----------------------------------------------------------- */
       SIU.PCR[5].R = 0x0201;
             /*	Selected Function : PA5 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[6]  eMIOS_0_6_PCS_1.1_RXD_4_PA6 (119) */
    /* ----------------------------------------------------------- */
       SIU.PCR[6].R = 0x0201;
             /*	Selected Function : PA6 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[7]  eMIOS_0_7_TXD_3_ADC_1_ANS1_PA7 (104) */
    /* ----------------------------------------------------------- */
       SIU.PCR[7].R = 0x0201;
             /*	Selected Function : PA7 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[8]  eMIOS_0_8_eMIOS_0_14_RXD_3_PA8 (105) */
    /* ----------------------------------------------------------- */
       SIU.PCR[8].R = 0x0203;
             /*	Selected Function : PA8 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[9]  eMIOS_0_9_PCS_1.2_PA9 (106) */
    /* ----------------------------------------------------------- */
       SIU.PCR[9].R = 0x0202;
             /*	Selected Function : PA9 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[10]  eMIOS_0_10_SDA_0_TXD_2_ADC_1_ANS2_PA10 (107) */
    /* ----------------------------------------------------------- */
       SIU.PCR[10].R = 0x0201;
             /*	Selected Function : PA10 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[11]  eMIOS_0_11_SCL_0_RXD_2_ADC_1_ANS3_PA11 (108) */
    /* ----------------------------------------------------------- */
       SIU.PCR[11].R = 0x0201;
             /*	Selected Function : PA11 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[12]  eMIOS_0_28_PCS_1.3_SIN_0_PA12 (45) */
    /* ----------------------------------------------------------- */
       SIU.PCR[12].R = 0x0201;
             /*	Selected Function : PA12 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[13]  SOUT_0_eMIOS_0_29_PA13 (44) */
    /* ----------------------------------------------------------- */
       SIU.PCR[13].R = 0x0201;
             /*	Selected Function : PA13 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[14]  SCK_0_PCS_0.0_eMIOS_0_0_PA14 (42) */
    /* ----------------------------------------------------------- */
       SIU.PCR[14].R = 0x0201;
             /*	Selected Function : PA14 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[15]  PCS_0.0_SCK_0_eMIOS_0_1_PA15 (40) */
    /* ----------------------------------------------------------- */
       SIU.PCR[15].R = 0x0201;
             /*	Selected Function : PA15 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT B PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portB_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[16]  CNTX_0_eMIOS_0_30_TXD_0_PB0 (31) */
    /* ----------------------------------------------------------- */
       SIU.PCR[16].R = 0x0001;
             /*	Selected Function : PB0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[17]  eMIOS_0_31_RXD_0_CNRX_0_PB1 (32) */
    /* ----------------------------------------------------------- */
       SIU.PCR[17].R = 0x0001;
             /*	Selected Function : PB1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[18]  TXD_0_SDA_0_eMIOS_0_30_PB2 (144) */
    /* ----------------------------------------------------------- */
       SIU.PCR[18].R = 0x0001;
             /*	Selected Function : PB2          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[19]  eMIOS_0_31_RXD_0_SCL_0_PB3 (1) */
    /* ----------------------------------------------------------- */
       SIU.PCR[19].R = 0x0001;
             /*	Selected Function : PB3          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[20]  ADC_0_ADC_1_ANP0_PB4 (72) */
    /* ----------------------------------------------------------- */
       SIU.PCR[20].R = 0x2000;
             /*	Selected Function : ADC_0_ADC_1_ANP0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[21]  ADC_0_ADC_1_ANP1_PB5 (75) */
    /* ----------------------------------------------------------- */
       SIU.PCR[21].R = 0x2000;
             /*	Selected Function : ADC_0_ADC_1_ANP1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[22]  ADC_0_ADC_1_ANP2_PB6 (76) */
    /* ----------------------------------------------------------- */
       SIU.PCR[22].R = 0x0000;
             /*	Selected Function : PB6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[23]  ADC_0_ADC_1_ANP3_PB7 (77) */
    /* ----------------------------------------------------------- */
       SIU.PCR[23].R = 0x0000;
             /*	Selected Function : PB7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[24]  XTAL32_ADC_0_ANS0 & ADC_1_ANS4_PB8 (53) */
    /* ----------------------------------------------------------- */
       SIU.PCR[24].R = 0x0000;
             /*	Selected Function : PB8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[25]  EXTAL32_ADC_0_ANS1& ADC_1_ANS5_PB9 (52) */
    /* ----------------------------------------------------------- */
       SIU.PCR[25].R = 0x0000;
             /*	Selected Function : PB9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[26]  ADC_0_ANS2& ADC_1_ANS6_PB10 (54) */
    /* ----------------------------------------------------------- */
       SIU.PCR[26].R = 0x0001;
             /*	Selected Function : PB10          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[28]  eMIOS_0_4_PCS_0.1_ADC_0_ANX0_PB12 (83) */
    /* ----------------------------------------------------------- */
       SIU.PCR[28].R = 0x0001;
             /*	Selected Function : PB12          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[29]  eMIOS_0_5_PCS_0.2_ADC_0_ANX1_PB13 (85) */
    /* ----------------------------------------------------------- */
       SIU.PCR[29].R = 0x0001;
             /*	Selected Function : PB13          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[30]  eMIOS_0_6_PCS_0.3_ADC_0_ANX2_PB14 (87) */
    /* ----------------------------------------------------------- */
       SIU.PCR[30].R = 0x0001;
             /*	Selected Function : PB14          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[31]  eMIOS_0_7_PCS_0.4_ADC_0_ANX3_PB15 (89) */
    /* ----------------------------------------------------------- */
       SIU.PCR[31].R = 0x0001;
             /*	Selected Function : PB15          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT C PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portC_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[32]  TDI_PC0 (126) */
    /* ----------------------------------------------------------- */
       SIU.PCR[32].R = 0x4903;
             /*	Selected Function : TDI          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Enabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[33]  TDO_PC1 (121) */
    /* ----------------------------------------------------------- */
       SIU.PCR[33].R = 0x4A01;
             /*	Selected Function : TDO          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Enabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[34]  SCK_1_CNTX_4_PC2 (117) */
    /* ----------------------------------------------------------- */
       SIU.PCR[34].R = 0x0001;
             /*	Selected Function : PC2          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[35]  PCS_1.0_ADC_0_MA0_CNRX_4_CNRX_1_PC3 (116) */
    /* ----------------------------------------------------------- */
       SIU.PCR[35].R = 0x0001;
             /*	Selected Function : PC3          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[36]  eMIOS_1_31_SIN_1_CNRX_3_PC4 (131) */
    /* ----------------------------------------------------------- */
       SIU.PCR[36].R = 0x0001;
             /*	Selected Function : PC4          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[37]  SOUT_1_CNTX_3_PC5 (130) */
    /* ----------------------------------------------------------- */
       SIU.PCR[37].R = 0x0001;
             /*	Selected Function : PC5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[38]  TXD_1_eMIOS_1_28_PC6 (36) */
    /* ----------------------------------------------------------- */
       SIU.PCR[38].R = 0x0001;
             /*	Selected Function : PC6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[39]  RXD_1_eMIOS_1_29_PC7 (37) */
    /* ----------------------------------------------------------- */
       SIU.PCR[39].R = 0x0001;
             /*	Selected Function : PC7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[40]  TXD_2_eMIOS_0_3_PC8 (143) */
    /* ----------------------------------------------------------- */
       SIU.PCR[40].R = 0x0001;
             /*	Selected Function : PC8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[41]  RXD_2_eMIOS_0_7_PC9 (2) */
    /* ----------------------------------------------------------- */
       SIU.PCR[41].R = 0x0001;
             /*	Selected Function : PC9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[42]  CNTX_1_CNTX_4_ADC_0_MA1_PC10 (28) */
    /* ----------------------------------------------------------- */
       SIU.PCR[42].R = 0x0601;
             /*	Selected Function : CNTX_1          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[43]  ADC_0_MA2_CNRX_1_CNRX_4_PC11 (27) */
    /* ----------------------------------------------------------- */
       SIU.PCR[43].R = 0x0101;
             /*	Selected Function : PC11 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[44]  eMIOS_0_12_SIN_2_PC12 (141) */
    /* ----------------------------------------------------------- */
       SIU.PCR[44].R = 0x0001;
             /*	Selected Function : PC12          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[45]  eMIOS_0_13_SOUT_2_PC13 (142) */
    /* ----------------------------------------------------------- */
       SIU.PCR[45].R = 0x0001;
             /*	Selected Function : PC13          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[46]  eMIOS_0_14_SCK_2_PC14 (3) */
    /* ----------------------------------------------------------- */
       SIU.PCR[46].R = 0x0001;
             /*	Selected Function : PC14          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[47]  eMIOS_0_15_PCS_2.0_PC15 (4) */
    /* ----------------------------------------------------------- */
       SIU.PCR[47].R = 0x0001;
             /*	Selected Function : PC15          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT D PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portD_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[48]  ADC_0_ADC_1_ANP4_PD0 (63) */
    /* ----------------------------------------------------------- */
       SIU.PCR[48].R = 0x0000;
             /*	Selected Function : PD0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[49]  ADC_0_ADC_1_ANP5_PD1 (64) */
    /* ----------------------------------------------------------- */
       SIU.PCR[49].R = 0x0000;
             /*	Selected Function : PD1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[50]  ADC_0_ADC_1_ANP6_PD2 (65) */
    /* ----------------------------------------------------------- */
       SIU.PCR[50].R = 0x0000;
             /*	Selected Function : PD2          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[51]  ADC_0_ADC_1_ANP7_PD3 (66) */
    /* ----------------------------------------------------------- */
       SIU.PCR[51].R = 0x0000;
             /*	Selected Function : PD3          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[52]  ADC_0_ADC_1_ANP8_PD4 (67) */
    /* ----------------------------------------------------------- */
       SIU.PCR[52].R = 0x0000;
             /*	Selected Function : PD4          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[53]  ADC_0_ADC_1_ANP9_PD5 (68) */
    /* ----------------------------------------------------------- */
       SIU.PCR[53].R = 0x0000;
             /*	Selected Function : PD5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[54]  ADC_0_ADC_1_ANP10_PD6 (69) */
    /* ----------------------------------------------------------- */
       SIU.PCR[54].R = 0x0000;
             /*	Selected Function : PD6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[55]  ADC_0_ADC_1_ANP11_PD7 (70) */
    /* ----------------------------------------------------------- */
       SIU.PCR[55].R = 0x0000;
             /*	Selected Function : PD7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[56]  ADC_0_ADC_1_ANP12_PD8 (71) */
    /* ----------------------------------------------------------- */
       SIU.PCR[56].R = 0x0000;
             /*	Selected Function : PD8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[57]  ADC_0_ADC_1_ANP13_PD9 (78) */
    /* ----------------------------------------------------------- */
       SIU.PCR[57].R = 0x0000;
             /*	Selected Function : PD9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[58]  ADC_0_ADC_1_ANP14_PD10 (79) */
    /* ----------------------------------------------------------- */
       SIU.PCR[58].R = 0x0000;
             /*	Selected Function : PD10          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[59]  ADC_0_ADC_1_ANP15_PD11 (80) */
    /* ----------------------------------------------------------- */
       SIU.PCR[59].R = 0x0000;
             /*	Selected Function : PD11          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Down   */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[61]  PCS_1.0_eMIOS_0_25_ADC_0_ANS5_PD13 (84) */
    /* ----------------------------------------------------------- */
       SIU.PCR[61].R = 0x0001;
             /*	Selected Function : PD13          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[62]  PCS_1.1_eMIOS_0_26_ADC_0_ANS6_PD14 (86) */
    /* ----------------------------------------------------------- */
       SIU.PCR[62].R = 0x0001;
             /*	Selected Function : PD14          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[63]  PCS_1.2_eMIOS_0_27_ADC_0_ANS7_PD15 (88) */
    /* ----------------------------------------------------------- */
       SIU.PCR[63].R = 0x0001;
             /*	Selected Function : PD15          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT E PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portE_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[64]  eMIOS_0_16_CNRX_5_PE0 (10) */
    /* ----------------------------------------------------------- */
       SIU.PCR[64].R = 0x0001;
             /*	Selected Function : PE0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[65]  eMIOS_0_17_CNTX_5_PE1 (12) */
    /* ----------------------------------------------------------- */
       SIU.PCR[65].R = 0x0001;
             /*	Selected Function : PE1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[66]  eMIOS_0_18_SIN_1_PE2 (128) */
    /* ----------------------------------------------------------- */
       SIU.PCR[66].R = 0x0101;
             /*	Selected Function : PE2 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[67]  eMIOS_0_19_SOUT_1_PE3 (129) */
    /* ----------------------------------------------------------- */
       SIU.PCR[67].R = 0x0101;
             /*	Selected Function : PE3 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[68]  eMIOS_0_20_SCK_1_PE4 (132) */
    /* ----------------------------------------------------------- */
       SIU.PCR[68].R = 0x0201;
             /*	Selected Function : PE4 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[69]  eMIOS_0_21_PCS_1.0_ADC_0_MA2_PE5 (133) */
    /* ----------------------------------------------------------- */
       SIU.PCR[69].R = 0x0201;
             /*	Selected Function : PE5 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[70]  eMIOS_0_22_PCS_0.3_ADC_0_MA1_PE6 (139) */
    /* ----------------------------------------------------------- */
       SIU.PCR[70].R = 0x0201;
             /*	Selected Function : PE6 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[71]  eMIOS_0_23_PCS_0.2_ADC_0_MA0_PE7 (140) */
    /* ----------------------------------------------------------- */
       SIU.PCR[71].R = 0x0601;
             /*	Selected Function : eMIOS_0_23 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[72]  CNTX_2_eMIOS_0_22_CNTX_3_PE8 (13) */
    /* ----------------------------------------------------------- */
       SIU.PCR[72].R = 0x0001;
             /*	Selected Function : PE8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[73]  CNRX_2_eMIOS_0_23_CNRX_3_PE9 (14) */
    /* ----------------------------------------------------------- */
       SIU.PCR[73].R = 0x0201;
             /*	Selected Function : PE9 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[74]  TXD_3_PCS_1.3_eMIOS_1_30_PE10 (15) */
    /* ----------------------------------------------------------- */
       SIU.PCR[74].R = 0x0001;
             /*	Selected Function : PE10          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[75]  eMIOS_0_24_RXD_3_PCS_1.4_PE11 (17) */
    /* ----------------------------------------------------------- */
       SIU.PCR[75].R = 0x0001;
             /*	Selected Function : PE11          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[76]  SIN_2_eMIOS_1_19_ADC_1_ANS7_PE12 (109) */
    /* ----------------------------------------------------------- */
       SIU.PCR[76].R = 0x0001;
             /*	Selected Function : PE12          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[77]  SOUT_2_eMIOS_1_20_PE13 (103) */
    /* ----------------------------------------------------------- */
       SIU.PCR[77].R = 0x0001;
             /*	Selected Function : PE13          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[78]  SCK_2_eMIOS_1_21_PE14 (112) */
    /* ----------------------------------------------------------- */
       SIU.PCR[78].R = 0x0001;
             /*	Selected Function : PE14          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[79]  PCS_2.0_eMIOS_1_22_PE15 (113) */
    /* ----------------------------------------------------------- */
       SIU.PCR[79].R = 0x0001;
             /*	Selected Function : PE15          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT F PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portF_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[80]  eMIOS_0_10_PCS_1.3_ADC_0_ANS8_PF0 (55) */
    /* ----------------------------------------------------------- */
       SIU.PCR[80].R = 0x0001;
             /*	Selected Function : PF0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[81]  eMIOS_0_11_PCS_1.4_ADC_0_ANS9_PF1 (56) */
    /* ----------------------------------------------------------- */
       SIU.PCR[81].R = 0x0001;
             /*	Selected Function : PF1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[82]  eMIOS_0_12_PCS_2.0_ADC_0_ANS10_PF2 (57) */
    /* ----------------------------------------------------------- */
       SIU.PCR[82].R = 0x0001;
             /*	Selected Function : PF2          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[83]  eMIOS_0_13_PCS_2.1_ADC_0_ANS11_PF3 (58) */
    /* ----------------------------------------------------------- */
       SIU.PCR[83].R = 0x0001;
             /*	Selected Function : PF3          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[84]  eMIOS_0_14_PCS_2.2_ADC_0_ANS12_PF4 (59) */
    /* ----------------------------------------------------------- */
       SIU.PCR[84].R = 0x0001;
             /*	Selected Function : PF4          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[85]  eMIOS_0_22_PCS_2.3_ADC_0_ANS13_PF5 (60) */
    /* ----------------------------------------------------------- */
       SIU.PCR[85].R = 0x0001;
             /*	Selected Function : PF5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[86]  eMIOS_0_23_PCS_1.1_ANS14_PF6 (61) */
    /* ----------------------------------------------------------- */
       SIU.PCR[86].R = 0x0001;
             /*	Selected Function : PF6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[87]  PCS_1.2_ADC_0_ANS15_PF7 (62) */
    /* ----------------------------------------------------------- */
       SIU.PCR[87].R = 0x0001;
             /*	Selected Function : PF7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[88]  CNTX_3_PCS_0.4_CNTX_2_PF8 (34) */
    /* ----------------------------------------------------------- */
       SIU.PCR[88].R = 0x0001;
             /*	Selected Function : PF8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[89]  eMIOS_1_1_PCS_0.5_CNRX_2_CNRX_3_PF9 (33) */
    /* ----------------------------------------------------------- */
       SIU.PCR[89].R = 0x0001;
             /*	Selected Function : PF9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[90]  PCS_0.1_TXD_4_eMIOS_1_2_PF10 (38) */
    /* ----------------------------------------------------------- */
       SIU.PCR[90].R = 0x0001;
             /*	Selected Function : PF10          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[91]  PCS_0.2_eMIOS_1_3_RXD_4_PF11 (39) */
    /* ----------------------------------------------------------- */
       SIU.PCR[91].R = 0x0001;
             /*	Selected Function : PF11          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[92]  eMIOS_1_25_TXD_5_PF12 (35) */
    /* ----------------------------------------------------------- */
       SIU.PCR[92].R = 0x0001;
             /*	Selected Function : PF12          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[93]  eMIOS_1_26_RXD_5_PF13 (41) */
    /* ----------------------------------------------------------- */
       SIU.PCR[93].R = 0x0001;
             /*	Selected Function : PF13          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[94]  CNTX_4_eMIOS_1_27_CNTX_1_PF14 (102) */
    /* ----------------------------------------------------------- */
       SIU.PCR[94].R = 0x0001;
             /*	Selected Function : PF14          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[95]  eMIOS_1_4_CNRX_1_CNRX_4_PF15 (101) */
    /* ----------------------------------------------------------- */
       SIU.PCR[95].R = 0x0001;
             /*	Selected Function : PF15          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT G PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portG_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[96]  CNTX_5_eMIOS_1_23_PG0 (98) */
    /* ----------------------------------------------------------- */
       SIU.PCR[96].R = 0x0001;
             /*	Selected Function : PG0          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[97]  eMIOS_1_24_CNRX_5_PG1 (97) */
    /* ----------------------------------------------------------- */
       SIU.PCR[97].R = 0x0001;
             /*	Selected Function : PG1          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[98]  eMIOS_1_11_SOUT_3_PG2 (8) */
    /* ----------------------------------------------------------- */
       SIU.PCR[98].R = 0x0001;
             /*	Selected Function : PG2          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[99]  eMIOS_1_12_PCS_3.0_PG3 (7) */
    /* ----------------------------------------------------------- */
       SIU.PCR[99].R = 0x0001;
             /*	Selected Function : PG3          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[100]  eMIOS_1_13_SCK_3_PG4 (6) */
    /* ----------------------------------------------------------- */
       SIU.PCR[100].R = 0x0001;
             /*	Selected Function : PG4          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[101]  eMIOS_1_14_SIN_3_PG5 (5) */
    /* ----------------------------------------------------------- */
       SIU.PCR[101].R = 0x0001;
             /*	Selected Function : PG5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[102]  eMIOS_1_15_PG6 (30) */
    /* ----------------------------------------------------------- */
       SIU.PCR[102].R = 0x0001;
             /*	Selected Function : PG6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[103]  eMIOS_1_16_eMIOS_1_30_PG7 (29) */
    /* ----------------------------------------------------------- */
       SIU.PCR[103].R = 0x0001;
             /*	Selected Function : PG7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[104]  eMIOS_1_17_PCS_2.0_PG8 (26) */
    /* ----------------------------------------------------------- */
       SIU.PCR[104].R = 0x0001;
             /*	Selected Function : PG8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[105]  eMIOS_1_18_SCK_2_PG9 (25) */
    /* ----------------------------------------------------------- */
       SIU.PCR[105].R = 0x0001;
             /*	Selected Function : PG9          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[106]  eMIOS_0_24_eMIOS_1_31_SIN_4_PG10 (114) */
    /* ----------------------------------------------------------- */
       SIU.PCR[106].R = 0x0001;
             /*	Selected Function : PG10          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[107]  eMIOS_0_25_PCS_4.0_PG11 (115) */
    /* ----------------------------------------------------------- */
       SIU.PCR[107].R = 0x0001;
             /*	Selected Function : PG11          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[108]  eMIOS_0_26_SOUT_4_PG12 (92) */
    /* ----------------------------------------------------------- */
       SIU.PCR[108].R = 0x0001;
             /*	Selected Function : PG12          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[109]  eMIOS_0_27_SCK_4_PG13 (91) */
    /* ----------------------------------------------------------- */
       SIU.PCR[109].R = 0x0001;
             /*	Selected Function : PG13          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[110]  eMIOS_1_0_PG14 (110) */
    /* ----------------------------------------------------------- */
       SIU.PCR[110].R = 0x0001;
             /*	Selected Function : PG14          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[111]  eMIOS_1_1_PG15 (111) */
    /* ----------------------------------------------------------- */
       SIU.PCR[111].R = 0x0001;
             /*	Selected Function : PG15          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

}


/* ----------------------------------------------------------- */
/*                 SIU PORT H PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_portH_init_fnc(void)
{
    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[112]  eMIOS_1_2_SIN_1_PH0 (93) */
    /* ----------------------------------------------------------- */
       SIU.PCR[112].R = 0x0101;
             /*	Selected Function : PH0 I          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[113]  eMIOS_1_3_SOUT_1_PH1 (94) */
    /* ----------------------------------------------------------- */
       SIU.PCR[113].R = 0x0A01;
             /*	Selected Function : SOUT_1          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[114]  eMIOS_1_4_SCK_1_PH2 (95) */
    /* ----------------------------------------------------------- */
       SIU.PCR[114].R = 0x0A01;
             /*	Selected Function : SCK_1 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[115]  eMIOS_1_5_PCS_1.0_PH3 (96) */
    /* ----------------------------------------------------------- */
       SIU.PCR[115].R = 0x0A01;
             /*	Selected Function : PCS_1.0 O          */
             /*	Output Buffers : Enabled          */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[116]  eMIOS_1_6_PH4 (134) */
    /* ----------------------------------------------------------- */
       SIU.PCR[116].R = 0x0001;
             /*	Selected Function : PH4          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[117]  eMIOS_1_7_PH5 (135) */
    /* ----------------------------------------------------------- */
       SIU.PCR[117].R = 0x0001;
             /*	Selected Function : PH5          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[118]  eMIOS_1_8_ADC_0_MA2_PH6 (136) */
    /* ----------------------------------------------------------- */
       SIU.PCR[118].R = 0x0001;
             /*	Selected Function : PH6          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[119]  eMIOS_1_9_PCS_2.3_ADC_0_MA1_PH7 (137) */
    /* ----------------------------------------------------------- */
       SIU.PCR[119].R = 0x0001;
             /*	Selected Function : PH7          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[120]  eMIOS_1_10_PCS_2.2_ADC_0_MA0_PH8 (138) */
    /* ----------------------------------------------------------- */
       SIU.PCR[120].R = 0x0001;
             /*	Selected Function : PH8          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Disabled          */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Disabled      */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Disabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[121]  TCK_PH9 (127) */
    /* ----------------------------------------------------------- */
       SIU.PCR[121].R = 0x4903;
             /*	Selected Function : TCK          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Enabled       */

    /* ----------------------------------------------------------- */
    /*      Pad Configuration Register PCR[122]  TMS_PH10 (120) */
    /* ----------------------------------------------------------- */
       SIU.PCR[122].R = 0x4903;
             /*	Selected Function : TMS          */
             /*	Output Buffers : Disabled         */
             /*	Input Buffers : Enabled           */
             /*	Output Drain : Disabled           */
             /*	Slew Rate Control : Minimum       */
             /*	Weak Pull Up/Down : Enabled       */
             /*	Weak Pull Up/Down Select : Up     */
             /*	Safe Mode Control: Enabled       */

}


/* ----------------------------------------------------------- */
/*               SIU General PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_general_init_fnc(void)
{

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Clock Prescaler Register- IFCPR    */
    /* ----------------------------------------------------------- */
        SIU.IFCPR.R = 0x00000000;
 		    /* Filter Clock Prescalar:- 1     */

    /* ----------------------------------------------------------- */
    /*   Interrupt Request Enable Register- IRER    */
    /* ----------------------------------------------------------- */
        SIU.IRER.R = 0x00000000;
             /* Edge Trigger External Interrupt 0 Enable :-Disabled */
             /* Edge Trigger External Interrupt 1 Enable :-Disabled */
             /* Edge Trigger External Interrupt 2 Enable :-Disabled */
             /* Edge Trigger External Interrupt 3 Enable :-Disabled */
             /* Edge Trigger External Interrupt 4 Enable :-Disabled */
             /* Edge Trigger External Interrupt 5 Enable :-Disabled */
             /* Edge Trigger External Interrupt 6 Enable :-Disabled */
             /* Edge Trigger External Interrupt 7 Enable :-Disabled */
             /* Edge Trigger External Interrupt 8 Enable :-Disabled */
             /* Edge Trigger External Interrupt 9 Enable :-Disabled */
             /* Edge Trigger External Interrupt 10 Enable :-Disabled */
             /* Edge Trigger External Interrupt 11 Enable :-Disabled */
             /* Edge Trigger External Interrupt 12 Enable :-Disabled */
             /* Edge Trigger External Interrupt 13 Enable :-Disabled */
             /* Edge Trigger External Interrupt 14 Enable :-Disabled */
             /* Edge Trigger External Interrupt 15 Enable :-Disabled */
             /* Edge Trigger External Interrupt 16 Enable :-Disabled */
             /* Edge Trigger External Interrupt 17 Enable :-Disabled */
             /* Edge Trigger External Interrupt 18 Enable :-Disabled */
             /* Edge Trigger External Interrupt 19 Enable :-Disabled */
             /* Edge Trigger External Interrupt 20 Enable :-Disabled */
             /* Edge Trigger External Interrupt 21 Enable :-Disabled */
             /* Edge Trigger External Interrupt 22 Enable :-Disabled */
             /* Edge Trigger External Interrupt 23 Enable :-Disabled */

    /* ----------------------------------------------------------- */
    /*   External IRQ Rising-Edge Event Enable Register - IREER    */
    /* ----------------------------------------------------------- */
        SIU.IREER.R = 0x00000000;

             /* NMI Rising-Edge Event : Disabled */
             /* IRQ 0 Rising-Edge Event : Disabled */
             /* IRQ 1 Rising-Edge Event : Disabled */
             /* IRQ 2 Rising-Edge Event : Disabled */
             /* IRQ 3 Rising-Edge Event : Disabled */
             /* IRQ 4 Rising-Edge Event : Disabled */
             /* IRQ 5 Rising-Edge Event : Disabled */
             /* IRQ 6 Rising-Edge Event : Disabled */
             /* IRQ 7 Rising-Edge Event : Disabled */
             /* IRQ 8 Rising-Edge Event : Disabled */
             /* IRQ 9 Rising-Edge Event : Disabled */
             /* IRQ 10 Rising-Edge Event : Disabled */
             /* IRQ 11 Rising-Edge Event : Disabled */
             /* IRQ 12 Rising-Edge Event : Disabled */
             /* IRQ 13 Rising-Edge Event : Disabled */
             /* IRQ 14 Rising-Edge Event : Disabled */
             /* IRQ 15 Rising-Edge Event : Disabled */
             /* IRQ 16 Rising-Edge Event : Disabled */
             /* IRQ 17 Rising-Edge Event : Disabled */
             /* IRQ 18 Rising-Edge Event : Disabled */
             /* IRQ 19 Rising-Edge Event : Disabled */
             /* IRQ 20 Rising-Edge Event : Disabled */
             /* IRQ 21 Rising-Edge Event : Disabled */
             /* IRQ 22 Rising-Edge Event : Disabled */
             /* IRQ 23 Rising-Edge Event : Disabled */

    /* ----------------------------------------------------------- */
    /*   External IRQ Falling-Edge Event Enable Register - IFEER   */
    /* ----------------------------------------------------------- */
        SIU.IFEER.R = 0x00000000;

             /* NMI Falling-Edge Event : Disabled */
             /* IRQ 0 Falling-Edge Event : Disabled */
             /* IRQ 1 Falling-Edge Event : Disabled */
             /* IRQ 2 Falling-Edge Event : Disabled */
             /* IRQ 3 Falling-Edge Event : Disabled */
             /* IRQ 4 Falling-Edge Event : Disabled */
             /* IRQ 5 Falling-Edge Event : Disabled */
             /* IRQ 6 Falling-Edge Event : Disabled */
             /* IRQ 7 Falling-Edge Event : Disabled */
             /* IRQ 8 Falling-Edge Event : Disabled */
             /* IRQ 9 Falling-Edge Event : Disabled */
             /* IRQ 10 Falling-Edge Event : Disabled */
             /* IRQ 11 Falling-Edge Event : Disabled */
             /* IRQ 12 Falling-Edge Event : Disabled */
             /* IRQ 13 Falling-Edge Event : Disabled */
             /* IRQ 14 Falling-Edge Event : Disabled */
             /* IRQ 15 Falling-Edge Event : Disabled */
             /* IRQ 16 Falling-Edge Event : Disabled */
             /* IRQ 17 Falling-Edge Event : Disabled */
             /* IRQ 18 Falling-Edge Event : Disabled */
             /* IRQ 19 Falling-Edge Event : Disabled */
             /* IRQ 20 Falling-Edge Event : Disabled */
             /* IRQ 21 Falling-Edge Event : Disabled */
             /* IRQ 22 Falling-Edge Event : Disabled */
             /* IRQ 23 Falling-Edge Event : Disabled */

    /* ----------------------------------------------------------- */
    /*    Interrupt Filter Enable Register - IFER    */
    /* ----------------------------------------------------------- */
        SIU.IFER.R = 0x00000000;
             /* Analog glitch filter on External Input 0 Pad:- Disabled */
             /* Analog glitch filter on External Input 1 Pad:- Disabled */
             /* Analog glitch filter on External Input 2 Pad:- Disabled */
             /* Analog glitch filter on External Input 3 Pad:- Disabled */
             /* Analog glitch filter on External Input 4 Pad:- Disabled */
             /* Analog glitch filter on External Input 5 Pad:- Disabled */
             /* Analog glitch filter on External Input 6 Pad:- Disabled */
             /* Analog glitch filter on External Input 7 Pad:- Disabled */
             /* Analog glitch filter on External Input 8 Pad:- Disabled */
             /* Analog glitch filter on External Input 9 Pad:- Disabled */
             /* Analog glitch filter on External Input 10 Pad:- Disabled */
             /* Analog glitch filter on External Input 11 Pad:- Disabled */
             /* Analog glitch filter on External Input 12 Pad:- Disabled */
             /* Analog glitch filter on External Input 13 Pad:- Disabled */
             /* Analog glitch filter on External Input 14 Pad:- Disabled */
             /* Analog glitch filter on External Input 15 Pad:- Disabled */
             /* Analog glitch filter on External Input 16 Pad:- Disabled */
             /* Analog glitch filter on External Input 17 Pad:- Disabled */
             /* Analog glitch filter on External Input 18 Pad:- Disabled */
             /* Analog glitch filter on External Input 19 Pad:- Disabled */
             /* Analog glitch filter on External Input 20 Pad:- Disabled */
             /* Analog glitch filter on External Input 21 Pad:- Disabled */
             /* Analog glitch filter on External Input 22 Pad:- Disabled */
             /* Analog glitch filter on External Input 23 Pad:- Disabled */

    /* ----------------------------------------------------------- */
    /*          NMI Configuration Register - NCR       */
    /* ----------------------------------------------------------- */
        WKUP.NCR.R = 0x00000000;
             /* NMI Destination Source Select:- Non-maskable interrupt */
             /* NMI Rising Edge Trigger Event:- Disabled  */
             /* NMI Falling Edge Trigger Event:- Disabled  */
             /* Analog glitch filter on NMI Input pad:- Disabled    */

        WKUP.NCR.B.NLOCK0 = 0;
             /* NMI Configuration Lock:- Disabled */
    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register0- IFMC0    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[0].R = 0x00000000;
        /* External Interrupt 0 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register1- IFMC1    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[1].R = 0x00000000;
        /* External Interrupt 1 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register2- IFMC2    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[2].R = 0x00000000;
        /* External Interrupt 2 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register3- IFMC3    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[3].R = 0x00000000;
        /* External Interrupt 3 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register4- IFMC4    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[4].R = 0x00000000;
        /* External Interrupt 4 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register5- IFMC5    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[5].R = 0x00000000;
        /* External Interrupt 5 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register6- IFMC6    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[6].R = 0x00000000;
        /* External Interrupt 6 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register7- IFMC7    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[7].R = 0x00000000;
        /* External Interrupt 7 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register8- IFMC8    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[8].R = 0x00000000;
        /* External Interrupt 8 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register9- IFMC9    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[9].R = 0x00000000;
        /* External Interrupt 9 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register10- IFMC10    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[10].R = 0x00000000;
        /* External Interrupt 10 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register11- IFMC11    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[11].R = 0x00000000;
        /* External Interrupt 11 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register12- IFMC12    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[12].R = 0x00000000;
        /* External Interrupt 12 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register13- IFMC13    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[13].R = 0x00000000;
        /* External Interrupt 13 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register14- IFMC14    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[14].R = 0x00000000;
        /* External Interrupt 14 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register15- IFMC15    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[15].R = 0x00000000;
        /* External Interrupt 15 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register16- IFMC16    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[16].R = 0x00000000;
        /* External Interrupt 16 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register17- IFMC17    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[17].R = 0x00000000;
        /* External Interrupt 17 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register18- IFMC18    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[18].R = 0x00000000;
        /* External Interrupt 18 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register19- IFMC19    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[19].R = 0x00000000;
        /* External Interrupt 19 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register20- IFMC20    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[20].R = 0x00000000;
        /* External Interrupt 20 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register21- IFMC21    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[21].R = 0x00000000;
        /* External Interrupt 21 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register22- IFMC22    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[22].R = 0x00000000;
        /* External Interrupt 22 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Interrupt Filter Maximum Counter Register23- IFMC23    */
    /* ----------------------------------------------------------- */
        SIU.IFMC[23].R = 0x00000000;
        /* External Interrupt 23 maximum Filter Counter:- 0 */

    /* ----------------------------------------------------------- */
    /*   Wakeup Request Enable Register - WRER    */
    /* ----------------------------------------------------------- */
        WKUP.WRER.R = 0x00000000;
             /* Edge Trigger External Wakeup 2 Enable :-Disabled */
             /* Edge Trigger External Wakeup 3 Enable :-Disabled */
             /* Edge Trigger External Wakeup 4 Enable :-Disabled */
             /* Edge Trigger External Wakeup 5 Enable :-Disabled */
             /* Edge Trigger External Wakeup 6 Enable :-Disabled */
             /* Edge Trigger External Wakeup 7 Enable :-Disabled */
             /* Edge Trigger External Wakeup 8 Enable :-Disabled */
             /* Edge Trigger External Wakeup 9 Enable :-Disabled */
             /* Edge Trigger External Wakeup 10 Enable :-Disabled */
             /* Edge Trigger External Wakeup 11 Enable :-Disabled */
             /* Edge Trigger External Wakeup 12 Enable :-Disabled */
             /* Edge Trigger External Wakeup 13 Enable :-Disabled */
             /* Edge Trigger External Wakeup 14 Enable :-Disabled */
             /* Edge Trigger External Wakeup 15 Enable :-Disabled */
             /* Edge Trigger External Wakeup 16 Enable :-Disabled */
             /* Edge Trigger External Wakeup 17 Enable :-Disabled */
             /* Edge Trigger External Wakeup 18 Enable :-Disabled */
             /* Edge Trigger External Wakeup 19 Enable :-Disabled */
             /* Edge Trigger External Wakeup 20 Enable :-Disabled */
             /* Edge Trigger External Wakeup 21 Enable :-Disabled */
             /* Edge Trigger External Wakeup 22 Enable :-Disabled */
             /* Edge Trigger External Wakeup 25 Enable :-Disabled */
             /* Edge Trigger External Wakeup 26 Enable :-Disabled */
             /* Edge Trigger External Wakeup 27 Enable :-Disabled */
             /* Edge Trigger External Wakeup 28 Enable :-Disabled */
    /* ----------------------------------------------------------- */
    /*   Wakeup Interrupt Request Enable Register - WIRER    */
    /* ----------------------------------------------------------- */
        WKUP.IRER.R = 0x00000000;
             /* Edge Trigger External Wakeup Interrupt 2 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 3 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 4 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 5 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 6 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 7 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 8 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 9 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 10 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 11 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 12 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 13 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 14 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 15 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 16 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 17 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 18 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 19 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 20 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 21 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 22 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 25 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 26 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 27 Enable :-Disabled */
             /* Edge Trigger External Wakeup Interrupt 28 Enable :-Disabled */
    /* ----------------------------------------------------------- */
    /*   Wakeup Rising-Edge Event Enable Register - WIREER    */
    /* ----------------------------------------------------------- */
        WKUP.WIREER.R = 0x00000000;
             /* Wakeup 2 Rising-Edge Event :Disabled */
             /* Wakeup 3 Rising-Edge Event :Disabled */
             /* Wakeup 4 Rising-Edge Event :Disabled */
             /* Wakeup 5 Rising-Edge Event :Disabled */
             /* Wakeup 6 Rising-Edge Event :Disabled */
             /* Wakeup 7 Rising-Edge Event :Disabled */
             /* Wakeup 8 Rising-Edge Event :Disabled */
             /* Wakeup 9 Rising-Edge Event :Disabled */
             /* Wakeup 10 Rising-Edge Event :Disabled */
             /* Wakeup 11 Rising-Edge Event :Disabled */
             /* Wakeup 12 Rising-Edge Event :Disabled */
             /* Wakeup 13 Rising-Edge Event :Disabled */
             /* Wakeup 14 Rising-Edge Event :Disabled */
             /* Wakeup 15 Rising-Edge Event :Disabled */
             /* Wakeup 16 Rising-Edge Event :Disabled */
             /* Wakeup 17 Rising-Edge Event :Disabled */
             /* Wakeup 18 Rising-Edge Event :Disabled */
             /* Wakeup 19 Rising-Edge Event :Disabled */
             /* Wakeup 20 Rising-Edge Event :Disabled */
             /* Wakeup 21 Rising-Edge Event :Disabled */
             /* Wakeup 22 Rising-Edge Event :Disabled */
             /* Wakeup 25 Rising-Edge Event :Disabled */
             /* Wakeup 26 Rising-Edge Event :Disabled */
             /* Wakeup 27 Rising-Edge Event :Disabled */
             /* Wakeup 28 Rising-Edge Event :Disabled */
    /* ----------------------------------------------------------- */
    /*   Wakeup Falling-Edge Event Enable Register - WIFEER    */
    /* ----------------------------------------------------------- */
        WKUP.WIFEER.R = 0x00000000;
             /* Wakeup 2 Falling-Edge Event :Disabled */
             /* Wakeup 3 Falling-Edge Event :Disabled */
             /* Wakeup 4 Falling-Edge Event :Disabled */
             /* Wakeup 5 Falling-Edge Event :Disabled */
             /* Wakeup 6 Falling-Edge Event :Disabled */
             /* Wakeup 7 Falling-Edge Event :Disabled */
             /* Wakeup 8 Falling-Edge Event :Disabled */
             /* Wakeup 9 Falling-Edge Event :Disabled */
             /* Wakeup 10 Falling-Edge Event :Disabled */
             /* Wakeup 11 Falling-Edge Event :Disabled */
             /* Wakeup 12 Falling-Edge Event :Disabled */
             /* Wakeup 13 Falling-Edge Event :Disabled */
             /* Wakeup 14 Falling-Edge Event :Disabled */
             /* Wakeup 15 Falling-Edge Event :Disabled */
             /* Wakeup 16 Falling-Edge Event :Disabled */
             /* Wakeup 17 Falling-Edge Event :Disabled */
             /* Wakeup 18 Falling-Edge Event :Disabled */
             /* Wakeup 19 Falling-Edge Event :Disabled */
             /* Wakeup 20 Falling-Edge Event :Disabled */
             /* Wakeup 21 Falling-Edge Event :Disabled */
             /* Wakeup 22 Falling-Edge Event :Disabled */
             /* Wakeup 25 Falling-Edge Event :Disabled */
             /* Wakeup 26 Falling-Edge Event :Disabled */
             /* Wakeup 27 Falling-Edge Event :Disabled */
             /* Wakeup 28 Falling-Edge Event :Disabled */

    /* ----------------------------------------------------------- */
    /*    Wakeup/Interrupt Filter Enable Register - WIFER    */
    /* ----------------------------------------------------------- */
        WKUP.WIFER.R = 0x00000000;
             /* Analog glitch filter on External Input2 Pad:- Disabled */
             /* Analog glitch filter on External Input3 Pad:- Disabled */
             /* Analog glitch filter on External Input4 Pad:- Disabled */
             /* Analog glitch filter on External Input5 Pad:- Disabled */
             /* Analog glitch filter on External Input6 Pad:- Disabled */
             /* Analog glitch filter on External Input7 Pad:- Disabled */
             /* Analog glitch filter on External Input8 Pad:- Disabled */
             /* Analog glitch filter on External Input9 Pad:- Disabled */
             /* Analog glitch filter on External Input10 Pad:- Disabled */
             /* Analog glitch filter on External Input11 Pad:- Disabled */
             /* Analog glitch filter on External Input12 Pad:- Disabled */
             /* Analog glitch filter on External Input13 Pad:- Disabled */
             /* Analog glitch filter on External Input14 Pad:- Disabled */
             /* Analog glitch filter on External Input15 Pad:- Disabled */
             /* Analog glitch filter on External Input16 Pad:- Disabled */
             /* Analog glitch filter on External Input17 Pad:- Disabled */
             /* Analog glitch filter on External Input18 Pad:- Disabled */
             /* Analog glitch filter on External Input19 Pad:- Disabled */
             /* Analog glitch filter on External Input20 Pad:- Disabled */
             /* Analog glitch filter on External Input21 Pad:- Disabled */
             /* Analog glitch filter on External Input22 Pad:- Disabled */
             /* Analog glitch filter on External Input25 Pad:- Disabled */
             /* Analog glitch filter on External Input26 Pad:- Disabled */
             /* Analog glitch filter on External Input27 Pad:- Disabled */
             /* Analog glitch filter on External Input28 Pad:- Disabled */



    /* ----------------------------------------------------------- */
    /*    Wakeup/Interrupt Pull up Enable Register - WIPUER    */
    /* ----------------------------------------------------------- */
        WKUP.WIPUER.R = 0x00000000;
           /* Pullup an unconnected wakeup/interrupt 2
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 3
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 4
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 5
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 6
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 7
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 8
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 9
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 10
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 11
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 12
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 13
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 14
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 15
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 16
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 17
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 18
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 19
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 20
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 21
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 22
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 25
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 26
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 27
                               input to a value of ‘1’ :-Disabled */
           /* Pullup an unconnected wakeup/interrupt 28
                               input to a value of ‘1’ :-Disabled */
}


/* ----------------------------------------------------------- */
/*                 SIU Parallel PORT PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_parallel_port_init_fnc(void)
{
  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 0        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[0].R = 0x00000000;
           /*   Port A Mask: 0x0000       */
           /*   Port A Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 1        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[1].R = 0x00000000;
           /*   Port B Mask: 0x0000       */
           /*   Port B Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 2        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[2].R = 0x00000000;
           /*   Port C Mask: 0x0000       */
           /*   Port C Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 3        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[3].R = 0x00000000;
           /*   Port D Mask: 0x0000       */
           /*   Port D Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 4        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[4].R = 0x00000000;
           /*   Port E Mask: 0x0000       */
           /*   Port E Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 5        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[5].R = 0x00000000;
           /*   Port F Mask: 0x0000       */
           /*   Port F Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 6        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[6].R = 0x00000000;
           /*   Port G Mask: 0x0000       */
           /*   Port G Data: 0x0000       */

  /* ----------------------------------------------------------- */
  /*       Masked Parallel GPIO Pin Data Output Register 7        */
  /* ----------------------------------------------------------- */
        SIU.MPGPDO[7].R = 0x00000000;
           /*   Port H Mask: 0x0000       */
           /*   Port H Data: 0x0000       */


}


/* ----------------------------------------------------------- */
/*               SIU Unused Pins Configuration                 */
/* ----------------------------------------------------------- */
void siu_unused_pins_init_fnc(void)
{
}


/* ----------------------------------------------------------- */
/*               SIU PSMI PAD Configuration                 */
/* ----------------------------------------------------------- */
void siu_psmi_init_fnc(void)
{
/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[0]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[0].R = 0x01;
                /*Function Pad Selected CAN1_RXD :- PCR43*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[1]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[1].R = 0x00;
                /*Function Pad Selected CAN2_RXD :- PCR73*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[2]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[2].R = 0x00;
                /*Function Pad Selected CAN3_RXD :- PCR36*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[3]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[3].R = 0x00;
                /*Function Pad Selected CAN4_RXD :- PCR35*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[4]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[4].R = 0x00;
                /*Function Pad Selected CAN5_RXD :- PCR64*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[5]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[5].R = 0x00;
                /*Function Pad Selected DSPI0_SCK :- PCR14*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[6]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[6].R = 0x00;
                /*Function Pad Selected DSPI0_CS :- PCR14*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[7]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[7].R = 0x02;
                /*Function Pad Selected DSPI1_SCK :- PCR114*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[8]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[8].R = 0x02;
                /*Function Pad Selected DSPI1_SIN :- PCR112*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[9]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[9].R = 0x03;
                /*Function Pad Selected DSPI1_CS :- PCR115*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[10]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[10].R = 0x00;
                /*Function Pad Selected DSPI2_SCK :- PCR46*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[11]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[11].R = 0x00;
                /*Function Pad Selected DSPI2_SIN :- PCR44*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[12]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[12].R = 0x00;
                /*Function Pad Selected DSPI2_CS :- PCR47*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[13]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[13].R = 0x00;
                /*Function Pad Selected eMIOS0_CH3 :- PCR3*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[14]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[14].R = 0x00;
                /*Function Pad Selected eMIOS0_CH4 :- PCR4*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[15]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[15].R = 0x00;
                /*Function Pad Selected eMIOS0_CH5 :- PCR5*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[16]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[16].R = 0x00;
                /*Function Pad Selected eMIOS0_CH6 :- PCR6*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[17]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[17].R = 0x00;
                /*Function Pad Selected eMIOS0_CH7 :- PCR7*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[18]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[18].R = 0x00;
                /*Function Pad Selected eMIOS0_CH10 :- PCR10*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[19]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[19].R = 0x00;
                /*Function Pad Selected eMIOS0_CH11 :- PCR11*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[20]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[20].R = 0x00;
                /*Function Pad Selected eMIOS0_CH12 :- PCR44*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[21]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[21].R = 0x00;
                /*Function Pad Selected eMIOS0_CH13 :- PCR45*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[22]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[22].R = 0x00;
                /*Function Pad Selected eMIOS0_CH14 :- PCR46*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[23]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[23].R = 0x00;
                /*Function Pad Selected eMIOS0_CH22 :- PCR70*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[24]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[24].R = 0x00;
                /*Function Pad Selected eMIOS0_CH23 :- PCR71*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[25]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[25].R = 0x00;
                /*Function Pad Selected eMIOS0_CH24 :- PCR60*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[26]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[26].R = 0x00;
                /*Function Pad Selected eMIOS0_CH25 :- PCR61*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[27]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[27].R = 0x00;
                /*Function Pad Selected eMIOS0_CH26 :- PCR62*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[28]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[28].R = 0x00;
                /*Function Pad Selected eMIOS0_CH27 :- PCR63*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[29]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[29].R = 0x00;
                /*Function Pad Selected I2C_SCL :- PCR11*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[30]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[30].R = 0x00;
                /*Function Pad Selected I2C_SDA :- PCR10*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[31]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[31].R = 0x00;
                /*Function Pad Selected LIN3_RX :- PCR8*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[32]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[32].R = 0x00;
                /*Function Pad Selected DSPI3_SCK :- PCR100*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[33]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[33].R = 0x00;
                /*Function Pad Selected DSPI3_SIN :- PCR101*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[34]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[34].R = 0x00;
                /*Function Pad Selected DSPI3_CS0 :- PCR99*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[35]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[35].R = 0x00;
                /*Function Pad Selected DSPI4_SCK :- PCR109*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[36]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[36].R = 0x00;
                /*Function Pad Selected DSPI 4_SIN :- PCR106*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[37]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[37].R = 0x00;
                /*Function Pad Selected DSPI 4_CS0 :- PCR107*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[38]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[38].R = 0x00;
                /*Function Pad Selected eMIOS0_CH0 :- PCR0*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[39]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[39].R = 0x00;
                /*Function Pad Selected eMIOS0_CH1 :- PCR1*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[40]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[40].R = 0x00;
                /*Function Pad Selected eMIOS0_CH28  :- PCR12*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[41]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[41].R = 0x00;
                /*Function Pad Selected eMIOS0_CH29 :- PCR13*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[42]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[42].R = 0x00;
                /*Function Pad Selected eMIOS0_CH30 :- PCR16*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[43]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[43].R = 0x00;
                /*Function Pad Selected eMIOS0_CH31 :- PCR17*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[44]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[44].R = 0x00;
                /*Function Pad Selected eMIOS1_CH1  :- PCR111*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[45]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[45].R = 0x00;
                /*Function Pad Selected eMIOS1_CH2 :- PCR112*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[46]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[46].R = 0x00;
                /*Function Pad Selected eMIOS1_CH3 :- PCR113*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[47]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[47].R = 0x00;
                /*Function Pad Selected eMIOS1_CH4 :- PCR114*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[48]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[48].R = 0x00;
                /*Function Pad Selected eMIOS1_CH5 :- PCR115*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[49]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[49].R = 0x00;
                /*Function Pad Selected eMIOS1_CH17  :- PCR104*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[50]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[50].R = 0x00;
                /*Function Pad Selected eMIOS1_CH18 :- PCR105*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[51]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[51].R = 0x00;
                /*Function Pad Selected eMIOS1_CH25  :- PCR92*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[52]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[52].R = 0x00;
                /*Function Pad Selected eMIOS1_CH26 :- PCR93*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[53]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[53].R = 0x00;
                /*Function Pad Selected eMIOS1_CH27 :- PCR94*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[54]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[54].R = 0x00;
                /*Function Pad Selected eMIOS1_CH28 :- PCR38*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[55]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[55].R = 0x00;
                /*Function Pad Selected eMIOS1_CH29 :- PCR39*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[56]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[56].R = 0x00;
                /*Function Pad Selected eMIOS1_CH30 :- PCR74*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[57]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[57].R = 0x00;
                /*Function Pad Selected eMIOS1_CH31 :- PCR36*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[58]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[58].R = 0x00;
                /*Function Pad Selected LINFlex2_LIN2RX  :- PCR41*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[59]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[59].R = 0x00;
                /*Function Pad Selected LINFlex4_LIN4RX  :- PCR6*/

/*-----------------------------------------------------------*/
/* Pad Selection for Multiplex Input Register PSMI[60]      */
/*-----------------------------------------------------------*/
               SIU.PSMI[60].R = 0x00;
                /*Function Pad Selected LINFlex5_LIN5RX  :- PCR4*/

}



 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

