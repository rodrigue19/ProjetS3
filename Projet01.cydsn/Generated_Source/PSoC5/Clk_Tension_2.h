/*******************************************************************************
* File Name: Clk_Tension_2.h
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

#if !defined(CY_CLOCK_Clk_Tension_2_H)
#define CY_CLOCK_Clk_Tension_2_H

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

void Clk_Tension_2_Start(void) ;
void Clk_Tension_2_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Clk_Tension_2_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Clk_Tension_2_StandbyPower(uint8 state) ;
void Clk_Tension_2_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Clk_Tension_2_GetDividerRegister(void) ;
void Clk_Tension_2_SetModeRegister(uint8 modeBitMask) ;
void Clk_Tension_2_ClearModeRegister(uint8 modeBitMask) ;
uint8 Clk_Tension_2_GetModeRegister(void) ;
void Clk_Tension_2_SetSourceRegister(uint8 clkSource) ;
uint8 Clk_Tension_2_GetSourceRegister(void) ;
#if defined(Clk_Tension_2__CFG3)
void Clk_Tension_2_SetPhaseRegister(uint8 clkPhase) ;
uint8 Clk_Tension_2_GetPhaseRegister(void) ;
#endif /* defined(Clk_Tension_2__CFG3) */

#define Clk_Tension_2_Enable()                       Clk_Tension_2_Start()
#define Clk_Tension_2_Disable()                      Clk_Tension_2_Stop()
#define Clk_Tension_2_SetDivider(clkDivider)         Clk_Tension_2_SetDividerRegister(clkDivider, 1u)
#define Clk_Tension_2_SetDividerValue(clkDivider)    Clk_Tension_2_SetDividerRegister((clkDivider) - 1u, 1u)
#define Clk_Tension_2_SetMode(clkMode)               Clk_Tension_2_SetModeRegister(clkMode)
#define Clk_Tension_2_SetSource(clkSource)           Clk_Tension_2_SetSourceRegister(clkSource)
#if defined(Clk_Tension_2__CFG3)
#define Clk_Tension_2_SetPhase(clkPhase)             Clk_Tension_2_SetPhaseRegister(clkPhase)
#define Clk_Tension_2_SetPhaseValue(clkPhase)        Clk_Tension_2_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Clk_Tension_2__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Clk_Tension_2_CLKEN              (* (reg8 *) Clk_Tension_2__PM_ACT_CFG)
#define Clk_Tension_2_CLKEN_PTR          ((reg8 *) Clk_Tension_2__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Clk_Tension_2_CLKSTBY            (* (reg8 *) Clk_Tension_2__PM_STBY_CFG)
#define Clk_Tension_2_CLKSTBY_PTR        ((reg8 *) Clk_Tension_2__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Clk_Tension_2_DIV_LSB            (* (reg8 *) Clk_Tension_2__CFG0)
#define Clk_Tension_2_DIV_LSB_PTR        ((reg8 *) Clk_Tension_2__CFG0)
#define Clk_Tension_2_DIV_PTR            ((reg16 *) Clk_Tension_2__CFG0)

/* Clock MSB divider configuration register. */
#define Clk_Tension_2_DIV_MSB            (* (reg8 *) Clk_Tension_2__CFG1)
#define Clk_Tension_2_DIV_MSB_PTR        ((reg8 *) Clk_Tension_2__CFG1)

/* Mode and source configuration register */
#define Clk_Tension_2_MOD_SRC            (* (reg8 *) Clk_Tension_2__CFG2)
#define Clk_Tension_2_MOD_SRC_PTR        ((reg8 *) Clk_Tension_2__CFG2)

#if defined(Clk_Tension_2__CFG3)
/* Analog clock phase configuration register */
#define Clk_Tension_2_PHASE              (* (reg8 *) Clk_Tension_2__CFG3)
#define Clk_Tension_2_PHASE_PTR          ((reg8 *) Clk_Tension_2__CFG3)
#endif /* defined(Clk_Tension_2__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Clk_Tension_2_CLKEN_MASK         Clk_Tension_2__PM_ACT_MSK
#define Clk_Tension_2_CLKSTBY_MASK       Clk_Tension_2__PM_STBY_MSK

/* CFG2 field masks */
#define Clk_Tension_2_SRC_SEL_MSK        Clk_Tension_2__CFG2_SRC_SEL_MASK
#define Clk_Tension_2_MODE_MASK          (~(Clk_Tension_2_SRC_SEL_MSK))

#if defined(Clk_Tension_2__CFG3)
/* CFG3 phase mask */
#define Clk_Tension_2_PHASE_MASK         Clk_Tension_2__CFG3_PHASE_DLY_MASK
#endif /* defined(Clk_Tension_2__CFG3) */

#endif /* CY_CLOCK_Clk_Tension_2_H */


/* [] END OF FILE */
