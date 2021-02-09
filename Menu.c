#include "Menu.h"

#define MENU_DIMENSION  (uint8_t)5
//#define RUN_RESULT(x)   ((x < 2) ? ("      ") : ((x == 2) ? ("OK    ") : ("NOT_OK")))
//#define RUN_RESULT(x) (x)
#define RUN_RESULT(x) ((x.runned_state == 0)?("      "):((char *)x.runned_result))

#define WENT_UP 1
#define WENT_DOWN 2

typedef struct {
    uint8_t menuEntry[16];
    //uint8_t *(*pfct_action)(void);
    uint8_t (*pfct_action)(uint8_t *);
    uint8_t runned_state;
    uint8_t runned_result[7];
}MenuType;

static uint8_t cursorPosn = 0;
static uint8_t cursorPosn_old = 0;
static uint8_t lastMove = 0;

uint8_t resetAction(uint8_t * result);

MenuType menu[MENU_DIMENSION] = {
    {"MQ135", &Action1, 0}, 
    {"MQ7  ", &Action2, 0}, 
    {"CNY70", &Action3, 0}, 
    {"SUFLA", &Action4, 0},
    {"reset", &resetAction, 0}
};

uint8_t resetAction(uint8_t * result)
{
    if(result != NULL)
    {
        /* Something went wrong */
        while(1);
    }
    /* reset function running test */
    for(uint8_t j = 0; j < MENU_DIMENSION; j++)
    {
        menu[j].runned_state = 0;
    }
    //EUSART_Write(0x35);
    return 0; /* return 11 if successful */
}

uint8_t displaySpace[2][16] = {0};

uint8_t getMenuDimension(void)
{
    return MENU_DIMENSION;
}

void requestRun(uint8_t menuEntry)
{
    menu[menuEntry].runned_state = 1;
}

void setCursorPosn(uint8_t posn)
{
    cursorPosn = posn;
}

void Menu_Init(void)
{
    LCD_Goto(1,1);
    LCD_Print("Salutare!");
    LCD_Goto(1,2);
    LCD_Print("Ina & Marius");
    __delay_ms(3000);
    
    LCD_Goto(1,1);
    sprintf((char*)displaySpace[0], "%c%s   %s",0x3E , menu[0].menuEntry, RUN_RESULT(menu[0]));
    LCD_Print((char*)displaySpace[0]);
    LCD_Goto(1,2);
    sprintf((char*)displaySpace[1], "%c%s   %s",0x20 , menu[1].menuEntry, RUN_RESULT(menu[1]));
    LCD_Print((char*)displaySpace[1]);
}

inline void Menu_goUp(uint8_t ub_cursorPosn)
{
    if(ub_cursorPosn == MENU_DIMENSION - 1)
    {
        LCD_Goto(1,1);
        sprintf((char*)displaySpace[0], "%c%s   %s",0x20 , menu[ub_cursorPosn - 1].menuEntry, RUN_RESULT(menu[ub_cursorPosn - 1]));
        LCD_Print((char*)displaySpace[0]);
        LCD_Goto(1,2);
        sprintf((char*)displaySpace[1], "%c%s   %s",0x3E , menu[ub_cursorPosn].menuEntry, RUN_RESULT(menu[ub_cursorPosn]));
        LCD_Print((char*)displaySpace[1]);
    }
    else
    {
        LCD_Goto(1,1);
        sprintf((char*)displaySpace[0], "%c%s   %s",0x3E , menu[ub_cursorPosn].menuEntry, RUN_RESULT(menu[ub_cursorPosn]));
        LCD_Print((char*)displaySpace[0]);
        LCD_Goto(1,2);
        sprintf((char*)displaySpace[1], "%c%s   %s",0x20 , menu[ub_cursorPosn+1].menuEntry, RUN_RESULT(menu[ub_cursorPosn+1]));
        LCD_Print((char*)displaySpace[1]);
    }
}

inline void Menu_goDown(uint8_t ub_cursorPosn)
{
    LCD_Goto(1,1);
    sprintf((char*)displaySpace[0], "%c%s   %s",0x20 , menu[ub_cursorPosn - 1].menuEntry, RUN_RESULT(menu[ub_cursorPosn - 1]));
    LCD_Print((char*)displaySpace[0]);
    LCD_Goto(1,2);
    sprintf((char*)displaySpace[1], "%c%s   %s",0x3E , menu[ub_cursorPosn].menuEntry, RUN_RESULT(menu[ub_cursorPosn]));
    LCD_Print((char*)displaySpace[1]);
}

void Menu_MainFunction(void)
{
        /* Verify and run selected */
        for(uint8_t i = 0; i < MENU_DIMENSION; i++)
        {
            if(menu[i].runned_state == 1)
            {
                menu[i].runned_state = menu[i].pfct_action(menu[i].runned_result);
            }
        }
        
        /* Display MainFunction */
        if(cursorPosn < cursorPosn_old) //going up
        {
            Menu_goUp(cursorPosn);
            lastMove = WENT_UP;
            cursorPosn_old = cursorPosn;
        }
        else if(cursorPosn > cursorPosn_old)//going down
        {
            Menu_goDown(cursorPosn);
            lastMove = WENT_DOWN;
            cursorPosn_old = cursorPosn;
        }
        else
        {
            stopMeasEvent(EVENT2);
            if(100 <= getEventTime(EVENT2))
            {
                startMeasEvent(EVENT2);
                /*Refresh last move*/
                if(WENT_UP == lastMove)
                {
                    Menu_goUp(cursorPosn);
                }
                else if(WENT_DOWN == lastMove)
                {
                    Menu_goDown(cursorPosn);
                }
                else // Initial state refresh
                {
                    LCD_Goto(1,1);
                    sprintf((char*)displaySpace[0], "%c%s   %s",0x3E , menu[0].menuEntry, RUN_RESULT(menu[0]));
                    LCD_Print((char*)displaySpace[0]);
                    LCD_Goto(1,2);
                    sprintf((char*)displaySpace[1], "%c%s   %s",0x20 , menu[1].menuEntry, RUN_RESULT(menu[1]));
                    LCD_Print((char*)displaySpace[1]);
                }
            }
            else
            {
                
            }
        }
}