
#include "lcd.h"
#include "delay.h" 


/*
 * 
 */
int main() 
{
    int count = 0;
    /*Connect RS->PD0, RW->PD1, EN->PD2 and data bus to PORTB*/
    LCD_SetUp(P0_0,P0_1,P0_2,P2_0,P2_1,P2_2,P2_3,P2_4,P2_5,P2_6,P2_7);
    LCD_Init(2,16);
    
    LCD_DisplayString("Decimal");

    while(1)
    {
        LCD_GoToLine(1);
        LCD_Printf("Count=%4d",count);
        DELAY_ms(500);
        count++;
    }
    
    return (0);
}

