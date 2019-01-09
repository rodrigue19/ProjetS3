/*******************************************************************************
* File Name: PWM_LCD_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_LCD.h"

static PWM_LCD_backupStruct PWM_LCD_backup;


/*******************************************************************************
* Function Name: PWM_LCD_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_LCD_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_LCD_SaveConfig(void) 
{

    #if(!PWM_LCD_UsingFixedFunction)
        #if(!PWM_LCD_PWMModeIsCenterAligned)
            PWM_LCD_backup.PWMPeriod = PWM_LCD_ReadPeriod();
        #endif /* (!PWM_LCD_PWMModeIsCenterAligned) */
        PWM_LCD_backup.PWMUdb = PWM_LCD_ReadCounter();
        #if (PWM_LCD_UseStatus)
            PWM_LCD_backup.InterruptMaskValue = PWM_LCD_STATUS_MASK;
        #endif /* (PWM_LCD_UseStatus) */

        #if(PWM_LCD_DeadBandMode == PWM_LCD__B_PWM__DBM_256_CLOCKS || \
            PWM_LCD_DeadBandMode == PWM_LCD__B_PWM__DBM_2_4_CLOCKS)
            PWM_LCD_backup.PWMdeadBandValue = PWM_LCD_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_LCD_KillModeMinTime)
             PWM_LCD_backup.PWMKillCounterPeriod = PWM_LCD_ReadKillTime();
        #endif /* (PWM_LCD_KillModeMinTime) */

        #if(PWM_LCD_UseControl)
            PWM_LCD_backup.PWMControlRegister = PWM_LCD_ReadControlRegister();
        #endif /* (PWM_LCD_UseControl) */
    #endif  /* (!PWM_LCD_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_LCD_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_LCD_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_LCD_RestoreConfig(void) 
{
        #if(!PWM_LCD_UsingFixedFunction)
            #if(!PWM_LCD_PWMModeIsCenterAligned)
                PWM_LCD_WritePeriod(PWM_LCD_backup.PWMPeriod);
            #endif /* (!PWM_LCD_PWMModeIsCenterAligned) */

            PWM_LCD_WriteCounter(PWM_LCD_backup.PWMUdb);

            #if (PWM_LCD_UseStatus)
                PWM_LCD_STATUS_MASK = PWM_LCD_backup.InterruptMaskValue;
            #endif /* (PWM_LCD_UseStatus) */

            #if(PWM_LCD_DeadBandMode == PWM_LCD__B_PWM__DBM_256_CLOCKS || \
                PWM_LCD_DeadBandMode == PWM_LCD__B_PWM__DBM_2_4_CLOCKS)
                PWM_LCD_WriteDeadTime(PWM_LCD_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_LCD_KillModeMinTime)
                PWM_LCD_WriteKillTime(PWM_LCD_backup.PWMKillCounterPeriod);
            #endif /* (PWM_LCD_KillModeMinTime) */

            #if(PWM_LCD_UseControl)
                PWM_LCD_WriteControlRegister(PWM_LCD_backup.PWMControlRegister);
            #endif /* (PWM_LCD_UseControl) */
        #endif  /* (!PWM_LCD_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_LCD_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_LCD_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_LCD_Sleep(void) 
{
    #if(PWM_LCD_UseControl)
        if(PWM_LCD_CTRL_ENABLE == (PWM_LCD_CONTROL & PWM_LCD_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_LCD_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_LCD_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_LCD_UseControl) */

    /* Stop component */
    PWM_LCD_Stop();

    /* Save registers configuration */
    PWM_LCD_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_LCD_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_LCD_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_LCD_Wakeup(void) 
{
     /* Restore registers values */
    PWM_LCD_RestoreConfig();

    if(PWM_LCD_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_LCD_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
