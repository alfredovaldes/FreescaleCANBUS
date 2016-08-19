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
 * file                   : flexcan_init.c
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
 * Brief Description      : This file contains FlexCAN register configuration
 *                          in freeze mode
 *
 ******************************************************************************** 
 *
 * Detail Description     : File contains functions where each FlexCAN configuration
 *                         for maximum number of MBs, CAN speed, different
 *                         operating modes, Receive Mask and Interrupt Mask
 *                         can be done in freeze mode.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "flexcan_init.h"


/*********************  Initialization Function(s) ************************/

uint8_t flexcan_init_fnc(void)
{
   uint8_t init_status = 0;

   init_status += flexcan_0_init_fnc();
   init_status += 2*flexcan_1_init_fnc();
   init_status += 4*flexcan_2_init_fnc();
   init_status += 8*flexcan_3_init_fnc();
   init_status += 16*flexcan_4_init_fnc();
   init_status += 32*flexcan_5_init_fnc();

   return init_status;
}
/*********************  CAN_0 Initialization Function(s) ************************/

uint8_t flexcan_0_init_fnc(void)
{

    uint16_t i, x;
    uint8_t status;
    volatile uint16_t j;

    /*Enable the CAN module */
    CAN_0.MCR.B.MDIS    = 0;

    /* Reset FlexCAN Module */
    CAN_0.MCR.B.SOFTRST = 1;
    while( CAN_0.MCR.B.SOFTRST ==1){}

    /*Disable the CAN module */
    CAN_0.MCR.B.MDIS    = 1;

    /* Set CAN clock source 1: bus , 0: oscillator */
    CAN_0.CR.B.CLKSRC   = 0;

    /*Enable the CAN module */
    CAN_0.MCR.B.MDIS    = 1;

    /* Set FRZ bit */
    CAN_0.MCR.B.FRZ   = 1;
    /* Set HALT bit */
    CAN_0.MCR.B.HALT  = 1;

/* ----------------------------------------------------------- */
/*                   CAN_0.MCR Control Register                          */
/* ----------------------------------------------------------- */
    CAN_0.MCR.R = 0xD080000F;
    /* Disable the FlexCAN module: 1*/
    /* Freeze Enable :Enable*/
    /* FIFO Enable :Disable*/
    /* Halt : Enable*/
    /* Supervisor Mode : 1*/
    /* Warning Interrupt Enable : Disable*/
    /* Self Reception : Enable*/
    /* Backwards Compatibility Configuration : Enable*/
    /* Local Priority Enable : Disable*/
    /* Abort Enable : Disable*/
    /* ID Acceptance Mode : 0*/
    /* Maximum Number of Message Buffers : 15*/

/* ----------------------------------------------------------- */
/*    CAN_0.CR Control register                                */
/* ----------------------------------------------------------- */
    CAN_0.CR.R  = 0x041B0006;
    /* CAN Speed : 100 kb/s                      */
    /* Prescalar Division Factor: 5              */
    /* Resynchronization Jump Width: 1           */
    /* Phase Segment1: 4                         */
    /* Phase Segment2: 4                         */
    /* Bus -Off Interrupt Mask: Disabled         */
    /* CAN Error Interrupt Mask: Disabled        */
    /* CLOCK Source: Oscillator                  */
    /* Loop Back Mode: Disabled                  */
    /* CAN bit Sampling Mode: 1 Sample           */
    /* Bus off Recovery: Enabled                 */
    /* Timer Synch Mode: Disabled                */
    /* Lowest Buffer Transfer First: Disabled    */
    /* Listen Only Mode: Disabled                */
    /* Propagation Segment: 7                    */



    /* Set the FlexCAN Maximum Buffer Number */
    CAN_0.MCR.B.MAXMB  = 15;


    /* clear memory from message buffer 0 to 15 */
    for(x=0; x < 16; x++)
    {
        CAN_0.BUF[x].CS.R = 0;
        CAN_0.BUF[x].ID.R = 0;
        for(i=0; i < 2; i++) 
        {
            CAN_0.BUF[x].DATA.W[i] = 0;
        }
    }

/* ----------------------------------------------------------- */
/*    CAN_0.RXGMASK global mask                                */
/* ----------------------------------------------------------- */
    CAN_0.RXGMASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_0.RX14MASK buffer 14 mask                             */
/* ----------------------------------------------------------- */
    CAN_0.RX14MASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_0.RX15MASK  buffer 15 mask                            */
/* ----------------------------------------------------------- */
    CAN_0.RX15MASK.R  = 0xFFFFFFFF;


/* ----------------------------------------------------------- */
/*    CAN_0.IMRH Interrupt masks high register                  */
/* ----------------------------------------------------------- */
    CAN_0.IMRH.R  = 0x00000000;

/* ----------------------------------------------------------- */
/*    CAN_0.IMRL Interrupt masks low register                  */
/* ----------------------------------------------------------- */
    CAN_0.IMRL.R  = 0x00000000;

    /* Negate the HALT and the FREEZE bit to let the FlexCAN synchronize. */
    /* Exit and Disable freeze mode */
    CAN_0.MCR.B.HALT  =  1;
    CAN_0.MCR.B.FRZ   =  1;
    

    /* await synchronization (delay) */
    for(j=1; j < 255; j++){}

    if(CAN_0.MCR.B.NOTRDY == 1)
    {
       status = 1;
    }
    else
    {
       status = 0;
    }


    return status;

}
/*********************  CAN_1 Initialization Function(s) ************************/

