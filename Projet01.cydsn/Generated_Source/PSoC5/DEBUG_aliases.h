/*******************************************************************************
* File Name: DEBUG.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_DEBUG_ALIASES_H) /* Pins DEBUG_ALIASES_H */
#define CY_PINS_DEBUG_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define DEBUG_0			(DEBUG__0__PC)
#define DEBUG_0_INTR	((uint16)((uint16)0x0001u << DEBUG__0__SHIFT))

#define DEBUG_1			(DEBUG__1__PC)
#define DEBUG_1_INTR	((uint16)((uint16)0x0001u << DEBUG__1__SHIFT))

#define DEBUG_2			(DEBUG__2__PC)
#define DEBUG_2_INTR	((uint16)((uint16)0x0001u << DEBUG__2__SHIFT))

#define DEBUG_INTR_ALL	 ((uint16)(DEBUG_0_INTR| DEBUG_1_INTR| DEBUG_2_INTR))

#endif /* End Pins DEBUG_ALIASES_H */


/* [] END OF FILE */
