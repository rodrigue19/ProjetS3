/*******************************************************************************
* File Name: Clk_lcd.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_Clk_lcd_H)
#define CY_CLOCK_Clk_lcd_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void Clk_lcd_Start(void) ;
void Clk_lcd_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Clk_lcd_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Clk_lcd_StandbyPower(uint8 state) ;
void Clk_lcd_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Clk_lcd_GetDividerRegister(void) ;
void Clk_lcd_SetModeRegister(uint8 modeBitMask) ;
void Clk_lcd_ClearModeRegister(uint8 modeBitMask) ;
uint8 Clk_lcd_GetModeRegister(void) ;
void Clk_lcd_SetSourceRegister(uint8 clkSource) ;
uint8 Clk_lcd_GetSourceRegister(void) ;
#if defined(Clk_lcd__CFG3)
void Clk_lcd_SetPhaseRegister(uint8 clkPhase) ;
uint8 Clk_lcd_GetPhaseRegister(void) ;
#endif /* defined(Clk_lcd__CFG3) */

#define Clk_lcd_Enable()                       Clk_lcd_Start()
#define Clk_lcd_Disable()                      Clk_lcd_Stop()
#define Clk_lcd_SetDivider(clkDivider)         Clk_lcd_SetDividerRegister(clkDivider, 1u)
#define Clk_lcd_SetDividerValue(clkDivider)    Clk_lcd_SetDividerRegister((clkDivider) - 1u, 1u)
#define Clk_lcd_SetMode(clkMode)               Clk_lcd_SetModeRegister(clkMode)
#define Clk_lcd_SetSource(clkSource)           Clk_lcd_SetSourceRegister(clkSource)
#if defined(Clk_lcd__CFG3)
#define Clk_lcd_SetPhase(clkPhase)             Clk_lcd_SetPhaseRegister(clkPhase)
#define Clk_lcd_SetPhaseValue(clkPhase)        Clk_lcd_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Clk_lcd__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Clk_lcd_CLKEN              (* (reg8 *) Clk_lcd__PM_ACT_CFG)
#define Clk_lcd_CLKEN_PTR          ((reg8 *) Clk_lcd__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Clk_lcd_CLKSTBY            (* (reg8 *) Clk_lcd__PM_STBY_CFG)
#define Clk_lcd_CLKSTBY_PTR        ((reg8 *) Clk_lcd__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Clk_lcd_DIV_LSB            (* (reg8 *) Clk_lcd__CFG0)
#define Clk_lcd_DIV_LSB_PTR        ((reg8 *) Clk_lcd__CFG0)
#define Clk_lcd_DIV_PTR            ((reg16 *) Clk_lcd__CFG0)

/* Clock MSB divider configuration register. */
#define Clk_lcd_DIV_MSB            (* (reg8 *) Clk_lcd__CFG1)
#define Clk_lcd_DIV_MSB_PTR        ((reg8 *) Clk_lcd__CFG1)

/* Mode and source configuration register */
#define Clk_lcd_MOD_SRC            (* (reg8 *) Clk_lcd__CFG2)
#define Clk_lcd_MOD_SRC_PTR        ((reg8 *) Clk_lcd__CFG2)

#if defined(Clk_lcd__CFG3)
/* Analog clock phase configuration register */
#define Clk_lcd_PHASE              (* (reg8 *) Clk_lcd__CFG3)
#define Clk_lcd_PHASE_PTR          ((reg8 *) Clk_lcd__CFG3)
#endif /* defined(Clk_lcd__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Clk_lcd_CLKEN_MASK         Clk_lcd__PM_ACT_MSK
#define Clk_lcd_CLKSTBY_MASK       Clk_lcd__PM_STBY_MSK

/* CFG2 field masks */
#define Clk_lcd_SRC_SEL_MSK        Clk_lcd__CFG2_SRC_SEL_MASK
#define Clk_lcd_MODE_MASK          (~(Clk_lcd_SRC_SEL_MSK))

#if defined(Clk_lcd__CFG3)
/* CFG3 phase mask */
#define Clk_lcd_PHASE_MASK         Clk_lcd__CFG3_PHASE_DLY_MASK
#endif /* defined(Clk_lcd__CFG3) */

#endif /* CY_CLOCK_Clk_lcd_H */


/* [] END OF FILE */