uint8_t flexcan_1_init_fnc(void)
{

    uint16_t i, x;
    uint8_t status;
    volatile uint16_t j;

    /*Enable the CAN module */
    CAN_1.MCR.B.MDIS    = 0;

    /* Reset FlexCAN Module */
    CAN_1.MCR.B.SOFTRST = 1;
    while( CAN_1.MCR.B.SOFTRST ==1){}

    /*Disable the CAN module */
    CAN_1.MCR.B.MDIS    = 1;

    /* Set CAN clock source 1: bus , 0: oscillator */
    CAN_1.CR.B.CLKSRC   = 1;

    /*Enable the CAN module */
    CAN_1.MCR.B.MDIS    = 0;

    /* Set FRZ bit */
    CAN_1.MCR.B.FRZ   = 1;
    /* Set HALT bit */
    CAN_1.MCR.B.HALT  = 1;

/* ----------------------------------------------------------- */
/*                   CAN_1.MCR Control Register                          */
/* ----------------------------------------------------------- */
    CAN_1.MCR.R = 0x5080000F;
    /* Enable the FlexCAN module: 0*/
    /* Freeze Enable :Enable*/
    /* FIFO Enable :Disable*/
    /* Halt : Enable*/
    /* Supervisor Mode : 1*/
    /* Warning Interrupt Enable : Disable*/
    /* Self Reception : Enable*/
    /* Backwards Compatibility Configuration : Enable*/
    /* Local Priority Enable : Disable*/
    /* Abort Enable : Disable*/
    /* ID Acceptance Mode : 0*/
    /* Maximum Number of Message Buffers : 15*/

/* ----------------------------------------------------------- */
/*    CAN_1.CR Control register                                */
/* ----------------------------------------------------------- */
    CAN_1.CR.R  = 0x071B2006;
    /* CAN Speed : 500 kb/s                      */
    /* Prescalar Division Factor: 8              */
    /* Resynchronization Jump Width: 1           */
    /* Phase Segment1: 4                         */
    /* Phase Segment2: 4                         */
    /* Bus -Off Interrupt Mask: Disabled         */
    /* CAN Error Interrupt Mask: Disabled        */
    /* CLOCK Source: System                  */
    /* Loop Back Mode: Disabled                  */
    /* CAN bit Sampling Mode: 1 Sample           */
    /* Bus off Recovery: Enabled                 */
    /* Timer Synch Mode: Disabled                */
    /* Lowest Buffer Transfer First: Disabled    */
    /* Listen Only Mode: Disabled                */
    /* Propagation Segment: 7                    */



    /* Set the FlexCAN Maximum Buffer Number */
    CAN_1.MCR.B.MAXMB  = 15;


    /* clear memory from message buffer 0 to 15 */
    for(x=0; x < 16; x++)
    {
        CAN_1.BUF[x].CS.R = 0;
        CAN_1.BUF[x].ID.R = 0;
        for(i=0; i < 2; i++) 
        {
            CAN_1.BUF[x].DATA.W[i] = 0;
        }
    }

/* ----------------------------------------------------------- */
/*    CAN_1.RXGMASK global mask                                */
/* ----------------------------------------------------------- */
    CAN_1.RXGMASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_1.RX14MASK buffer 14 mask                             */
/* ----------------------------------------------------------- */
    CAN_1.RX14MASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_1.RX15MASK  buffer 15 mask                            */
/* ----------------------------------------------------------- */
    CAN_1.RX15MASK.R  = 0xFFFFFFFF;


/* ----------------------------------------------------------- */
/*    CAN_1.IMRH Interrupt masks high register                  */
/* ----------------------------------------------------------- */
    CAN_1.IMRH.R  = 0x00000000;

/* ----------------------------------------------------------- */
/*    CAN_1.IMRL Interrupt masks low register                  */
/* ----------------------------------------------------------- */
    CAN_1.IMRL.R  = 0x00000000;

    /* Negate the HALT and the FREEZE bit to let the FlexCAN synchronize. */
    /* Exit and Disable freeze mode */
    CAN_1.MCR.B.HALT  =  0;
    CAN_1.MCR.B.FRZ   =  0;
    

    /* await synchronization (delay) */
    for(j=1; j < 255; j++){}

    if(CAN_1.MCR.B.NOTRDY == 1)
    {
       status = 1;
    }
    else
    {
       status = 0;
    }


    return status;

}
/*********************  CAN_2 Initialization Function(s) ************************/

