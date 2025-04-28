#include<stdio.h>
#include<stdlib.h>
#include<pic18f4550.h>
#include <xc.h>
void main(void)
{
    int sum;  // Variable declaration of type int
    sum=0;   // Initialize sum to zero
    sum=0x0A+0x02;
    TRISB=0;  // Initialize port B for output
    PORTB=sum; // Output written from sum to port B
}

