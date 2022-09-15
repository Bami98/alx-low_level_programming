#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i,j;
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			int k = 0;
			k = i * j;
			_putchar(k);
			_putchar(' ');
		}
		_putchar('\n');
	}
}

