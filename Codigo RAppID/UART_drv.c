/*
 *######################################################################
 *                (c) Copyright 2011 Freescale Semiconductor, Inc.
 *                         ALL RIGHTS RESERVED. 
 *######################################################################
 *
 * Project Name           : N/A
 *
 * @Revision Number       : 1.0
 * 
 * @File Name             : can_cpp_inteface.c
 *
 * Target Compiler        : Codewarrior
 *
 * Target Part            : N/A
 *
 * Part Errata Fixes      : none
 *
 * Created By             : RAppID Team
 *
 * Created on Date        : 22-Feb-2011 14:57:10
 * 
 * @Brief Description     : Source file UART Driver
 ***********************************************************************
 *
 *   Revision History
 *
 *   Date          Author           Description
 *   ----------    ------           ------------------------------------
 *   02-23-2011    RAppID Team      Initial version 
 *
 *######################################################################
*/
/******************************************************************************
* Includes
******************************************************************************/
#include "UART_drv_cfg.h"
#include "UART_drv_api.h"

/******************************************************************************
* Constants
******************************************************************************/

/******************************************************************************
* Macros 
******************************************************************************/

/******************************************************************************
* Types
******************************************************************************/
typedef struct
{
	uint16_t	u16BufFill;
	uint16_t	u16BufRead;		
	uint8_t		u8Buf[UART_BUF_SIZE];
	
}stCicularBuf;

/******************************************************************************
* Local Functions
******************************************************************************/

/******************************************************************************
* Global variables
******************************************************************************/
stCicularBuf UARTBuf;

/******************************************************************************
* Static variables
******************************************************************************/

/******************************************************************************
* Global functions
******************************************************************************/

/******************************************************************************
*   Function: Uart0Tx
*
*   Description: Transmit request for UART
*                
*   Caveats:
*
******************************************************************************/
void UartTxMsg(uint8_t *u8TxData, uint32_t u32Size)
{
	uint32_t u32Temp = 0, u32BRDL = 0,u32TDFL;
	uint32_t u32Shift;
	vuint32_t u32Cnt;
	
	u32TDFL = UART_XMIT_FLD_LENGTH; /* Read the Xmit Data Field Length */
	
	for(u32Temp = 0 ; u32Temp < u32Size ; u32Temp++)
	{
		
		u32Shift = u32Temp % (u32TDFL+1);
			
		/* Reverse the byte order (as LSB is xmit 1st) & transmit */		
		u32BRDL |= 	(*u8TxData <<  (8 * u32Shift));
		*u8TxData++;
		
		/* Xmit data after (TDFL+1) bytes are appended or after total Tx data size */
		if(((u32Shift+1) % (u32TDFL+1) == 0) || (u32Temp == (u32Size-1)))
		{
			LINFLEX_0.BDRL.R = u32BRDL;
			u32Cnt = 1000000;
			while((UART_TX_FLAG == 0) && (u32Cnt > 0))/* Wait for Data to get trasmitted */
			{
				u32Cnt--;
			}
	
            LINFLEX_0.LINSR.R = 0xF23F;
            LINFLEX_0.UARTSR.R = 0x00000002;
				
			u32BRDL = 0;				
		}	
		
	}
}

/******************************************************************************
*   Function: Uart0RxDataByte
*
*   Description: Get data from UART buffer
*                
*   Caveats:
*
******************************************************************************/
uint8_t UartRxDataByte(void)
{	
	uint8_t data = 0;
	uint32_t u32Size = 0;
		
	if(UARTBuf.u16BufRead >=  UART_BUF_SIZE) /* check if reached the end of the buffer */
	{
		UARTBuf.u16BufRead = 0; /* reset circular buffer */
	}
	
	if (UARTBuf.u16BufFill != UARTBuf.u16BufRead) /* check if there is new data */
	{
	    data = UARTBuf.u8Buf[UARTBuf.u16BufRead++];	    
	}
	
	return (data); /* Return the data from circular buffer */
}

/******************************************************************************
*   Function: Uart0RxNewDataSize
*
*   Description: Check how much new data there is in Rx buffer
*                
*   Caveats:
*
******************************************************************************/
uint32_t UartRxNewDataSize(void)
{
	int32_t dataSize;
	
	dataSize = UARTBuf.u16BufFill - UARTBuf.u16BufRead;
	
	if(dataSize < 0)
	{
		dataSize = UART_BUF_SIZE - UARTBuf.u16BufRead;
		dataSize += UARTBuf.u16BufFill;
	}
	
	return (uint32_t)dataSize;	
		/* Return Rx data size */
}

/******************************************************************************
*   Function: Uart0RxBufEmpty
*
*   Description: Check if the Rx buffer is empty (no new data to report)
*                
*   Caveats:
*
******************************************************************************/
uint8_t UartRxBufEmpty(void)
{
	uint8_t bufEmpty = 1;
	
	if (UARTBuf.u16BufFill != UARTBuf.u16BufRead) /* check if there is new data */
	{
        bufEmpty = 0;
	}
	
	return (bufEmpty);	/* Return buffer status */
		
}

/******************************************************************************
*   Function: Uart0BufInit
*
*   Description: Initialize UART Buffer
*                
*   Caveats:
*
******************************************************************************/
void UartBufInit(void)
{
	UARTBuf.u16BufFill = UARTBuf.u16BufRead = 0; /* Init the cicular buf pointers */
}

/******************************************************************************
*   Function: Uart0RxBuf
*
*   Description: Function that fills the UART Buffer from the UART RX peripheral
*                
*   Caveats:
*
******************************************************************************/
void UartRxFillBuf(void)
{
    uint32_t u32UartCounter;
    
    if (UART_RX_FLAG == 1)
    {    
        LINFLEX_0.LINSR.R = 0xF23F;
        LINFLEX_0.UARTSR.R = 0x00000004;
        
        /* Store 32-bit BDRM reg in bytes, with LSB stored 1st */
        for(u32UartCounter = 0 ; u32UartCounter <= UART_RECV_FLD_LENGTH ; u32UartCounter++)
        {			
        	if(UARTBuf.u16BufFill >=  UART_BUF_SIZE)
        	{
        		UARTBuf.u16BufFill = 0;
        	}
        	/* Store the data in cicular buffer */
        	UARTBuf.u8Buf[UARTBuf.u16BufFill++] = (uint8_t)(LINFLEX_0.BDRM.R >> (u32UartCounter * 8));
        }		
        LINFLEX_0.UARTSR.R = 0x00000200;/* Make the receive buffer free */
    }
}