uint8_t flexcan_2_init_fnc(void)
{

    uint16_t i, x;
    uint8_t status;
    volatile uint16_t j;

    /*Enable the CAN module */
    CAN_2.MCR.B.MDIS    = 0;

    /* Reset FlexCAN Module */
    CAN_2.MCR.B.SOFTRST = 1;
    while( CAN_2.MCR.B.SOFTRST ==1){}

    /*Disable the CAN module */
    CAN_2.MCR.B.MDIS    = 1;

    /* Set CAN clock source 1: bus , 0: oscillator */
    CAN_2.CR.B.CLKSRC   = 0;

    /*Enable the CAN module */
    CAN_2.MCR.B.MDIS    = 1;

    /* Set FRZ bit */
    CAN_2.MCR.B.FRZ   = 1;
    /* Set HALT bit */
    CAN_2.MCR.B.HALT  = 1;

/* ----------------------------------------------------------- */
/*                   CAN_2.MCR Control Register                          */
/* ----------------------------------------------------------- */
    CAN_2.MCR.R = 0xD080000F;
    /* Disable the FlexCAN module: 1*/
    /* Freeze Enable :Enable*/
    /* FIFO Enable :Disable*/
    /* Halt : Enable*/
    /* Supervisor Mode : 1*/
    /* Warning Interrupt Enable : Disable*/
    /* Self Reception : Enable*/
    /* Backwards Compatibility Configuration : Enable*/
    /* Local Priority Enable : Disable*/
    /* Abort Enable : Disable*/
    /* ID Acceptance Mode : 0*/
    /* Maximum Number of Message Buffers : 15*/

/* ----------------------------------------------------------- */
/*    CAN_2.CR Control register                                */
/* ----------------------------------------------------------- */
    CAN_2.CR.R  = 0x041B0006;
    /* CAN Speed : 100 kb/s                      */
    /* Prescalar Division Factor: 5              */
    /* Resynchronization Jump Width: 1           */
    /* Phase Segment1: 4                         */
    /* Phase Segment2: 4                         */
    /* Bus -Off Interrupt Mask: Disabled         */
    /* CAN Error Interrupt Mask: Disabled        */
    /* CLOCK Source: Oscillator                  */
    /* Loop Back Mode: Disabled                  */
    /* CAN bit Sampling Mode: 1 Sample           */
    /* Bus off Recovery: Enabled                 */
    /* Timer Synch Mode: Disabled                */
    /* Lowest Buffer Transfer First: Disabled    */
    /* Listen Only Mode: Disabled                */
    /* Propagation Segment: 7                    */



    /* Set the FlexCAN Maximum Buffer Number */
    CAN_2.MCR.B.MAXMB  = 15;


    /* clear memory from message buffer 0 to 15 */
    for(x=0; x < 16; x++)
    {
        CAN_2.BUF[x].CS.R = 0;
        CAN_2.BUF[x].ID.R = 0;
        for(i=0; i < 2; i++) 
        {
            CAN_2.BUF[x].DATA.W[i] = 0;
        }
    }

/* ----------------------------------------------------------- */
/*    CAN_2.RXGMASK global mask                                */
/* ----------------------------------------------------------- */
    CAN_2.RXGMASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_2.RX14MASK buffer 14 mask                             */
/* ----------------------------------------------------------- */
    CAN_2.RX14MASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_2.RX15MASK  buffer 15 mask                            */
/* ----------------------------------------------------------- */
    CAN_2.RX15MASK.R  = 0xFFFFFFFF;


/* ----------------------------------------------------------- */
/*    CAN_2.IMRH Interrupt masks high register                  */
/* ----------------------------------------------------------- */
    CAN_2.IMRH.R  = 0x00000000;

/* ----------------------------------------------------------- */
/*    CAN_2.IMRL Interrupt masks low register                  */
/* ----------------------------------------------------------- */
    CAN_2.IMRL.R  = 0x00000000;

    /* Negate the HALT and the FREEZE bit to let the FlexCAN synchronize. */
    /* Exit and Disable freeze mode */
    CAN_2.MCR.B.HALT  =  1;
    CAN_2.MCR.B.FRZ   =  1;
    

    /* await synchronization (delay) */
    for(j=1; j < 255; j++){}

    if(CAN_2.MCR.B.NOTRDY == 1)
    {
       status = 1;
    }
    else
    {
       status = 0;
    }


    return status;

}
/*********************  CAN_3 Initialization Function(s) ************************/

