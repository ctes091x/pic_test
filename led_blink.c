// ?????????????(???????)

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (Power-up Timer is enabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <stdbool.h>

#define _XTAL_FREQ 10000000

void main(){
    TRISA = 0x1f;   // PORTA?????
    TRISB = 0x00;   // PORTB?????
    //PORTA = 0x00;   // PORTA???
    PORTB = 0x00;   // PORTB???
    
    int i;
    
    __delay_ms(2000);
    
    while (true) {     // ?????
        i++;
        //if ( PORTA = 1){
        //    i = 0;
        //}
        /*
        if ( i > 255 ) {
            i = 0;
        }
        PORTB = i;
        */
        if(RA0 != 0){
            RB0 = 1;
        }else{
            RB0 = 0;
        }
        // __delay_ms(50);       // 1????
    }
}