#include "main.h"
/**
 * more_numbers - print 0 to 14 (10 times)
 * Return: 0
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i < 10)
		{
			int j = i + 48;

			_putchar(i);
		}
		else
		{
			int k = (i / 10) + 48;
			int l = (i % 10) + 48;

			_putchar(k);
			_putchar(l);
		}
	}
	_putchar('\n');
}
