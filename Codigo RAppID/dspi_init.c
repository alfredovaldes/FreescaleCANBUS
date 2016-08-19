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
 * file                   : dspi_init.c
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
 * Brief Description      : This File contains configuration for DSPI 
 *
 ******************************************************************************** 
 *
 * Detail Description     : This file contain functions for configuration of
 *                         DSPI module and done initialization for clock and
 *                         transfer attributes,Interrupt and DMA request select,
 *                         Transmit and Receive queue.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "dspi_init.h"
#include "dspi_var.h"




void dspi_init_fnc (void) 
{
    dspi0_init_fnc();
    dspi1_init_fnc();
    dspi2_init_fnc();
    dspi3_init_fnc();
    dspi4_init_fnc();
}

void dspi0_init_fnc (void) 
{
/*----------------------------------------------------------- */
/*    DSPI_0 Transmit and Receive QUEUE Initialization    */
/*----------------------------------------------------------- */


/*----------------------------------------------------------- */
/*    DSPI Initialization code for the DSPI_0 Device.    */
/*----------------------------------------------------------- */

/*----------------------------------------------------------- */
/*    DSPI_0 Module bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_0.MCR.B.MDIS=0;
            /* Module Enabled */

/*----------------------------------------------------------- */
/*    DSPI_0 Halt bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_0.MCR.B.HALT =0x1;
            /*HALT bit set before CTAR'S initialization*/

    DSPI_0.CTAR[0].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[1].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[2].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[3].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[4].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_0.CTAR[5].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

/*----------------------------------------------------------- */
/*    DSPI_0 DMA/Interrupt Select Enable Register (DSPI_RSER)    */
/*----------------------------------------------------------- */
    DSPI_0.RSER.R = 0x00000000;
            /* Transmission Complete Request : Disable    */
            /* DSPI Finished Request : Disable    */
            /* Transmit FIFO Underflow Request Enable : Disable    */
            /* Transmit FIFO Fill Request Enable : Disable    */
            /* Transmit FIFO Fill DMA or Interrupt Request : Interrupt    */
            /* Receive FIFO Overflow Request Enable : Disable    */
            /* Receive FIFO Drain Request Enable : Disable    */
            /* Receive FIFO Drain DMA or Interrupt Request : Interrupt    */

/*----------------------------------------------------------- */
/*    DSPI_0 Module Configuration Register (DSPI_MCR)    */
/*----------------------------------------------------------- */
    DSPI_0.MCR.R = 0x00000001;
            /* Master/Slave Mode : Slave    */
            /* SPI/DSI/CSI Mode : SPI    */
            /* Freeze Mode : Disable    */
            /* Modified Time Format : Disable    */
            /* Peripheral Chip Select Strobe is used as the Peripheral chip select 5 signal.    */
            /* Receive FIFO Overflow Overwrite Enable : Disable    */
            /* Peripheral Chip Select Line 5 inactive state : Low    */
            /* Peripheral Chip Select Line 4 inactive state : Low    */
            /* Peripheral Chip Select Line 3 inactive state : Low    */
            /* Peripheral Chip Select Line 2 inactive state : Low    */
            /* Peripheral Chip Select Line 1 inactive state : Low    */
            /* Peripheral Chip Select Line 0 inactive state : Low    */
            /* Transmit FIFO : Enable    */
            /* Receive FIFO : Enable    */
            /* Sample Point : 0    */
            /* Continuous Serial Communication Clock : Disable    */
            /* Halt Mode : Enable    */
            /* Module : Enabled    */

/*----------------------------------------------------------- */
/*    DSPI_0 Transfer Configuration Register (DSPI_TCR)    */
/*----------------------------------------------------------- */
    DSPI_0.TCR.B.TCNT = 0x0;
            /* Transfer Count : 0    */

    DSPI_0.MCR.B.MDIS= 0;
            /* Module : Enable*/

}


