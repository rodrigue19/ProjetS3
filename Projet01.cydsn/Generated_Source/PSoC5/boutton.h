/*******************************************************************************
* File Name: boutton.h  
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

#if !defined(CY_PINS_boutton_H) /* Pins boutton_H */
#define CY_PINS_boutton_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "boutton_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 boutton__PORT == 15 && ((boutton__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    boutton_Write(uint8 value);
void    boutton_SetDriveMode(uint8 mode);
uint8   boutton_ReadDataReg(void);
uint8   boutton_Read(void);
void    boutton_SetInterruptMode(uint16 position, uint16 mode);
uint8   boutton_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the boutton_SetDriveMode() function.
     *  @{
     */
        #define boutton_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define boutton_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define boutton_DM_RES_UP          PIN_DM_RES_UP
        #define boutton_DM_RES_DWN         PIN_DM_RES_DWN
        #define boutton_DM_OD_LO           PIN_DM_OD_LO
        #define boutton_DM_OD_HI           PIN_DM_OD_HI
        #define boutton_DM_STRONG          PIN_DM_STRONG
        #define boutton_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define boutton_MASK               boutton__MASK
#define boutton_SHIFT              boutton__SHIFT
#define boutton_WIDTH              1u

/* Interrupt constants */
#if defined(boutton__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in boutton_SetInterruptMode() function.
     *  @{
     */
        #define boutton_INTR_NONE      (uint16)(0x0000u)
        #define boutton_INTR_RISING    (uint16)(0x0001u)
        #define boutton_INTR_FALLING   (uint16)(0x0002u)
        #define boutton_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define boutton_INTR_MASK      (0x01u) 
#endif /* (boutton__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define boutton_PS                     (* (reg8 *) boutton__PS)
/* Data Register */
#define boutton_DR                     (* (reg8 *) boutton__DR)
/* Port Number */
#define boutton_PRT_NUM                (* (reg8 *) boutton__PRT) 
/* Connect to Analog Globals */                                                  
#define boutton_AG                     (* (reg8 *) boutton__AG)                       
/* Analog MUX bux enable */
#define boutton_AMUX                   (* (reg8 *) boutton__AMUX) 
/* Bidirectional Enable */                                                        
#define boutton_BIE                    (* (reg8 *) boutton__BIE)
/* Bit-mask for Aliased Register Access */
#define boutton_BIT_MASK               (* (reg8 *) boutton__BIT_MASK)
/* Bypass Enable */
#define boutton_BYP                    (* (reg8 *) boutton__BYP)
/* Port wide control signals */                                                   
#define boutton_CTL                    (* (reg8 *) boutton__CTL)
/* Drive Modes */
#define boutton_DM0                    (* (reg8 *) boutton__DM0) 
#define boutton_DM1                    (* (reg8 *) boutton__DM1)
#define boutton_DM2                    (* (reg8 *) boutton__DM2) 
/* Input Buffer Disable Override */
#define boutton_INP_DIS                (* (reg8 *) boutton__INP_DIS)
/* LCD Common or Segment Drive */
#define boutton_LCD_COM_SEG            (* (reg8 *) boutton__LCD_COM_SEG)
/* Enable Segment LCD */
#define boutton_LCD_EN                 (* (reg8 *) boutton__LCD_EN)
/* Slew Rate Control */
#define boutton_SLW                    (* (reg8 *) boutton__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define boutton_PRTDSI__CAPS_SEL       (* (reg8 *) boutton__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define boutton_PRTDSI__DBL_SYNC_IN    (* (reg8 *) boutton__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define boutton_PRTDSI__OE_SEL0        (* (reg8 *) boutton__PRTDSI__OE_SEL0) 
#define boutton_PRTDSI__OE_SEL1        (* (reg8 *) boutton__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define boutton_PRTDSI__OUT_SEL0       (* (reg8 *) boutton__PRTDSI__OUT_SEL0) 
#define boutton_PRTDSI__OUT_SEL1       (* (reg8 *) boutton__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define boutton_PRTDSI__SYNC_OUT       (* (reg8 *) boutton__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(boutton__SIO_CFG)
    #define boutton_SIO_HYST_EN        (* (reg8 *) boutton__SIO_HYST_EN)
    #define boutton_SIO_REG_HIFREQ     (* (reg8 *) boutton__SIO_REG_HIFREQ)
    #define boutton_SIO_CFG            (* (reg8 *) boutton__SIO_CFG)
    #define boutton_SIO_DIFF           (* (reg8 *) boutton__SIO_DIFF)
#endif /* (boutton__SIO_CFG) */

/* Interrupt Registers */
#if defined(boutton__INTSTAT)
    #define boutton_INTSTAT            (* (reg8 *) boutton__INTSTAT)
    #define boutton_SNAP               (* (reg8 *) boutton__SNAP)
    
	#define boutton_0_INTTYPE_REG 		(* (reg8 *) boutton__0__INTTYPE)
#endif /* (boutton__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_boutton_H */


/* [] END OF FILE */
