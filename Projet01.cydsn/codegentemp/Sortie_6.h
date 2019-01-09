/*******************************************************************************
* File Name: Sortie_6.h  
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

#if !defined(CY_PINS_Sortie_6_H) /* Pins Sortie_6_H */
#define CY_PINS_Sortie_6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Sortie_6_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Sortie_6__PORT == 15 && ((Sortie_6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Sortie_6_Write(uint8 value);
void    Sortie_6_SetDriveMode(uint8 mode);
uint8   Sortie_6_ReadDataReg(void);
uint8   Sortie_6_Read(void);
void    Sortie_6_SetInterruptMode(uint16 position, uint16 mode);
uint8   Sortie_6_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Sortie_6_SetDriveMode() function.
     *  @{
     */
        #define Sortie_6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Sortie_6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Sortie_6_DM_RES_UP          PIN_DM_RES_UP
        #define Sortie_6_DM_RES_DWN         PIN_DM_RES_DWN
        #define Sortie_6_DM_OD_LO           PIN_DM_OD_LO
        #define Sortie_6_DM_OD_HI           PIN_DM_OD_HI
        #define Sortie_6_DM_STRONG          PIN_DM_STRONG
        #define Sortie_6_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Sortie_6_MASK               Sortie_6__MASK
#define Sortie_6_SHIFT              Sortie_6__SHIFT
#define Sortie_6_WIDTH              1u

/* Interrupt constants */
#if defined(Sortie_6__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Sortie_6_SetInterruptMode() function.
     *  @{
     */
        #define Sortie_6_INTR_NONE      (uint16)(0x0000u)
        #define Sortie_6_INTR_RISING    (uint16)(0x0001u)
        #define Sortie_6_INTR_FALLING   (uint16)(0x0002u)
        #define Sortie_6_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Sortie_6_INTR_MASK      (0x01u) 
#endif /* (Sortie_6__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Sortie_6_PS                     (* (reg8 *) Sortie_6__PS)
/* Data Register */
#define Sortie_6_DR                     (* (reg8 *) Sortie_6__DR)
/* Port Number */
#define Sortie_6_PRT_NUM                (* (reg8 *) Sortie_6__PRT) 
/* Connect to Analog Globals */                                                  
#define Sortie_6_AG                     (* (reg8 *) Sortie_6__AG)                       
/* Analog MUX bux enable */
#define Sortie_6_AMUX                   (* (reg8 *) Sortie_6__AMUX) 
/* Bidirectional Enable */                                                        
#define Sortie_6_BIE                    (* (reg8 *) Sortie_6__BIE)
/* Bit-mask for Aliased Register Access */
#define Sortie_6_BIT_MASK               (* (reg8 *) Sortie_6__BIT_MASK)
/* Bypass Enable */
#define Sortie_6_BYP                    (* (reg8 *) Sortie_6__BYP)
/* Port wide control signals */                                                   
#define Sortie_6_CTL                    (* (reg8 *) Sortie_6__CTL)
/* Drive Modes */
#define Sortie_6_DM0                    (* (reg8 *) Sortie_6__DM0) 
#define Sortie_6_DM1                    (* (reg8 *) Sortie_6__DM1)
#define Sortie_6_DM2                    (* (reg8 *) Sortie_6__DM2) 
/* Input Buffer Disable Override */
#define Sortie_6_INP_DIS                (* (reg8 *) Sortie_6__INP_DIS)
/* LCD Common or Segment Drive */
#define Sortie_6_LCD_COM_SEG            (* (reg8 *) Sortie_6__LCD_COM_SEG)
/* Enable Segment LCD */
#define Sortie_6_LCD_EN                 (* (reg8 *) Sortie_6__LCD_EN)
/* Slew Rate Control */
#define Sortie_6_SLW                    (* (reg8 *) Sortie_6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Sortie_6_PRTDSI__CAPS_SEL       (* (reg8 *) Sortie_6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Sortie_6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Sortie_6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Sortie_6_PRTDSI__OE_SEL0        (* (reg8 *) Sortie_6__PRTDSI__OE_SEL0) 
#define Sortie_6_PRTDSI__OE_SEL1        (* (reg8 *) Sortie_6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Sortie_6_PRTDSI__OUT_SEL0       (* (reg8 *) Sortie_6__PRTDSI__OUT_SEL0) 
#define Sortie_6_PRTDSI__OUT_SEL1       (* (reg8 *) Sortie_6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Sortie_6_PRTDSI__SYNC_OUT       (* (reg8 *) Sortie_6__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Sortie_6__SIO_CFG)
    #define Sortie_6_SIO_HYST_EN        (* (reg8 *) Sortie_6__SIO_HYST_EN)
    #define Sortie_6_SIO_REG_HIFREQ     (* (reg8 *) Sortie_6__SIO_REG_HIFREQ)
    #define Sortie_6_SIO_CFG            (* (reg8 *) Sortie_6__SIO_CFG)
    #define Sortie_6_SIO_DIFF           (* (reg8 *) Sortie_6__SIO_DIFF)
#endif /* (Sortie_6__SIO_CFG) */

/* Interrupt Registers */
#if defined(Sortie_6__INTSTAT)
    #define Sortie_6_INTSTAT            (* (reg8 *) Sortie_6__INTSTAT)
    #define Sortie_6_SNAP               (* (reg8 *) Sortie_6__SNAP)
    
	#define Sortie_6_0_INTTYPE_REG 		(* (reg8 *) Sortie_6__0__INTTYPE)
#endif /* (Sortie_6__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Sortie_6_H */


/* [] END OF FILE */
