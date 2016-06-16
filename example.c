// example program for launchpad, blink two leds, how original!

#include <msp430.h>

int main()
{
	WDTCTL = WDTPW | WDTHOLD; // disable watchdog
	
	P1DIR |= BIT0 | BIT6; // set P1.0 and P1.6 as output
	
	P1OUT |= BIT0; // start with P1.0 on
	P1OUT &= ~BIT6; // and P1.6 off
	
	while(1) //switch between P1.0 and P1.6 every seconds, until heat death of the universe
	{
		__delay_cycles(1000000); // busy wait 1 sec, what a waste of microwatts!
		P1OUT ^= BIT0 | BIT6; // switch P1.0 and P1.6
	}
}
