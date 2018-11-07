#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xff;
	PORTD = 0x00;

	while (1)
	{
		PORTD = 0xff;
		_delay_ms(300);
		PORTD = 0x00;
		_delay_ms(300);
	}
}