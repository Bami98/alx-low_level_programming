#include "main.h"
/**
 * print_line - prints n number of line
 * @n: number of times the charcter _ should be printed
 * Return: nothing
 */
void print_line(int n)
{
	if (n < 0)
	{
		_putchar(' ');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
