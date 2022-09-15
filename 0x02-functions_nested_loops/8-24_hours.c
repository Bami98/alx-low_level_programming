#include "main.h"
/**
 * jack_bauer - prints every minute of the day ( 00:00 to 23:59)
 * putchar: prints a characer
 */
void jack_bauer(void)
{
	int i = 0, j = 0;

	while( i < 24)
	{
		while( j < 60)
		{
			_putchar((1/10) + '0');
			_putchar((i%10) + '0');
		 	_putchar(':');
          		 putchar((j/10) + '0');
			_putchar((j & 10 );
	         	_putchar('\n');
			j++;
		}
		i++
	}
}	
