/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F18857
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_ANA0 aliases
#define channel_ANA0_TRIS                 TRISAbits.TRISA0
#define channel_ANA0_LAT                  LATAbits.LATA0
#define channel_ANA0_PORT                 PORTAbits.RA0
#define channel_ANA0_WPU                  WPUAbits.WPUA0
#define channel_ANA0_OD                   ODCONAbits.ODCA0
#define channel_ANA0_ANS                  ANSELAbits.ANSA0
#define channel_ANA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_ANA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_ANA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_ANA0_GetValue()           PORTAbits.RA0
#define channel_ANA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_ANA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_ANA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define channel_ANA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define channel_ANA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define channel_ANA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define channel_ANA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define channel_ANA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set channel_ANA1 aliases
#define channel_ANA1_TRIS                 TRISAbits.TRISA1
#define channel_ANA1_LAT                  LATAbits.LATA1
#define channel_ANA1_PORT                 PORTAbits.RA1
#define channel_ANA1_WPU                  WPUAbits.WPUA1
#define channel_ANA1_OD                   ODCONAbits.ODCA1
#define channel_ANA1_ANS                  ANSELAbits.ANSA1
#define channel_ANA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define channel_ANA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define channel_ANA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define channel_ANA1_GetValue()           PORTAbits.RA1
#define channel_ANA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define channel_ANA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define channel_ANA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define channel_ANA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define channel_ANA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define channel_ANA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define channel_ANA1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define channel_ANA1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set channel_ANA2 aliases
#define channel_ANA2_TRIS                 TRISAbits.TRISA2
#define channel_ANA2_LAT                  LATAbits.LATA2
#define channel_ANA2_PORT                 PORTAbits.RA2
#define channel_ANA2_WPU                  WPUAbits.WPUA2
#define channel_ANA2_OD                   ODCONAbits.ODCA2
#define channel_ANA2_ANS                  ANSELAbits.ANSA2
#define channel_ANA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define channel_ANA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define channel_ANA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define channel_ANA2_GetValue()           PORTAbits.RA2
#define channel_ANA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define channel_ANA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define channel_ANA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define channel_ANA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define channel_ANA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define channel_ANA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define channel_ANA2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define channel_ANA2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set channel_ANA3 aliases
#define channel_ANA3_TRIS                 TRISAbits.TRISA3
#define channel_ANA3_LAT                  LATAbits.LATA3
#define channel_ANA3_PORT                 PORTAbits.RA3
#define channel_ANA3_WPU                  WPUAbits.WPUA3
#define channel_ANA3_OD                   ODCONAbits.ODCA3
#define channel_ANA3_ANS                  ANSELAbits.ANSA3
#define channel_ANA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define channel_ANA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define channel_ANA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define channel_ANA3_GetValue()           PORTAbits.RA3
#define channel_ANA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define channel_ANA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define channel_ANA3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define channel_ANA3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define channel_ANA3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define channel_ANA3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define channel_ANA3_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define channel_ANA3_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set UP_BTN aliases
#define UP_BTN_TRIS                 TRISAbits.TRISA6
#define UP_BTN_LAT                  LATAbits.LATA6
#define UP_BTN_PORT                 PORTAbits.RA6
#define UP_BTN_WPU                  WPUAbits.WPUA6
#define UP_BTN_OD                   ODCONAbits.ODCA6
#define UP_BTN_ANS                  ANSELAbits.ANSA6
#define UP_BTN_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define UP_BTN_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define UP_BTN_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define UP_BTN_GetValue()           PORTAbits.RA6
#define UP_BTN_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define UP_BTN_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define UP_BTN_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define UP_BTN_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define UP_BTN_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define UP_BTN_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define UP_BTN_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define UP_BTN_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set EN_5V aliases
#define EN_5V_TRIS                 TRISBbits.TRISB2
#define EN_5V_LAT                  LATBbits.LATB2
#define EN_5V_PORT                 PORTBbits.RB2
#define EN_5V_WPU                  WPUBbits.WPUB2
#define EN_5V_OD                   ODCONBbits.ODCB2
#define EN_5V_ANS                  ANSELBbits.ANSB2
#define EN_5V_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define EN_5V_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define EN_5V_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define EN_5V_GetValue()           PORTBbits.RB2
#define EN_5V_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define EN_5V_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define EN_5V_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define EN_5V_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define EN_5V_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define EN_5V_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define EN_5V_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define EN_5V_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set EN_14V aliases
#define EN_14V_TRIS                 TRISBbits.TRISB3
#define EN_14V_LAT                  LATBbits.LATB3
#define EN_14V_PORT                 PORTBbits.RB3
#define EN_14V_WPU                  WPUBbits.WPUB3
#define EN_14V_OD                   ODCONBbits.ODCB3
#define EN_14V_ANS                  ANSELBbits.ANSB3
#define EN_14V_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define EN_14V_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define EN_14V_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define EN_14V_GetValue()           PORTBbits.RB3
#define EN_14V_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define EN_14V_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define EN_14V_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define EN_14V_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define EN_14V_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define EN_14V_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define EN_14V_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define EN_14V_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set BKLGHT aliases
#define BKLGHT_TRIS                 TRISCbits.TRISC0
#define BKLGHT_LAT                  LATCbits.LATC0
#define BKLGHT_PORT                 PORTCbits.RC0
#define BKLGHT_WPU                  WPUCbits.WPUC0
#define BKLGHT_OD                   ODCONCbits.ODCC0
#define BKLGHT_ANS                  ANSELCbits.ANSC0
#define BKLGHT_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define BKLGHT_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define BKLGHT_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define BKLGHT_GetValue()           PORTCbits.RC0
#define BKLGHT_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define BKLGHT_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define BKLGHT_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define BKLGHT_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define BKLGHT_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define BKLGHT_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define BKLGHT_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define BKLGHT_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SELECT_BTN aliases
#define SELECT_BTN_TRIS                 TRISCbits.TRISC1
#define SELECT_BTN_LAT                  LATCbits.LATC1
#define SELECT_BTN_PORT                 PORTCbits.RC1
#define SELECT_BTN_WPU                  WPUCbits.WPUC1
#define SELECT_BTN_OD                   ODCONCbits.ODCC1
#define SELECT_BTN_ANS                  ANSELCbits.ANSC1
#define SELECT_BTN_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SELECT_BTN_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SELECT_BTN_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SELECT_BTN_GetValue()           PORTCbits.RC1
#define SELECT_BTN_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SELECT_BTN_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SELECT_BTN_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SELECT_BTN_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SELECT_BTN_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SELECT_BTN_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SELECT_BTN_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SELECT_BTN_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set DW_BTN aliases
#define DW_BTN_TRIS                 TRISCbits.TRISC2
#define DW_BTN_LAT                  LATCbits.LATC2
#define DW_BTN_PORT                 PORTCbits.RC2
#define DW_BTN_WPU                  WPUCbits.WPUC2
#define DW_BTN_OD                   ODCONCbits.ODCC2
#define DW_BTN_ANS                  ANSELCbits.ANSC2
#define DW_BTN_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define DW_BTN_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define DW_BTN_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define DW_BTN_GetValue()           PORTCbits.RC2
#define DW_BTN_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define DW_BTN_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define DW_BTN_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define DW_BTN_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define DW_BTN_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define DW_BTN_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define DW_BTN_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define DW_BTN_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISCbits.TRISC3
#define SCL1_LAT                  LATCbits.LATC3
#define SCL1_PORT                 PORTCbits.RC3
#define SCL1_WPU                  WPUCbits.WPUC3
#define SCL1_OD                   ODCONCbits.ODCC3
#define SCL1_ANS                  ANSELCbits.ANSC3
#define SCL1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCL1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCL1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCL1_GetValue()           PORTCbits.RC3
#define SCL1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCL1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCL1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCL1_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SCL1_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISCbits.TRISC4
#define SDA1_LAT                  LATCbits.LATC4
#define SDA1_PORT                 PORTCbits.RC4
#define SDA1_WPU                  WPUCbits.WPUC4
#define SDA1_OD                   ODCONCbits.ODCC4
#define SDA1_ANS                  ANSELCbits.ANSC4
#define SDA1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDA1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDA1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDA1_GetValue()           PORTCbits.RC4
#define SDA1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDA1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SDA1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SDA1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SDA1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/