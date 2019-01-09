/*******************************************************************************
* File Name: LCD_RW.h  
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

#if !defined(CY_PINS_LCD_RW_H) /* Pins LCD_RW_H */
#define CY_PINS_LCD_RW_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LCD_RW_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LCD_RW__PORT == 15 && ((LCD_RW__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LCD_RW_Write(uint8 value);
void    LCD_RW_SetDriveMode(uint8 mode);
uint8   LCD_RW_ReadDataReg(void);
uint8   LCD_RW_Read(void);
void    LCD_RW_SetInterruptMode(uint16 position, uint16 mode);
uint8   LCD_RW_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LCD_RW_SetDriveMode() function.
     *  @{
     */
        #define LCD_RW_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LCD_RW_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LCD_RW_DM_RES_UP          PIN_DM_RES_UP
        #define LCD_RW_DM_RES_DWN         PIN_DM_RES_DWN
        #define LCD_RW_DM_OD_LO           PIN_DM_OD_LO
        #define LCD_RW_DM_OD_HI           PIN_DM_OD_HI
        #define LCD_RW_DM_STRONG          PIN_DM_STRONG
        #define LCD_RW_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LCD_RW_MASK               LCD_RW__MASK
#define LCD_RW_SHIFT              LCD_RW__SHIFT
#define LCD_RW_WIDTH              1u

/* Interrupt constants */
#if defined(LCD_RW__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LCD_RW_SetInterruptMode() function.
     *  @{
     */
        #define LCD_RW_INTR_NONE      (uint16)(0x0000u)
        #define LCD_RW_INTR_RISING    (uint16)(0x0001u)
        #define LCD_RW_INTR_FALLING   (uint16)(0x0002u)
        #define LCD_RW_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LCD_RW_INTR_MASK      (0x01u) 
#endif /* (LCD_RW__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LCD_RW_PS                     (* (reg8 *) LCD_RW__PS)
/* Data Register */
#define LCD_RW_DR                     (* (reg8 *) LCD_RW__DR)
/* Port Number */
#define LCD_RW_PRT_NUM                (* (reg8 *) LCD_RW__PRT) 
/* Connect to Analog Globals */                                                  
#define LCD_RW_AG                     (* (reg8 *) LCD_RW__AG)                       
/* Analog MUX bux enable */
#define LCD_RW_AMUX                   (* (reg8 *) LCD_RW__AMUX) 
/* Bidirectional Enable */                                                        
#define LCD_RW_BIE                    (* (reg8 *) LCD_RW__BIE)
/* Bit-mask for Aliased Register Access */
#define LCD_RW_BIT_MASK               (* (reg8 *) LCD_RW__BIT_MASK)
/* Bypass Enable */
#define LCD_RW_BYP                    (* (reg8 *) LCD_RW__BYP)
/* Port wide control signals */                                                   
#define LCD_RW_CTL                    (* (reg8 *) LCD_RW__CTL)
/* Drive Modes */
#define LCD_RW_DM0                    (* (reg8 *) LCD_RW__DM0) 
#define LCD_RW_DM1                    (* (reg8 *) LCD_RW__DM1)
#define LCD_RW_DM2                    (* (reg8 *) LCD_RW__DM2) 
/* Input Buffer Disable Override */
#define LCD_RW_INP_DIS                (* (reg8 *) LCD_RW__INP_DIS)
/* LCD Common or Segment Drive */
#define LCD_RW_LCD_COM_SEG            (* (reg8 *) LCD_RW__LCD_COM_SEG)
/* Enable Segment LCD */
#define LCD_RW_LCD_EN                 (* (reg8 *) LCD_RW__LCD_EN)
/* Slew Rate Control */
#define LCD_RW_SLW                    (* (reg8 *) LCD_RW__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LCD_RW_PRTDSI__CAPS_SEL       (* (reg8 *) LCD_RW__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LCD_RW_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LCD_RW__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LCD_RW_PRTDSI__OE_SEL0        (* (reg8 *) LCD_RW__PRTDSI__OE_SEL0) 
#define LCD_RW_PRTDSI__OE_SEL1        (* (reg8 *) LCD_RW__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LCD_RW_PRTDSI__OUT_SEL0       (* (reg8 *) LCD_RW__PRTDSI__OUT_SEL0) 
#define LCD_RW_PRTDSI__OUT_SEL1       (* (reg8 *) LCD_RW__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LCD_RW_PRTDSI__SYNC_OUT       (* (reg8 *) LCD_RW__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LCD_RW__SIO_CFG)
    #define LCD_RW_SIO_HYST_EN        (* (reg8 *) LCD_RW__SIO_HYST_EN)
    #define LCD_RW_SIO_REG_HIFREQ     (* (reg8 *) LCD_RW__SIO_REG_HIFREQ)
    #define LCD_RW_SIO_CFG            (* (reg8 *) LCD_RW__SIO_CFG)
    #define LCD_RW_SIO_DIFF           (* (reg8 *) LCD_RW__SIO_DIFF)
#endif /* (LCD_RW__SIO_CFG) */

/* Interrupt Registers */
#if defined(LCD_RW__INTSTAT)
    #define LCD_RW_INTSTAT            (* (reg8 *) LCD_RW__INTSTAT)
    #define LCD_RW_SNAP               (* (reg8 *) LCD_RW__SNAP)
    
	#define LCD_RW_0_INTTYPE_REG 		(* (reg8 *) LCD_RW__0__INTTYPE)
#endif /* (LCD_RW__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LCD_RW_H */


/* [] END OF FILE */