uint8_t flexcan_3_init_fnc(void)
{

    uint16_t i, x;
    uint8_t status;
    volatile uint16_t j;

    /*Enable the CAN module */
    CAN_3.MCR.B.MDIS    = 0;

    /* Reset FlexCAN Module */
    CAN_3.MCR.B.SOFTRST = 1;
    while( CAN_3.MCR.B.SOFTRST ==1){}

    /*Disable the CAN module */
    CAN_3.MCR.B.MDIS    = 1;

    /* Set CAN clock source 1: bus , 0: oscillator */
    CAN_3.CR.B.CLKSRC   = 0;

    /*Enable the CAN module */
    CAN_3.MCR.B.MDIS    = 1;

    /* Set FRZ bit */
    CAN_3.MCR.B.FRZ   = 1;
    /* Set HALT bit */
    CAN_3.MCR.B.HALT  = 1;

/* ----------------------------------------------------------- */
/*                   CAN_3.MCR Control Register                          */
/* ----------------------------------------------------------- */
    CAN_3.MCR.R = 0xD080000F;
    /* Disable the FlexCAN module: 1*/
    /* Freeze Enable :Enable*/
    /* FIFO Enable :Disable*/
    /* Halt : Enable*/
    /* Supervisor Mode : 1*/
    /* Warning Interrupt Enable : Disable*/
    /* Self Reception : Enable*/
    /* Backwards Compatibility Configuration : Enable*/
    /* Local Priority Enable : Disable*/
    /* Abort Enable : Disable*/
    /* ID Acceptance Mode : 0*/
    /* Maximum Number of Message Buffers : 15*/

/* ----------------------------------------------------------- */
/*    CAN_3.CR Control register                                */
/* ----------------------------------------------------------- */
    CAN_3.CR.R  = 0x041B0006;
    /* CAN Speed : 100 kb/s                      */
    /* Prescalar Division Factor: 5              */
    /* Resynchronization Jump Width: 1           */
    /* Phase Segment1: 4                         */
    /* Phase Segment2: 4                         */
    /* Bus -Off Interrupt Mask: Disabled         */
    /* CAN Error Interrupt Mask: Disabled        */
    /* CLOCK Source: Oscillator                  */
    /* Loop Back Mode: Disabled                  */
    /* CAN bit Sampling Mode: 1 Sample           */
    /* Bus off Recovery: Enabled                 */
    /* Timer Synch Mode: Disabled                */
    /* Lowest Buffer Transfer First: Disabled    */
    /* Listen Only Mode: Disabled                */
    /* Propagation Segment: 7                    */



    /* Set the FlexCAN Maximum Buffer Number */
    CAN_3.MCR.B.MAXMB  = 15;


    /* clear memory from message buffer 0 to 15 */
    for(x=0; x < 16; x++)
    {
        CAN_3.BUF[x].CS.R = 0;
        CAN_3.BUF[x].ID.R = 0;
        for(i=0; i < 2; i++) 
        {
            CAN_3.BUF[x].DATA.W[i] = 0;
        }
    }

/* ----------------------------------------------------------- */
/*    CAN_3.RXGMASK global mask                                */
/* ----------------------------------------------------------- */
    CAN_3.RXGMASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_3.RX14MASK buffer 14 mask                             */
/* ----------------------------------------------------------- */
    CAN_3.RX14MASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_3.RX15MASK  buffer 15 mask                            */
/* ----------------------------------------------------------- */
    CAN_3.RX15MASK.R  = 0xFFFFFFFF;


/* ----------------------------------------------------------- */
/*    CAN_3.IMRH Interrupt masks high register                  */
/* ----------------------------------------------------------- */
    CAN_3.IMRH.R  = 0x00000000;

/* ----------------------------------------------------------- */
/*    CAN_3.IMRL Interrupt masks low register                  */
/* ----------------------------------------------------------- */
    CAN_3.IMRL.R  = 0x00000000;

    /* Negate the HALT and the FREEZE bit to let the FlexCAN synchronize. */
    /* Exit and Disable freeze mode */
    CAN_3.MCR.B.HALT  =  1;
    CAN_3.MCR.B.FRZ   =  1;
    

    /* await synchronization (delay) */
    for(j=1; j < 255; j++){}

    if(CAN_3.MCR.B.NOTRDY == 1)
    {
       status = 1;
    }
    else
    {
       status = 0;
    }


    return status;

}
/*********************  CAN_4 Initialization Function(s) ************************/

