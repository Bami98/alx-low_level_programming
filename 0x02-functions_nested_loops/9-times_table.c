#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <=9; k++)
		{
			int a = 0;
			a = k * j;

			_putchar(a + '0');
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