void dspi1_init_fnc (void) 
{
/*----------------------------------------------------------- */
/*    DSPI_1 Transmit and Receive QUEUE Initialization    */
/*----------------------------------------------------------- */


/*----------------------------------------------------------- */
/*    DSPI Initialization code for the DSPI_1 Device.    */
/*----------------------------------------------------------- */

/*----------------------------------------------------------- */
/*    DSPI_1 Module bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_1.MCR.B.MDIS=0;
            /* Module Enabled */

/*----------------------------------------------------------- */
/*    DSPI_1 Halt bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_1.MCR.B.HALT =0x1;
            /*HALT bit set before CTAR'S initialization*/

    DSPI_1.CTAR[0].R = 0x78000000;
            /* Baudrate : 16.0 Mb/s    */
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[1].R = 0x78000000;
            /* Baudrate : 16.0 Mb/s    */
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[2].R = 0x78000000;
            /* Baudrate : 16.0 Mb/s    */
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[3].R = 0x78000000;
            /* Baudrate : 16.0 Mb/s    */
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[4].R = 0x78000000;
            /* Baudrate : 16.0 Mb/s    */
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_1.CTAR[5].R = 0x78000000;
            /* Baudrate : 16.0 Mb/s    */
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

/*----------------------------------------------------------- */
/*    DSPI_1 DMA/Interrupt Select Enable Register (DSPI_RSER)    */
/*----------------------------------------------------------- */
    DSPI_1.RSER.R = 0x00000000;
            /* Transmission Complete Request : Disable    */
            /* DSPI Finished Request : Disable    */
            /* Transmit FIFO Underflow Request Enable : Disable    */
            /* Transmit FIFO Fill Request Enable : Disable    */
            /* Transmit FIFO Fill DMA or Interrupt Request : Interrupt    */
            /* Receive FIFO Overflow Request Enable : Disable    */
            /* Receive FIFO Drain Request Enable : Disable    */
            /* Receive FIFO Drain DMA or Interrupt Request : Interrupt    */

/*----------------------------------------------------------- */
/*    DSPI_1 Module Configuration Register (DSPI_MCR)    */
/*----------------------------------------------------------- */
    DSPI_1.MCR.R = 0x80010000;
            /* Master/Slave Mode : Master    */
            /* SPI/DSI/CSI Mode : SPI    */
            /* Freeze Mode : Disable    */
            /* Modified Time Format : Disable    */
            /* Peripheral Chip Select Strobe is used as the Peripheral chip select 5 signal.    */
            /* Receive FIFO Overflow Overwrite Enable : Disable    */
            /* Peripheral Chip Select Line 4 inactive state : Low    */
            /* Peripheral Chip Select Line 3 inactive state : Low    */
            /* Peripheral Chip Select Line 2 inactive state : Low    */
            /* Peripheral Chip Select Line 1 inactive state : Low    */
            /* Peripheral Chip Select Line 0 inactive state : High    */
            /* Transmit FIFO : Enable    */
            /* Receive FIFO : Enable    */
            /* Sample Point : 0    */
            /* Continuous Serial Communication Clock : Disable    */
            /* Halt Mode : Disable    */
            /* Module : Enabled    */

/*----------------------------------------------------------- */
/*    DSPI_1 Transfer Configuration Register (DSPI_TCR)    */
/*----------------------------------------------------------- */
    DSPI_1.TCR.B.TCNT = 0x0;
            /* Transfer Count : 0    */

    DSPI_1.MCR.B.MDIS= 0;
            /* Module : Enable*/

}