uint8_t flexcan_4_init_fnc(void)
{

    uint16_t i, x;
    uint8_t status;
    volatile uint16_t j;

    /*Enable the CAN module */
    CAN_4.MCR.B.MDIS    = 0;

    /* Reset FlexCAN Module */
    CAN_4.MCR.B.SOFTRST = 1;
    while( CAN_4.MCR.B.SOFTRST ==1){}

    /*Disable the CAN module */
    CAN_4.MCR.B.MDIS    = 1;

    /* Set CAN clock source 1: bus , 0: oscillator */
    CAN_4.CR.B.CLKSRC   = 0;

    /*Enable the CAN module */
    CAN_4.MCR.B.MDIS    = 1;

    /* Set FRZ bit */
    CAN_4.MCR.B.FRZ   = 1;
    /* Set HALT bit */
    CAN_4.MCR.B.HALT  = 1;

/* ----------------------------------------------------------- */
/*                   CAN_4.MCR Control Register                          */
/* ----------------------------------------------------------- */
    CAN_4.MCR.R = 0xD080000F;
    /* Disable the FlexCAN module: 1*/
    /* Freeze Enable :Enable*/
    /* FIFO Enable :Disable*/
    /* Halt : Enable*/
    /* Supervisor Mode : 1*/
    /* Warning Interrupt Enable : Disable*/
    /* Self Reception : Enable*/
    /* Backwards Compatibility Configuration : Enable*/
    /* Local Priority Enable : Disable*/
    /* Abort Enable : Disable*/
    /* ID Acceptance Mode : 0*/
    /* Maximum Number of Message Buffers : 15*/

/* ----------------------------------------------------------- */
/*    CAN_4.CR Control register                                */
/* ----------------------------------------------------------- */
    CAN_4.CR.R  = 0x041B0006;
    /* CAN Speed : 100 kb/s                      */
    /* Prescalar Division Factor: 5              */
    /* Resynchronization Jump Width: 1           */
    /* Phase Segment1: 4                         */
    /* Phase Segment2: 4                         */
    /* Bus -Off Interrupt Mask: Disabled         */
    /* CAN Error Interrupt Mask: Disabled        */
    /* CLOCK Source: Oscillator                  */
    /* Loop Back Mode: Disabled                  */
    /* CAN bit Sampling Mode: 1 Sample           */
    /* Bus off Recovery: Enabled                 */
    /* Timer Synch Mode: Disabled                */
    /* Lowest Buffer Transfer First: Disabled    */
    /* Listen Only Mode: Disabled                */
    /* Propagation Segment: 7                    */



    /* Set the FlexCAN Maximum Buffer Number */
    CAN_4.MCR.B.MAXMB  = 15;


    /* clear memory from message buffer 0 to 15 */
    for(x=0; x < 16; x++)
    {
        CAN_4.BUF[x].CS.R = 0;
        CAN_4.BUF[x].ID.R = 0;
        for(i=0; i < 2; i++) 
        {
            CAN_4.BUF[x].DATA.W[i] = 0;
        }
    }

/* ----------------------------------------------------------- */
/*    CAN_4.RXGMASK global mask                                */
/* ----------------------------------------------------------- */
    CAN_4.RXGMASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_4.RX14MASK buffer 14 mask                             */
/* ----------------------------------------------------------- */
    CAN_4.RX14MASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_4.RX15MASK  buffer 15 mask                            */
/* ----------------------------------------------------------- */
    CAN_4.RX15MASK.R  = 0xFFFFFFFF;


/* ----------------------------------------------------------- */
/*    CAN_4.IMRH Interrupt masks high register                  */
/* ----------------------------------------------------------- */
    CAN_4.IMRH.R  = 0x00000000;

/* ----------------------------------------------------------- */
/*    CAN_4.IMRL Interrupt masks low register                  */
/* ----------------------------------------------------------- */
    CAN_4.IMRL.R  = 0x00000000;

    /* Negate the HALT and the FREEZE bit to let the FlexCAN synchronize. */
    /* Exit and Disable freeze mode */
    CAN_4.MCR.B.HALT  =  1;
    CAN_4.MCR.B.FRZ   =  1;
    

    /* await synchronization (delay) */
    for(j=1; j < 255; j++){}

    if(CAN_4.MCR.B.NOTRDY == 1)
    {
       status = 1;
    }
    else
    {
       status = 0;
    }


    return status;

}
/*********************  CAN_5 Initialization Function(s) ************************/

