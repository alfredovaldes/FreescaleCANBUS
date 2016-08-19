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
 * file                   : intc_sw_vecttable.c
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
 * Brief Description      : This file contains  definition for the Interrupt Vector table 
 *
 ******************************************************************************** 
 *
 * Detail Description     : This file is generated when software vector mode is
 *                         selected. This file contains the definition for all
 *                         Interrupt vector tables.(For eg. DSPI,Linflex,ADC...)
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "rappid_ref.h"
#include "jdp.h"
#include "intc_pit.h"

/**********************  Function Prototype here *************************/

void interrupt_handler (void);

/*************************** Pragma_1 Section **************************/

/* pragma for defining the section of the Interrupt Vector table */
#pragma section data_type ".vects" ".uvects"

/* Definition for the Interrupt Vector table */
uint32_t IntcIsrVectorTable[] = {
    (uint32_t)&interrupt_handler,    /* Vector - 0    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 1    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 2    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 3    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 4    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 5    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 6    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 7    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 8    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 9    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 10    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 11    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 12    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 13    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 14    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 15    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 16    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 17    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 18    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 19    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 20    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 21    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 22    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 23    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 24    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 25    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 26    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 27    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 28    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 29    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 30    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 31    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 32    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 33    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 34    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 35    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 36    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 37    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 38    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 39    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 40    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 41    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 42    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 43    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 44    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 45    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 46    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 47    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 48    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 49    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 50    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 51    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 52    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 53    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 54    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 55    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 56    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 57    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 58    Reserved */
    (uint32_t)&PIT_Ch0_ISR,    /* Vector - 59    PIT_Ch0_ISR*/
    (uint32_t)&interrupt_handler,    /* Vector - 60    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 61    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 62    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 63    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 64    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 65    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 66    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 67    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 68    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 69    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 70    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 71    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 72    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 73    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 74    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 75    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 76    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 77    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 78    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 79    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 80    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 81    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 82    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 83    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 84    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 85    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 86    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 87    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 88    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 89    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 90    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 91    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 92    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 93    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 94    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 95    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 96    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 97    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 98    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 99    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 100    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 101    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 102    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 103    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 104    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 105    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 106    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 107    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 108    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 109    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 110    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 111    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 112    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 113    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 114    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 115    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 116    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 117    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 118    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 119    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 120    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 121    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 122    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 123    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 124    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 125    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 126    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 127    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 128    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 129    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 130    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 131    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 132    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 133    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 134    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 135    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 136    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 137    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 138    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 139    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 140    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 141    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 142    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 143    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 144    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 145    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 146    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 147    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 148    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 149    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 150    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 151    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 152    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 153    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 154    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 155    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 156    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 157    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 158    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 159    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 160    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 161    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 162    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 163    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 164    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 165    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 166    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 167    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 168    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 169    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 170    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 171    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 172    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 173    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 174    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 175    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 176    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 177    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 178    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 179    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 180    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 181    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 182    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 183    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 184    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 185    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 186    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 187    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 188    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 189    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 190    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 191    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 192    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 193    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 194    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 195    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 196    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 197    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 198    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 199    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 200    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 201    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 202    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 203    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 204    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 205    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 206    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 207    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 208    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 209    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 210    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 211    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 212    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 213    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 214    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 215    interrupt_handler*/
    (uint32_t)&interrupt_handler,    /* Vector - 216    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 217    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 218    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 219    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 220    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 221    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 222    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 223    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 224    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 225    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 226    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 227    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 228    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 229    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 230    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 231    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 232    Reserved */
    (uint32_t)&interrupt_handler,    /* Vector - 233    Reserved */
};

/********************** DUMMY INTERRUPT HANDLER **********************/
void interrupt_handler (void)
{

}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

