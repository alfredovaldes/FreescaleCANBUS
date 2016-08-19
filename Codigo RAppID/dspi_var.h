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
 * file                   : dspi_var.h
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
 * Brief Description      : This File contains Transmit and Receive variables declaration
 *
 *
 *######################################################################
*/

#ifndef  _DSPI_VAR_H
#define  _DSPI_VAR_H
/********************  Dependent Include files here **********************/

#include "jdp.h"




#define DSPI_0_PUSHR 0xFFF90034
#define DSPI_1_PUSHR 0xFFF94034
#define DSPI_2_PUSHR 0xFFF98034
#define DSPI_3_PUSHR 0xFFF9C034
#define DSPI_4_PUSHR 0xFFFA0034
#define DSPI_0_POPR  0xFFF9003A
#define DSPI_1_POPR  0xFFF9403A
#define DSPI_2_POPR  0xFFF9803A
#define DSPI_3_POPR  0xFFF9C03A
#define DSPI_4_POPR  0xFFFA003A


extern vuint32_t DSPI0_TxQUE[1];    /* Transmit Queue DSPI_0 Variable */
extern vuint32_t DSPI1_TxQUE[1];    /* Transmit Queue DSPI_1 Variable */
extern vuint32_t DSPI2_TxQUE[1];    /* Transmit Queue DSPI_2 Variable */
extern vuint32_t DSPI3_TxQUE[1];    /* Transmit Queue DSPI_3 Variable */
extern vuint32_t DSPI4_TxQUE[1];    /* Transmit Queue DSPI_4 Variable */

extern vuint16_t DSPI0_RxQUE[1];    /* Receive Queue DSPI_0 Variable */
extern vuint16_t DSPI1_RxQUE[1];    /* Receive Queue DSPI_1 Variable */
extern vuint16_t DSPI2_RxQUE[1];    /* Receive Queue DSPI_2 Variable */
extern vuint16_t DSPI3_RxQUE[1];    /* Receive Queue DSPI_3 Variable */
extern vuint16_t DSPI4_RxQUE[1];    /* Receive Queue DSPI_4 Variable */



#endif  /*_DSPI_VAR_H*/

/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

