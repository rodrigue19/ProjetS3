/*******************************************************************************
* File Name: Sortie_10.h  
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

#if !defined(CY_PINS_Sortie_10_H) /* Pins Sortie_10_H */
#define CY_PINS_Sortie_10_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Sortie_10_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Sortie_10__PORT == 15 && ((Sortie_10__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Sortie_10_Write(uint8 value);
void    Sortie_10_SetDriveMode(uint8 mode);
uint8   Sortie_10_ReadDataReg(void);
uint8   Sortie_10_Read(void);
void    Sortie_10_SetInterruptMode(uint16 position, uint16 mode);
uint8   Sortie_10_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Sortie_10_SetDriveMode() function.
     *  @{
     */
        #define Sortie_10_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Sortie_10_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Sortie_10_DM_RES_UP          PIN_DM_RES_UP
        #define Sortie_10_DM_RES_DWN         PIN_DM_RES_DWN
        #define Sortie_10_DM_OD_LO           PIN_DM_OD_LO
        #define Sortie_10_DM_OD_HI           PIN_DM_OD_HI
        #define Sortie_10_DM_STRONG          PIN_DM_STRONG
        #define Sortie_10_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Sortie_10_MASK               Sortie_10__MASK
#define Sortie_10_SHIFT              Sortie_10__SHIFT
#define Sortie_10_WIDTH              1u

/* Interrupt constants */
#if defined(Sortie_10__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Sortie_10_SetInterruptMode() function.
     *  @{
     */
        #define Sortie_10_INTR_NONE      (uint16)(0x0000u)
        #define Sortie_10_INTR_RISING    (uint16)(0x0001u)
        #define Sortie_10_INTR_FALLING   (uint16)(0x0002u)
        #define Sortie_10_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Sortie_10_INTR_MASK      (0x01u) 
#endif /* (Sortie_10__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Sortie_10_PS                     (* (reg8 *) Sortie_10__PS)
/* Data Register */
#define Sortie_10_DR                     (* (reg8 *) Sortie_10__DR)
/* Port Number */
#define Sortie_10_PRT_NUM                (* (reg8 *) Sortie_10__PRT) 
/* Connect to Analog Globals */                                                  
#define Sortie_10_AG                     (* (reg8 *) Sortie_10__AG)                       
/* Analog MUX bux enable */
#define Sortie_10_AMUX                   (* (reg8 *) Sortie_10__AMUX) 
/* Bidirectional Enable */                                                        
#define Sortie_10_BIE                    (* (reg8 *) Sortie_10__BIE)
/* Bit-mask for Aliased Register Access */
#define Sortie_10_BIT_MASK               (* (reg8 *) Sortie_10__BIT_MASK)
/* Bypass Enable */
#define Sortie_10_BYP                    (* (reg8 *) Sortie_10__BYP)
/* Port wide control signals */                                                   
#define Sortie_10_CTL                    (* (reg8 *) Sortie_10__CTL)
/* Drive Modes */
#define Sortie_10_DM0                    (* (reg8 *) Sortie_10__DM0) 
#define Sortie_10_DM1                    (* (reg8 *) Sortie_10__DM1)
#define Sortie_10_DM2                    (* (reg8 *) Sortie_10__DM2) 
/* Input Buffer Disable Override */
#define Sortie_10_INP_DIS                (* (reg8 *) Sortie_10__INP_DIS)
/* LCD Common or Segment Drive */
#define Sortie_10_LCD_COM_SEG            (* (reg8 *) Sortie_10__LCD_COM_SEG)
/* Enable Segment LCD */
#define Sortie_10_LCD_EN                 (* (reg8 *) Sortie_10__LCD_EN)
/* Slew Rate Control */
#define Sortie_10_SLW                    (* (reg8 *) Sortie_10__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Sortie_10_PRTDSI__CAPS_SEL       (* (reg8 *) Sortie_10__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Sortie_10_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Sortie_10__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Sortie_10_PRTDSI__OE_SEL0        (* (reg8 *) Sortie_10__PRTDSI__OE_SEL0) 
#define Sortie_10_PRTDSI__OE_SEL1        (* (reg8 *) Sortie_10__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Sortie_10_PRTDSI__OUT_SEL0       (* (reg8 *) Sortie_10__PRTDSI__OUT_SEL0) 
#define Sortie_10_PRTDSI__OUT_SEL1       (* (reg8 *) Sortie_10__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Sortie_10_PRTDSI__SYNC_OUT       (* (reg8 *) Sortie_10__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Sortie_10__SIO_CFG)
    #define Sortie_10_SIO_HYST_EN        (* (reg8 *) Sortie_10__SIO_HYST_EN)
    #define Sortie_10_SIO_REG_HIFREQ     (* (reg8 *) Sortie_10__SIO_REG_HIFREQ)
    #define Sortie_10_SIO_CFG            (* (reg8 *) Sortie_10__SIO_CFG)
    #define Sortie_10_SIO_DIFF           (* (reg8 *) Sortie_10__SIO_DIFF)
#endif /* (Sortie_10__SIO_CFG) */

/* Interrupt Registers */
#if defined(Sortie_10__INTSTAT)
    #define Sortie_10_INTSTAT            (* (reg8 *) Sortie_10__INTSTAT)
    #define Sortie_10_SNAP               (* (reg8 *) Sortie_10__SNAP)
    
	#define Sortie_10_0_INTTYPE_REG 		(* (reg8 *) Sortie_10__0__INTTYPE)
#endif /* (Sortie_10__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Sortie_10_H */


/* [] END OF FILE */
