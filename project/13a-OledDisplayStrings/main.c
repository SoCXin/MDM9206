
#include "oled_i2c.h"

int main()
{		 
    OLED_Init();		  // Check oled_i2c.c file for SCL,SDA pin connection
    OLED_SetCursor(2,0);  //Set cursor at 2nd-line 0th-Position
    OLED_DisplayString("Oled Interface");	
    
    OLED_SetCursor(4,20); //Set cursor at 4th-line 20th-Position
    OLED_DisplayString("With 8051 From");
    
    OLED_SetCursor(6,30); //Set cursor at 6th-line 30th-Position
    OLED_DisplayString("Exploreembedded");    

    while(1);
}