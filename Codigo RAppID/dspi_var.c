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
 * file                   : dspi_var.c
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
 * Brief Description      : This File contains variable definition for Transmit
 *                          and Receive queues
 *
 ******************************************************************************** 
 *
 * Detail Description     : This File contains variables which contain Transmission
 *                         and reception data for respective DSPI module.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "typedefs.h"



vuint32_t DSPI0_TxQUE[1]= {0U};    /* Transmit Queue DSPI_0 Variable */
vuint32_t DSPI1_TxQUE[1]= {0U};    /* Transmit Queue DSPI_1 Variable */
vuint32_t DSPI2_TxQUE[1]= {0U};    /* Transmit Queue DSPI_2 Variable */
vuint32_t DSPI3_TxQUE[1]= {0U};    /* Transmit Queue DSPI_3 Variable */
vuint32_t DSPI4_TxQUE[1]= {0U};    /* Transmit Queue DSPI_4 Variable */

vuint16_t DSPI0_RxQUE[1]= {0U };    /* Receive Queue DSPI_0 Variable */
vuint16_t DSPI1_RxQUE[1]= {0U };    /* Receive Queue DSPI_1 Variable */
vuint16_t DSPI2_RxQUE[1]= {0U };    /* Receive Queue DSPI_2 Variable */
vuint16_t DSPI3_RxQUE[1]= {0U };    /* Receive Queue DSPI_3 Variable */
vuint16_t DSPI4_RxQUE[1]= {0U };    /* Receive Queue DSPI_4 Variable */



 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

