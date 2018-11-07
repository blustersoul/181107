#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	DDRD = 0xff;
	PORTD = 0x00;
	
	while (1)
	{
		for(int i = 0 ; i < 2; i++)
		{
			for(int j = 0 ; j < 8 ; j++)
			{
				if(i == 0)
				{
					PORTD = 0x01 << j;
				}
				else if(i == 1)
				{
					PORTD = 0x80 >> j;
				}
				_delay_ms(300);
			}
		}
	}
}
