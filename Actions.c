#include "Actions.h"
#include "math.h"


#define R0 (float)160500
#define R0_MQ7 (float)3242//37748
#define TOV(y) (float)((y*5.0)/1023.0) //fa citirea in tensiune
#define RS(x) (float)((10000*(5-x))/x) //calcul pentru Rs
#define RS_MQ7(x) (float)((10000*(1.4-x))/x) //calcul pentru Rs
/* test for default session */
uint8_t Action1(uint8_t * result)
{
    double PPMuri;
    double intermediar;
    float RsCalculat;
    float tensiunea;
    uint16_t getSensVal;
    
    getSensVal = ADCC_GetConversion(channel_ANA0);
    tensiunea = TOV(getSensVal);
    RsCalculat = RS(tensiunea)/R0;
    intermediar = (log10(RsCalculat)-0.6979)/(-0.8529);
    PPMuri = (float)pow(10, intermediar);
    
    result[6] = (uint8_t)'M';
    result[5] = (uint8_t)'P';
    result[4] = (uint8_t)'P';
    result[3] = (uint8_t)PPMuri%10 + 0x30;
    result[2] = (uint8_t)(PPMuri/10)%10 + 0x30;
    result[1] = (uint8_t)(PPMuri/100)%10 + 0x30;
    result[0] = (uint8_t)(PPMuri/1000)%10 + 0x30;

    return 1; /* return 11b if successful */
}

uint8_t Action2(uint8_t * result)
{
    static uint16_t getSensVal = 0;
    double intermediar = 0;
    float RsCalculat = 0;
    float tensiunea = 0;
    static double PPMuri = 0;
    //static uint16_t media, index;
    if(getMeasurementStartFlag())
    {
        //index++;
        getSensVal = ADCC_GetConversion(channel_ANA2);
        tensiunea = TOV(getSensVal);
        RsCalculat = RS_MQ7(tensiunea)/R0_MQ7;
        intermediar = (log10(RsCalculat)-1.8365)/(-0.9182);
        PPMuri = (float)pow(10, intermediar);
    }
    else
    {
        
    }
    result[6] = (uint8_t)'M';
    result[5] = (uint8_t)'P';
    result[4] = (uint8_t)'P';
    result[3] = (uint8_t)PPMuri%10 + 0x30;
    result[2] = (uint8_t)(PPMuri/10)%10 + 0x30;
    result[1] = (uint8_t)(PPMuri/100)%10 + 0x30;
    result[0] = (uint8_t)(PPMuri/1000)%10 + 0x30;
    
    return 1; /* return 11 if successful */
}

uint8_t Action3(uint8_t * result)
{
    uint16_t getSensVal = 0;
    
    getSensVal = ADCC_GetConversion(channel_ANA3);
    
    result[6] = (uint8_t)' ';
    result[5] = (uint8_t)' ';
    result[4] = (uint8_t)' ';
    result[3] = (uint8_t)getSensVal%10 + 0x30;
    result[2] = (uint8_t)(getSensVal/10)%10 + 0x30;
    result[1] = (uint8_t)(getSensVal/100)%10 + 0x30;
    result[0] = (uint8_t)(getSensVal/1000)%10 + 0x30;
    return 1; /* return 11 if successful */
}

uint8_t Action4(uint8_t * result)
{
    static uint8_t is_calibrated = 0;
    static uint16_t calibratedVal = 0;
    
    /* Sufla in lumanare */
    uint16_t MicRead = 0;
    
    if(0 == is_calibrated)
    {
        for(uint8_t i = 0; i < 10; i++)
        {
            calibratedVal += ADCC_GetConversion(channel_ANA1);
        }
        calibratedVal /= 10;
        is_calibrated = 1;
    }
    MicRead = ADCC_GetConversion(channel_ANA1);
    if(MicRead < (calibratedVal-20))
    {
        stopMeasEvent(EVENT3);
        if(getEventTime(EVENT3)>50)
        {
            startMeasEvent(EVENT3);
            IO_RB4_Toggle();
        }
    }
    
    result[6] = (uint8_t)' ';
    result[5] = (uint8_t)' ';
    result[4] = (uint8_t)' ';
    result[3] = (uint8_t)MicRead%10 + 0x30;
    result[2] = (uint8_t)(MicRead/10)%10 + 0x30;
    result[1] = (uint8_t)(MicRead/100)%10 + 0x30;
    result[0] = (uint8_t)(MicRead/1000)%10 + 0x30;
    
    return 1; /* return 11 if successful */
}