void dspi2_init_fnc (void) 
{
/*----------------------------------------------------------- */
/*    DSPI_2 Transmit and Receive QUEUE Initialization    */
/*----------------------------------------------------------- */


/*----------------------------------------------------------- */
/*    DSPI Initialization code for the DSPI_2 Device.    */
/*----------------------------------------------------------- */

/*----------------------------------------------------------- */
/*    DSPI_2 Module bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_2.MCR.B.MDIS=0;
            /* Module Enabled */

/*----------------------------------------------------------- */
/*    DSPI_2 Halt bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_2.MCR.B.HALT =0x1;
            /*HALT bit set before CTAR'S initialization*/

    DSPI_2.CTAR[0].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[1].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[2].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[3].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[4].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_2.CTAR[5].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

/*----------------------------------------------------------- */
/*    DSPI_2 DMA/Interrupt Select Enable Register (DSPI_RSER)    */
/*----------------------------------------------------------- */
    DSPI_2.RSER.R = 0x00000000;
            /* Transmission Complete Request : Disable    */
            /* DSPI Finished Request : Disable    */
            /* Transmit FIFO Underflow Request Enable : Disable    */
            /* Transmit FIFO Fill Request Enable : Disable    */
            /* Transmit FIFO Fill DMA or Interrupt Request : Interrupt    */
            /* Receive FIFO Overflow Request Enable : Disable    */
            /* Receive FIFO Drain Request Enable : Disable    */
            /* Receive FIFO Drain DMA or Interrupt Request : Interrupt    */

/*----------------------------------------------------------- */
/*    DSPI_2 Module Configuration Register (DSPI_MCR)    */
/*----------------------------------------------------------- */
    DSPI_2.MCR.R = 0x00000001;
            /* Master/Slave Mode : Slave    */
            /* SPI/DSI/CSI Mode : SPI    */
            /* Freeze Mode : Disable    */
            /* Modified Time Format : Disable    */
            /* Peripheral Chip Select Strobe is used as the Peripheral chip select 5 signal.    */
            /* Receive FIFO Overflow Overwrite Enable : Disable    */
            /* Peripheral Chip Select Line 3 inactive state : Low    */
            /* Peripheral Chip Select Line 2 inactive state : Low    */
            /* Peripheral Chip Select Line 1 inactive state : Low    */
            /* Peripheral Chip Select Line 0 inactive state : Low    */
            /* Transmit FIFO : Enable    */
            /* Receive FIFO : Enable    */
            /* Sample Point : 0    */
            /* Continuous Serial Communication Clock : Disable    */
            /* Halt Mode : Enable    */
            /* Module : Enabled    */

/*----------------------------------------------------------- */
/*    DSPI_2 Transfer Configuration Register (DSPI_TCR)    */
/*----------------------------------------------------------- */
    DSPI_2.TCR.B.TCNT = 0x0;
            /* Transfer Count : 0    */

    DSPI_2.MCR.B.MDIS= 0;
            /* Module : Enable*/

}


void dspi3_init_fnc (void) 
{
/*----------------------------------------------------------- */
/*    DSPI_3 Transmit and Receive QUEUE Initialization    */
/*----------------------------------------------------------- */


/*----------------------------------------------------------- */
/*    DSPI Initialization code for the DSPI_3 Device.    */
/*----------------------------------------------------------- */

/*----------------------------------------------------------- */
/*    DSPI_3 Module bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_3.MCR.B.MDIS=0;
            /* Module Enabled */

/*----------------------------------------------------------- */
/*    DSPI_3 Halt bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_3.MCR.B.HALT =0x1;
            /*HALT bit set before CTAR'S initialization*/

    DSPI_3.CTAR[0].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_3.CTAR[1].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_3.CTAR[2].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_3.CTAR[3].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_3.CTAR[4].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_3.CTAR[5].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

/*----------------------------------------------------------- */
/*    DSPI_3 DMA/Interrupt Select Enable Register (DSPI_RSER)    */
/*----------------------------------------------------------- */
    DSPI_3.RSER.R = 0x00000000;
            /* Transmission Complete Request : Disable    */
            /* DSPI Finished Request : Disable    */
            /* Transmit FIFO Underflow Request Enable : Disable    */
            /* Transmit FIFO Fill Request Enable : Disable    */
            /* Transmit FIFO Fill DMA or Interrupt Request : Interrupt    */
            /* Receive FIFO Overflow Request Enable : Disable    */
            /* Receive FIFO Drain Request Enable : Disable    */
            /* Receive FIFO Drain DMA or Interrupt Request : Interrupt    */

/*----------------------------------------------------------- */
/*    DSPI_3 Module Configuration Register (DSPI_MCR)    */
/*----------------------------------------------------------- */
    DSPI_3.MCR.R = 0x00000001;
            /* Master/Slave Mode : Slave    */
            /* SPI/DSI/CSI Mode : SPI    */
            /* Freeze Mode : Disable    */
            /* Modified Time Format : Disable    */
            /* Peripheral Chip Select Strobe is used as the Peripheral chip select 5 signal.    */
            /* Receive FIFO Overflow Overwrite Enable : Disable    */
            /* Peripheral Chip Select Line 0 inactive state : Low    */
            /* Transmit FIFO : Enable    */
            /* Receive FIFO : Enable    */
            /* Sample Point : 0    */
            /* Continuous Serial Communication Clock : Disable    */
            /* Halt Mode : Enable    */
            /* Module : Enabled    */

/*----------------------------------------------------------- */
/*    DSPI_3 Transfer Configuration Register (DSPI_TCR)    */
/*----------------------------------------------------------- */
    DSPI_3.TCR.B.TCNT = 0x0;
            /* Transfer Count : 0    */

    DSPI_3.MCR.B.MDIS= 0;
            /* Module : Enable*/

}


