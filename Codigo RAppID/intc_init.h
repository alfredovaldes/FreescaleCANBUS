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
 * file                   : intc_init.h
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
 * Brief Description      : This file contains the function prototype for intc source file.
 *
 *
 *######################################################################
*/

#ifndef  _INTC_INIT_H
#define  _INTC_INIT_H
/********************  Dependent Include files here **********************/

#include "jdp.h"



/**********************  Function Prototype here *************************/

extern void intc_init_fnc (void);
extern void en_int_fnc (vuint32_t priority);


#endif  /*_INTC_INIT_H*/

/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

