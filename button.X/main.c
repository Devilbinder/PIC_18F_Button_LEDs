#include <xc.h>
#include <pic18f4520.h>
#include "conbits.h"

void main(void) {
    TRISB=0; //0b00000000
    TRISDbits.RD7=1; //0b10000000
    TRISDbits.RD6=1; //0b11000000
    
    LATB=0; //0b00000000
   
    while(1){
        
        if(PORTDbits.RD7==1){ //0b10000000
            
			LATBbits.LB0=1;
            
        }else{
			LATBbits.LB0=0;
		}
		
		if(PORTDbits.RD6==1){ //0b10000000
            
			LATBbits.LB1=1;
            
        }else{
			LATBbits.LB1=0;
		}
    }    
}