void dspi4_init_fnc (void) 
{
/*----------------------------------------------------------- */
/*    DSPI_4 Transmit and Receive QUEUE Initialization    */
/*----------------------------------------------------------- */


/*----------------------------------------------------------- */
/*    DSPI Initialization code for the DSPI_4 Device.    */
/*----------------------------------------------------------- */

/*----------------------------------------------------------- */
/*    DSPI_4 Module bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_4.MCR.B.MDIS=0;
            /* Module Enabled */

/*----------------------------------------------------------- */
/*    DSPI_4 Halt bit set (DSPI_MCR)            */
/*----------------------------------------------------------- */
    DSPI_4.MCR.B.HALT =0x1;
            /*HALT bit set before CTAR'S initialization*/

    DSPI_4.CTAR[0].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_4.CTAR[1].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_4.CTAR[2].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_4.CTAR[3].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_4.CTAR[4].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

    DSPI_4.CTAR[5].R = 0x78000000;
            /* Frame Size : 16    */
            /* Clock Polarity : Low    */
            /* Clock Phase - Data Capture : Leading    */
            /* Data Transfer Order : MSB First    */
            /* PCS TO SCK Delay Prescaler : 1    */
            /* After SCK Delay Prescaler : 1    */
            /* Delay After Transfer Prescaler : 1    */
            /* Baud Rate Prescaler : 2    */
            /* PCS to SCK Delay Scalar : 2    */
            /* After SCK Delay Scalar : 2    */
            /* Delay After Transfer Scalar : 2    */
            /* Baud rate Scalar : 2    */
            /* Double Baud Rate : Disable    */

/*----------------------------------------------------------- */
/*    DSPI_4 DMA/Interrupt Select Enable Register (DSPI_RSER)    */
/*----------------------------------------------------------- */
    DSPI_4.RSER.R = 0x00000000;
            /* Transmission Complete Request : Disable    */
            /* DSPI Finished Request : Disable    */
            /* Transmit FIFO Underflow Request Enable : Disable    */
            /* Transmit FIFO Fill Request Enable : Disable    */
            /* Transmit FIFO Fill DMA or Interrupt Request : Interrupt    */
            /* Receive FIFO Overflow Request Enable : Disable    */
            /* Receive FIFO Drain Request Enable : Disable    */
            /* Receive FIFO Drain DMA or Interrupt Request : Interrupt    */

/*----------------------------------------------------------- */
/*    DSPI_4 Module Configuration Register (DSPI_MCR)    */
/*----------------------------------------------------------- */
    DSPI_4.MCR.R = 0x00000001;
            /* Master/Slave Mode : Slave    */
            /* SPI/DSI/CSI Mode : SPI    */
            /* Freeze Mode : Disable    */
            /* Modified Time Format : Disable    */
            /* Peripheral Chip Select Strobe is used as the Peripheral chip select 5 signal.    */
            /* Receive FIFO Overflow Overwrite Enable : Disable    */
            /* Transmit FIFO : Enable    */
            /* Receive FIFO : Enable    */
            /* Sample Point : 0    */
            /* Continuous Serial Communication Clock : Disable    */
            /* Halt Mode : Enable    */
            /* Module : Enabled    */

/*----------------------------------------------------------- */
/*    DSPI_4 Transfer Configuration Register (DSPI_TCR)    */
/*----------------------------------------------------------- */
    DSPI_4.TCR.B.TCNT = 0x0;
            /* Transfer Count : 0    */

    DSPI_4.MCR.B.MDIS= 0;
            /* Module : Enable*/

}



 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

