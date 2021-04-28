//  Button 1    |   Button 2    |   Output
// (seat ind)   |(Heater on/off)| 
//      0       |       0       |  LED is OFF, Heater is OFF
//      0       |       1       |  LED is OFF, Heater is OFF
//      1       |       0       |  LED is OFF, Heater os OFF
//      1       |       1       |  LED is ON, Heater is ON

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB bit 1 = 0b0;
  DDRB bit 2 = 0b0;
  DDRC bit 1 = 0b1;
  PORTB = 0xFF;
  
  int a, b, c;
  while (1) 
  {
      a = PINB1;
      b = PINB2;
      c = a&b;
      PORTC = c;

  }
  return 0;
}
