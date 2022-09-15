#include "main.h"
/**
 * jack_bauer - prints every minute of the day ( 00:00 to 23:59)
 * putchar: prints a characer
 */
void jack_bauer(void)
{
	int sec = 0;
	int w = 0, x = 0, y = 0, z = 0;

	while (sec < 1400)
	{
		_putchar(w + '0');
		_putchar(x + '0');
		_putchar(':');
		_putchar(y + '0');
		_putchar(z + '0');

		z++;
		if (z > 9)
		{
			z = 0;
			y++;
		}
		if (y > 5)
		{
			y = 0;
			x++;
		}
		if (x > 9)
		{
			x = 0;
			w++;
		}
		sec++;
	}
}
