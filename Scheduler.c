#include "Scheduler.h"

static uint16_t counter;
static int8_t cursor;
static uint8_t dw_btn = HIGH;
static uint8_t dw_btn_old = HIGH;
static uint8_t up_btn = HIGH;
static uint8_t up_btn_old = HIGH;
static uint8_t ok_btn = HIGH;
static uint8_t ok_btn_old = HIGH;
static uint8_t bklght_btn = HIGH;
static uint8_t bklght_btn_old = HIGH;
static uint8_t measurement_flag_MQ7 = 0;

static uint16_t events[5][2] = {0};

void startMeasEvent(uint16_t eventID)
{
    events[eventID][0] = counter;
}

void stopMeasEvent(uint16_t eventID)
{
    events[eventID][1] = counter;
}

uint16_t getEventTime(uint16_t eventID)
{
    return (events[eventID][0] > events[eventID][1])?((events[eventID][1] + 32768) - events[eventID][0]):(events[eventID][1] - events[eventID][0]);
}

uint8_t getMeasurementStartFlag(void)
{
    return measurement_flag_MQ7;
}

static inline void Button_MainFunction(void)
{
    IO_RB5_Toggle();
    dw_btn = DW_BTN_GetValue();
    up_btn = UP_BTN_GetValue();
    if((LOW == dw_btn) && (dw_btn_old == HIGH))
    {
        dw_btn_old = dw_btn;
    }
    else if((HIGH == dw_btn) && (dw_btn_old == LOW))
    {
        cursor++;
        if(cursor >= getMenuDimension())
            cursor = 0;
        setCursorPosn(cursor);
        dw_btn_old = dw_btn;
    }
    else if((LOW == up_btn) && (up_btn_old == HIGH))
    {
        up_btn_old = up_btn;
    }
    else if((HIGH == up_btn) && (up_btn_old == LOW))
    {
        cursor--;
        if(cursor < 0)
            cursor = getMenuDimension() - 1;
        setCursorPosn(cursor);
        up_btn_old = up_btn;
    }
    else
    {

    }
    
    ok_btn = SELECT_BTN_GetValue();
    if((LOW == ok_btn) && (ok_btn_old == HIGH))
    {
        ok_btn_old = ok_btn;
    }
    else if((HIGH == ok_btn) && (ok_btn_old == LOW))
    {
        requestRun(cursor);
        ok_btn_old = ok_btn;
    }
    else
    {
        
    }
    
    bklght_btn = BKLGHT_GetValue();
    if((LOW == bklght_btn) && (bklght_btn_old == HIGH))
    {
        bklght_btn_old = bklght_btn;
    }
    else if((HIGH == bklght_btn) && (bklght_btn_old == LOW))
    {
        if(LCD_BACKLIGHT == getBacklight())
        {
            noBacklight();
        }
        else
        {
            Backlight();
        }
        bklght_btn_old = bklght_btn;
    }
    else
    {
        
    }
}

void tenMsTask(void)
{
    counter++;
}

/* Get commands */
void TASK100ms(void)
{    
    static uint16_t counter100ms;
    Button_MainFunction();
    measurement_flag_MQ7 = 0;
    
    /* Power Cycles for MQ7 */
    if(counter100ms<900) /* HEATING PHASE */
    {
        EN_14V_SetLow();
        EN_5V_SetHigh();
    }
    else if((counter100ms>=900)&&(counter100ms<1500)) /* MEASUREMENT PHASE */
    {
        EN_14V_SetHigh();
        EN_5V_SetLow();
    }
    else /* Restart phases counter and make measurement */
    {
        measurement_flag_MQ7 = 1; /* notification for measurement */
        counter100ms = 0;
    }
    counter100ms++;
}
