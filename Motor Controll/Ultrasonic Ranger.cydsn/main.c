/* ========================================
 *
 * Copyleft by Shahariar,2015
 * All Rights Released
 * OPEN SOFTWARE, NO WARRENTY 
 *
 * DODGY BROTHERS C CODING Inc.  
 * BUG may appear in Future !!!
 * Non-Precision UltraSonic Ranger,
 * ========================================
*/

#include <project.h>
#include "stdio.h"


// Initial time ,set  here
int16 i =0;
int distance=0;

//CY ISR is a macro for interrupt handling
// http://www.cypress.com/go/an90799 for detalis
CY_ISR(Timer_ISR_handler)
{
    // at 1MHz Timer clock each count is 1 micro Second
    Timer_ClearInterrupt(Timer_INTR_MASK_CC_MATCH);
    i= Timer_ReadCounter();    
    
    // from HC 04 Ultra Sonic module's datasheet, each 58 uS = 1 cm
    
    distance =i/58;
    // please note that measured distance above 400 cm is not reliable
    
}

int main()

{
    
     UART_Start();

    UART_UartPutString("\r\nKnight Guard Proximity Sensor Test\r\n");
// Start Timer
    Timer_Start();
// Enable Global Interrupt and start ISR  
    CyGlobalIntEnable; 
    ISR_StartEx(Timer_ISR_handler);
    //SetTime_ISR_Start();
    



    
             
        for(;;)
        {
               //UART_UartPutString("\r\nKnight Guard\r\n");
              // UART_UartPutString("\r\n***********************************************************************************\r\n");
    // for proper application, delay should not be used, 
    // instead a preiodic interrupt or a function call is recommended
    CyDelay(100);
    
    // Triggers the Ultra Sonic Sensor 
    Trigger_Write(1);
    //LED_Write(1);
    CyDelayUs(10);
    // for 10 uS
    Trigger_Write(0);
    //LED_Write(0);
    //char distanceChar= distance; 
    
    char distanceBuf[10];
//int value = 234452;
    sprintf(distanceBuf,"%d", distance);
     UART_UartPutString(distanceBuf);
     UART_UartPutString("\r\n");
  
    if(distance >10)
    {
        LED_Write(1);
    }
    else
        LED_Write(0); 
    
}
          
}
/* [] END OF FILE */
