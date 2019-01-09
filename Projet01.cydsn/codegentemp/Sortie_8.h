/*******************************************************************************
* File Name: Sortie_8.h  
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

#if !defined(CY_PINS_Sortie_8_H) /* Pins Sortie_8_H */
#define CY_PINS_Sortie_8_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Sortie_8_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Sortie_8__PORT == 15 && ((Sortie_8__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Sortie_8_Write(uint8 value);
void    Sortie_8_SetDriveMode(uint8 mode);
uint8   Sortie_8_ReadDataReg(void);
uint8   Sortie_8_Read(void);
void    Sortie_8_SetInterruptMode(uint16 position, uint16 mode);
uint8   Sortie_8_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Sortie_8_SetDriveMode() function.
     *  @{
     */
        #define Sortie_8_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Sortie_8_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Sortie_8_DM_RES_UP          PIN_DM_RES_UP
        #define Sortie_8_DM_RES_DWN         PIN_DM_RES_DWN
        #define Sortie_8_DM_OD_LO           PIN_DM_OD_LO
        #define Sortie_8_DM_OD_HI           PIN_DM_OD_HI
        #define Sortie_8_DM_STRONG          PIN_DM_STRONG
        #define Sortie_8_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Sortie_8_MASK               Sortie_8__MASK
#define Sortie_8_SHIFT              Sortie_8__SHIFT
#define Sortie_8_WIDTH              1u

/* Interrupt constants */
#if defined(Sortie_8__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Sortie_8_SetInterruptMode() function.
     *  @{
     */
        #define Sortie_8_INTR_NONE      (uint16)(0x0000u)
        #define Sortie_8_INTR_RISING    (uint16)(0x0001u)
        #define Sortie_8_INTR_FALLING   (uint16)(0x0002u)
        #define Sortie_8_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Sortie_8_INTR_MASK      (0x01u) 
#endif /* (Sortie_8__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Sortie_8_PS                     (* (reg8 *) Sortie_8__PS)
/* Data Register */
#define Sortie_8_DR                     (* (reg8 *) Sortie_8__DR)
/* Port Number */
#define Sortie_8_PRT_NUM                (* (reg8 *) Sortie_8__PRT) 
/* Connect to Analog Globals */                                                  
#define Sortie_8_AG                     (* (reg8 *) Sortie_8__AG)                       
/* Analog MUX bux enable */
#define Sortie_8_AMUX                   (* (reg8 *) Sortie_8__AMUX) 
/* Bidirectional Enable */                                                        
#define Sortie_8_BIE                    (* (reg8 *) Sortie_8__BIE)
/* Bit-mask for Aliased Register Access */
#define Sortie_8_BIT_MASK               (* (reg8 *) Sortie_8__BIT_MASK)
/* Bypass Enable */
#define Sortie_8_BYP                    (* (reg8 *) Sortie_8__BYP)
/* Port wide control signals */                                                   
#define Sortie_8_CTL                    (* (reg8 *) Sortie_8__CTL)
/* Drive Modes */
#define Sortie_8_DM0                    (* (reg8 *) Sortie_8__DM0) 
#define Sortie_8_DM1                    (* (reg8 *) Sortie_8__DM1)
#define Sortie_8_DM2                    (* (reg8 *) Sortie_8__DM2) 
/* Input Buffer Disable Override */
#define Sortie_8_INP_DIS                (* (reg8 *) Sortie_8__INP_DIS)
/* LCD Common or Segment Drive */
#define Sortie_8_LCD_COM_SEG            (* (reg8 *) Sortie_8__LCD_COM_SEG)
/* Enable Segment LCD */
#define Sortie_8_LCD_EN                 (* (reg8 *) Sortie_8__LCD_EN)
/* Slew Rate Control */
#define Sortie_8_SLW                    (* (reg8 *) Sortie_8__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Sortie_8_PRTDSI__CAPS_SEL       (* (reg8 *) Sortie_8__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Sortie_8_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Sortie_8__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Sortie_8_PRTDSI__OE_SEL0        (* (reg8 *) Sortie_8__PRTDSI__OE_SEL0) 
#define Sortie_8_PRTDSI__OE_SEL1        (* (reg8 *) Sortie_8__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Sortie_8_PRTDSI__OUT_SEL0       (* (reg8 *) Sortie_8__PRTDSI__OUT_SEL0) 
#define Sortie_8_PRTDSI__OUT_SEL1       (* (reg8 *) Sortie_8__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Sortie_8_PRTDSI__SYNC_OUT       (* (reg8 *) Sortie_8__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Sortie_8__SIO_CFG)
    #define Sortie_8_SIO_HYST_EN        (* (reg8 *) Sortie_8__SIO_HYST_EN)
    #define Sortie_8_SIO_REG_HIFREQ     (* (reg8 *) Sortie_8__SIO_REG_HIFREQ)
    #define Sortie_8_SIO_CFG            (* (reg8 *) Sortie_8__SIO_CFG)
    #define Sortie_8_SIO_DIFF           (* (reg8 *) Sortie_8__SIO_DIFF)
#endif /* (Sortie_8__SIO_CFG) */

/* Interrupt Registers */
#if defined(Sortie_8__INTSTAT)
    #define Sortie_8_INTSTAT            (* (reg8 *) Sortie_8__INTSTAT)
    #define Sortie_8_SNAP               (* (reg8 *) Sortie_8__SNAP)
    
	#define Sortie_8_0_INTTYPE_REG 		(* (reg8 *) Sortie_8__0__INTTYPE)
#endif /* (Sortie_8__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Sortie_8_H */


/* [] END OF FILE */
