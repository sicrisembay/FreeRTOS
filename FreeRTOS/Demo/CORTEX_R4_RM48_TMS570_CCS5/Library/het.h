/*
    FreeRTOS V7.4.2 - Copyright (C) 2013 Real Time Engineers Ltd.

    FEATURES AND PORTS ARE ADDED TO FREERTOS ALL THE TIME.  PLEASE VISIT
    http://www.FreeRTOS.org TO ENSURE YOU ARE USING THE LATEST VERSION.

    ***************************************************************************
     *                                                                       *
     *    FreeRTOS tutorial books are available in pdf and paperback.        *
     *    Complete, revised, and edited pdf reference manuals are also       *
     *    available.                                                         *
     *                                                                       *
     *    Purchasing FreeRTOS documentation will not only help you, by       *
     *    ensuring you get running as quickly as possible and with an        *
     *    in-depth knowledge of how to use FreeRTOS, it will also help       *
     *    the FreeRTOS project to continue with its mission of providing     *
     *    professional grade, cross platform, de facto standard solutions    *
     *    for microcontrollers - completely free of charge!                  *
     *                                                                       *
     *    >>> See http://www.FreeRTOS.org/Documentation for details. <<<     *
     *                                                                       *
     *    Thank you for using FreeRTOS, and thank you for your support!      *
     *                                                                       *
    ***************************************************************************


    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation AND MODIFIED BY the FreeRTOS exception.

    >>>>>>NOTE<<<<<< The modification to the GPL is included to allow you to
    distribute a combined work that includes FreeRTOS without being obliged to
    provide the source code for proprietary components outside of the FreeRTOS
    kernel.

    FreeRTOS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
    details. You should have received a copy of the GNU General Public License
    and the FreeRTOS license exception along with FreeRTOS; if not it can be
    viewed here: http://www.freertos.org/a00114.html and also obtained by
    writing to Real Time Engineers Ltd., contact details for whom are available
    on the FreeRTOS WEB site.

    1 tab == 4 spaces!

    ***************************************************************************
     *                                                                       *
     *    Having a problem?  Start by reading the FAQ "My application does   *
     *    not run, what could be wrong?"                                     *
     *                                                                       *
     *    http://www.FreeRTOS.org/FAQHelp.html                               *
     *                                                                       *
    ***************************************************************************


    http://www.FreeRTOS.org - Documentation, books, training, latest versions,
    license and Real Time Engineers Ltd. contact details.

    http://www.FreeRTOS.org/plus - A selection of FreeRTOS ecosystem products,
    including FreeRTOS+Trace - an indispensable productivity tool, and our new
    fully thread aware and reentrant UDP/IP stack.

    http://www.OpenRTOS.com - Real Time Engineers ltd license FreeRTOS to High
    Integrity Systems, who sell the code with commercial support,
    indemnification and middleware, under the OpenRTOS brand.

    http://www.SafeRTOS.com - High Integrity Systems also provide a safety
    engineered and independently SIL3 certified version for use in safety and
    mission critical applications that require provable dependability.
*/

#ifndef __HET_H__
#define __HET_H__

#include "gio.h"

/** @struct hetBase
*   @brief HET Register Definition
*
*   This structure is used to access the HET module egisters.
*/
/** @typedef hetBASE_t
*   @brief HET Register Frame Type Definition
*
*   This type is used to access the HET Registers.
*/
typedef volatile struct hetBase
{
    unsigned GCR;     /**< 0x0000: Global control register              */
    unsigned PFR;     /**< 0x0004: Prescale factor register             */
    unsigned ADDR;    /**< 0x0008: Current address register             */
    unsigned OFF1;    /**< 0x000C: Interrupt offset register 1          */
    unsigned OFF2;    /**< 0x0010: Interrupt offset register 2          */
    unsigned INTENAS; /**< 0x0014: Interrupt enable set register        */
    unsigned INTENAC; /**< 0x0018: Interrupt enable clear register      */
    unsigned EXC1;    /**< 0x001C: Exeption control register 1          */
    unsigned EXC2;    /**< 0x0020: Exeption control register 2          */
    unsigned PRY;     /**< 0x0024: Interrupt priority register          */
    unsigned FLG;     /**< 0x0028: Interrupt flag register              */
    unsigned : 32U;   /**< 0x002C: Reserved                             */
    unsigned : 32U;   /**< 0x0030: Reserved                             */
    unsigned HRSH;    /**< 0x0034: High resoltion share register        */
    unsigned XOR;     /**< 0x0038: XOR share register                   */
    unsigned REQENS;  /**< 0x003C: Request enable set register          */
    unsigned REQENC;  /**< 0x0040: Request enable clear register        */
    unsigned REQDS;   /**< 0x0044: Request destination select register  */
    unsigned : 32U;   /**< 0x0048: Reserved                             */
    unsigned DIR;     /**< 0x004C: Direction register                   */
    unsigned DIN;     /**< 0x0050: Data input register                  */
    unsigned DOUT;    /**< 0x0054: Data output register                 */
    unsigned DSET;    /**< 0x0058: Data output set register             */
    unsigned DCLR;    /**< 0x005C: Data output clear register           */
    unsigned PDR;     /**< 0x0060: Open drain register                  */
    unsigned PULDIS;  /**< 0x0064: Pull disable register                */
    unsigned PSL;     /**< 0x0068: Pull select register                 */
    unsigned : 32U;   /**< 0x006C: Reserved                             */
    unsigned : 32U;   /**< 0x0070: Reserved                             */
    unsigned PCREG;   /**< 0x0074: Parity control register              */
    unsigned PAR;     /**< 0x0078: Parity address register              */
    unsigned PPR;     /**< 0x007C: Parity pin select register           */
    unsigned SFPRLD;  /**< 0x0080: Suppression filter preload register  */
    unsigned SFENA;   /**< 0x0084: Suppression filter enable register   */
    unsigned : 32U;   /**< 0x0088: Reserved                             */
    unsigned LBPSEL;  /**< 0x008C: Loop back pair select register       */
    unsigned LBPDIR;  /**< 0x0090: Loop back pair direction register    */
} hetBASE_t;


/** @def hetREG
*   @brief HET Register Frame Pointer
*
*   This pointer is used by the HET driver to access the het module registers.
*/
#define hetREG ((hetBASE_t *)0xFFF7B800U)


/** @def hetPORT
*   @brief HET GIO Port Register Pointer
*
*   Pointer used by the GIO driver to access I/O PORT of HET
*   (use the GIO drivers to access the port pins).
*/
#define hetPORT ((gioPORT_t *)0xFFF7B84CU)

#endif