uint8_t flexcan_5_init_fnc(void)
{

    uint16_t i, x;
    uint8_t status;
    volatile uint16_t j;

    /*Enable the CAN module */
    CAN_5.MCR.B.MDIS    = 0;

    /* Reset FlexCAN Module */
    CAN_5.MCR.B.SOFTRST = 1;
    while( CAN_5.MCR.B.SOFTRST ==1){}

    /*Disable the CAN module */
    CAN_5.MCR.B.MDIS    = 1;

    /* Set CAN clock source 1: bus , 0: oscillator */
    CAN_5.CR.B.CLKSRC   = 0;

    /*Enable the CAN module */
    CAN_5.MCR.B.MDIS    = 1;

    /* Set FRZ bit */
    CAN_5.MCR.B.FRZ   = 1;
    /* Set HALT bit */
    CAN_5.MCR.B.HALT  = 1;

/* ----------------------------------------------------------- */
/*                   CAN_5.MCR Control Register                          */
/* ----------------------------------------------------------- */
    CAN_5.MCR.R = 0xD080000F;
    /* Disable the FlexCAN module: 1*/
    /* Freeze Enable :Enable*/
    /* FIFO Enable :Disable*/
    /* Halt : Enable*/
    /* Supervisor Mode : 1*/
    /* Warning Interrupt Enable : Disable*/
    /* Self Reception : Enable*/
    /* Backwards Compatibility Configuration : Enable*/
    /* Local Priority Enable : Disable*/
    /* Abort Enable : Disable*/
    /* ID Acceptance Mode : 0*/
    /* Maximum Number of Message Buffers : 15*/

/* ----------------------------------------------------------- */
/*    CAN_5.CR Control register                                */
/* ----------------------------------------------------------- */
    CAN_5.CR.R  = 0x041B0006;
    /* CAN Speed : 100 kb/s                      */
    /* Prescalar Division Factor: 5              */
    /* Resynchronization Jump Width: 1           */
    /* Phase Segment1: 4                         */
    /* Phase Segment2: 4                         */
    /* Bus -Off Interrupt Mask: Disabled         */
    /* CAN Error Interrupt Mask: Disabled        */
    /* CLOCK Source: Oscillator                  */
    /* Loop Back Mode: Disabled                  */
    /* CAN bit Sampling Mode: 1 Sample           */
    /* Bus off Recovery: Enabled                 */
    /* Timer Synch Mode: Disabled                */
    /* Lowest Buffer Transfer First: Disabled    */
    /* Listen Only Mode: Disabled                */
    /* Propagation Segment: 7                    */



    /* Set the FlexCAN Maximum Buffer Number */
    CAN_5.MCR.B.MAXMB  = 15;


    /* clear memory from message buffer 0 to 15 */
    for(x=0; x < 16; x++)
    {
        CAN_5.BUF[x].CS.R = 0;
        CAN_5.BUF[x].ID.R = 0;
        for(i=0; i < 2; i++) 
        {
            CAN_5.BUF[x].DATA.W[i] = 0;
        }
    }

/* ----------------------------------------------------------- */
/*    CAN_5.RXGMASK global mask                                */
/* ----------------------------------------------------------- */
    CAN_5.RXGMASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_5.RX14MASK buffer 14 mask                             */
/* ----------------------------------------------------------- */
    CAN_5.RX14MASK.R  = 0xFFFFFFFF;

/* ----------------------------------------------------------- */
/*    CAN_5.RX15MASK  buffer 15 mask                            */
/* ----------------------------------------------------------- */
    CAN_5.RX15MASK.R  = 0xFFFFFFFF;


/* ----------------------------------------------------------- */
/*    CAN_5.IMRH Interrupt masks high register                  */
/* ----------------------------------------------------------- */
    CAN_5.IMRH.R  = 0x00000000;

/* ----------------------------------------------------------- */
/*    CAN_5.IMRL Interrupt masks low register                  */
/* ----------------------------------------------------------- */
    CAN_5.IMRL.R  = 0x00000000;

    /* Negate the HALT and the FREEZE bit to let the FlexCAN synchronize. */
    /* Exit and Disable freeze mode */
    CAN_5.MCR.B.HALT  =  1;
    CAN_5.MCR.B.FRZ   =  1;
    

    /* await synchronization (delay) */
    for(j=1; j < 255; j++){}

    if(CAN_5.MCR.B.NOTRDY == 1)
    {
       status = 1;
    }
    else
    {
       status = 0;
    }


    return status;

}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

