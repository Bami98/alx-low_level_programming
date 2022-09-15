#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int j, k, a;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			a = k * j;
			if (a > 9)
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			else if (k != 0)
			{
				_putchar(' ');
				_putchar(a + '0');
			}
			else
			{
				_putchar(a + '0');	
			}
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
