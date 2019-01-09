/*******************************************************************************
* File Name: LCD_RS.h  
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

#if !defined(CY_PINS_LCD_RS_H) /* Pins LCD_RS_H */
#define CY_PINS_LCD_RS_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LCD_RS_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LCD_RS__PORT == 15 && ((LCD_RS__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LCD_RS_Write(uint8 value);
void    LCD_RS_SetDriveMode(uint8 mode);
uint8   LCD_RS_ReadDataReg(void);
uint8   LCD_RS_Read(void);
void    LCD_RS_SetInterruptMode(uint16 position, uint16 mode);
uint8   LCD_RS_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LCD_RS_SetDriveMode() function.
     *  @{
     */
        #define LCD_RS_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LCD_RS_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LCD_RS_DM_RES_UP          PIN_DM_RES_UP
        #define LCD_RS_DM_RES_DWN         PIN_DM_RES_DWN
        #define LCD_RS_DM_OD_LO           PIN_DM_OD_LO
        #define LCD_RS_DM_OD_HI           PIN_DM_OD_HI
        #define LCD_RS_DM_STRONG          PIN_DM_STRONG
        #define LCD_RS_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LCD_RS_MASK               LCD_RS__MASK
#define LCD_RS_SHIFT              LCD_RS__SHIFT
#define LCD_RS_WIDTH              1u

/* Interrupt constants */
#if defined(LCD_RS__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LCD_RS_SetInterruptMode() function.
     *  @{
     */
        #define LCD_RS_INTR_NONE      (uint16)(0x0000u)
        #define LCD_RS_INTR_RISING    (uint16)(0x0001u)
        #define LCD_RS_INTR_FALLING   (uint16)(0x0002u)
        #define LCD_RS_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LCD_RS_INTR_MASK      (0x01u) 
#endif /* (LCD_RS__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LCD_RS_PS                     (* (reg8 *) LCD_RS__PS)
/* Data Register */
#define LCD_RS_DR                     (* (reg8 *) LCD_RS__DR)
/* Port Number */
#define LCD_RS_PRT_NUM                (* (reg8 *) LCD_RS__PRT) 
/* Connect to Analog Globals */                                                  
#define LCD_RS_AG                     (* (reg8 *) LCD_RS__AG)                       
/* Analog MUX bux enable */
#define LCD_RS_AMUX                   (* (reg8 *) LCD_RS__AMUX) 
/* Bidirectional Enable */                                                        
#define LCD_RS_BIE                    (* (reg8 *) LCD_RS__BIE)
/* Bit-mask for Aliased Register Access */
#define LCD_RS_BIT_MASK               (* (reg8 *) LCD_RS__BIT_MASK)
/* Bypass Enable */
#define LCD_RS_BYP                    (* (reg8 *) LCD_RS__BYP)
/* Port wide control signals */                                                   
#define LCD_RS_CTL                    (* (reg8 *) LCD_RS__CTL)
/* Drive Modes */
#define LCD_RS_DM0                    (* (reg8 *) LCD_RS__DM0) 
#define LCD_RS_DM1                    (* (reg8 *) LCD_RS__DM1)
#define LCD_RS_DM2                    (* (reg8 *) LCD_RS__DM2) 
/* Input Buffer Disable Override */
#define LCD_RS_INP_DIS                (* (reg8 *) LCD_RS__INP_DIS)
/* LCD Common or Segment Drive */
#define LCD_RS_LCD_COM_SEG            (* (reg8 *) LCD_RS__LCD_COM_SEG)
/* Enable Segment LCD */
#define LCD_RS_LCD_EN                 (* (reg8 *) LCD_RS__LCD_EN)
/* Slew Rate Control */
#define LCD_RS_SLW                    (* (reg8 *) LCD_RS__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LCD_RS_PRTDSI__CAPS_SEL       (* (reg8 *) LCD_RS__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LCD_RS_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LCD_RS__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LCD_RS_PRTDSI__OE_SEL0        (* (reg8 *) LCD_RS__PRTDSI__OE_SEL0) 
#define LCD_RS_PRTDSI__OE_SEL1        (* (reg8 *) LCD_RS__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LCD_RS_PRTDSI__OUT_SEL0       (* (reg8 *) LCD_RS__PRTDSI__OUT_SEL0) 
#define LCD_RS_PRTDSI__OUT_SEL1       (* (reg8 *) LCD_RS__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LCD_RS_PRTDSI__SYNC_OUT       (* (reg8 *) LCD_RS__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LCD_RS__SIO_CFG)
    #define LCD_RS_SIO_HYST_EN        (* (reg8 *) LCD_RS__SIO_HYST_EN)
    #define LCD_RS_SIO_REG_HIFREQ     (* (reg8 *) LCD_RS__SIO_REG_HIFREQ)
    #define LCD_RS_SIO_CFG            (* (reg8 *) LCD_RS__SIO_CFG)
    #define LCD_RS_SIO_DIFF           (* (reg8 *) LCD_RS__SIO_DIFF)
#endif /* (LCD_RS__SIO_CFG) */

/* Interrupt Registers */
#if defined(LCD_RS__INTSTAT)
    #define LCD_RS_INTSTAT            (* (reg8 *) LCD_RS__INTSTAT)
    #define LCD_RS_SNAP               (* (reg8 *) LCD_RS__SNAP)
    
	#define LCD_RS_0_INTTYPE_REG 		(* (reg8 *) LCD_RS__0__INTTYPE)
#endif /* (LCD_RS__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LCD_RS_H */


/* [] END OF FILE */
