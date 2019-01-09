/*******************************************************************************
* File Name: Buffer_in.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Buffer_in_H) /* Pins Buffer_in_H */
#define CY_PINS_Buffer_in_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Buffer_in_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Buffer_in__PORT == 15 && ((Buffer_in__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Buffer_in_Write(uint8 value);
void    Buffer_in_SetDriveMode(uint8 mode);
uint8   Buffer_in_ReadDataReg(void);
uint8   Buffer_in_Read(void);
void    Buffer_in_SetInterruptMode(uint16 position, uint16 mode);
uint8   Buffer_in_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Buffer_in_SetDriveMode() function.
     *  @{
     */
        #define Buffer_in_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Buffer_in_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Buffer_in_DM_RES_UP          PIN_DM_RES_UP
        #define Buffer_in_DM_RES_DWN         PIN_DM_RES_DWN
        #define Buffer_in_DM_OD_LO           PIN_DM_OD_LO
        #define Buffer_in_DM_OD_HI           PIN_DM_OD_HI
        #define Buffer_in_DM_STRONG          PIN_DM_STRONG
        #define Buffer_in_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Buffer_in_MASK               Buffer_in__MASK
#define Buffer_in_SHIFT              Buffer_in__SHIFT
#define Buffer_in_WIDTH              1u

/* Interrupt constants */
#if defined(Buffer_in__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Buffer_in_SetInterruptMode() function.
     *  @{
     */
        #define Buffer_in_INTR_NONE      (uint16)(0x0000u)
        #define Buffer_in_INTR_RISING    (uint16)(0x0001u)
        #define Buffer_in_INTR_FALLING   (uint16)(0x0002u)
        #define Buffer_in_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Buffer_in_INTR_MASK      (0x01u) 
#endif /* (Buffer_in__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Buffer_in_PS                     (* (reg8 *) Buffer_in__PS)
/* Data Register */
#define Buffer_in_DR                     (* (reg8 *) Buffer_in__DR)
/* Port Number */
#define Buffer_in_PRT_NUM                (* (reg8 *) Buffer_in__PRT) 
/* Connect to Analog Globals */                                                  
#define Buffer_in_AG                     (* (reg8 *) Buffer_in__AG)                       
/* Analog MUX bux enable */
#define Buffer_in_AMUX                   (* (reg8 *) Buffer_in__AMUX) 
/* Bidirectional Enable */                                                        
#define Buffer_in_BIE                    (* (reg8 *) Buffer_in__BIE)
/* Bit-mask for Aliased Register Access */
#define Buffer_in_BIT_MASK               (* (reg8 *) Buffer_in__BIT_MASK)
/* Bypass Enable */
#define Buffer_in_BYP                    (* (reg8 *) Buffer_in__BYP)
/* Port wide control signals */                                                   
#define Buffer_in_CTL                    (* (reg8 *) Buffer_in__CTL)
/* Drive Modes */
#define Buffer_in_DM0                    (* (reg8 *) Buffer_in__DM0) 
#define Buffer_in_DM1                    (* (reg8 *) Buffer_in__DM1)
#define Buffer_in_DM2                    (* (reg8 *) Buffer_in__DM2) 
/* Input Buffer Disable Override */
#define Buffer_in_INP_DIS                (* (reg8 *) Buffer_in__INP_DIS)
/* LCD Common or Segment Drive */
#define Buffer_in_LCD_COM_SEG            (* (reg8 *) Buffer_in__LCD_COM_SEG)
/* Enable Segment LCD */
#define Buffer_in_LCD_EN                 (* (reg8 *) Buffer_in__LCD_EN)
/* Slew Rate Control */
#define Buffer_in_SLW                    (* (reg8 *) Buffer_in__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Buffer_in_PRTDSI__CAPS_SEL       (* (reg8 *) Buffer_in__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Buffer_in_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Buffer_in__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Buffer_in_PRTDSI__OE_SEL0        (* (reg8 *) Buffer_in__PRTDSI__OE_SEL0) 
#define Buffer_in_PRTDSI__OE_SEL1        (* (reg8 *) Buffer_in__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Buffer_in_PRTDSI__OUT_SEL0       (* (reg8 *) Buffer_in__PRTDSI__OUT_SEL0) 
#define Buffer_in_PRTDSI__OUT_SEL1       (* (reg8 *) Buffer_in__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Buffer_in_PRTDSI__SYNC_OUT       (* (reg8 *) Buffer_in__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Buffer_in__SIO_CFG)
    #define Buffer_in_SIO_HYST_EN        (* (reg8 *) Buffer_in__SIO_HYST_EN)
    #define Buffer_in_SIO_REG_HIFREQ     (* (reg8 *) Buffer_in__SIO_REG_HIFREQ)
    #define Buffer_in_SIO_CFG            (* (reg8 *) Buffer_in__SIO_CFG)
    #define Buffer_in_SIO_DIFF           (* (reg8 *) Buffer_in__SIO_DIFF)
#endif /* (Buffer_in__SIO_CFG) */

/* Interrupt Registers */
#if defined(Buffer_in__INTSTAT)
    #define Buffer_in_INTSTAT            (* (reg8 *) Buffer_in__INTSTAT)
    #define Buffer_in_SNAP               (* (reg8 *) Buffer_in__SNAP)
    
	#define Buffer_in_0_INTTYPE_REG 		(* (reg8 *) Buffer_in__0__INTTYPE)
#endif /* (Buffer_in__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Buffer_in_H */


/* [] END OF FILE */
