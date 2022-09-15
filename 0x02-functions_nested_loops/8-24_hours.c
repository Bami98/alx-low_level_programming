#include "main.h"
/**
 * jack_bauer - prints every minute of the day (00:00 to 23:59)
 */
void jack_bauer(void)
{
	int second = 0;

	int h = 0, m = 0, s = 0, d = 0;

	while (second < 1440)
	{
		_putchar(h + '0');
		_putchar(m + '0');
		_putchar(':');
		_putchar(s + '0');
		_putchar(d + '0');
		_putchar('\n');

		d++;
		if (d > 9)
		{
			d = 0;
			s++;
		}
		if (s > 5)
		{
			s = 0;
			m++;
		}
		if (m > 9)
		{
			m = 0;
			h++;
		}
		second++;
	}
}
