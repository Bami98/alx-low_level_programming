#include "main.h"
/**
 * print_line - prints n number of line
 * @n: number of times the charcter _ should be printed
 * Return: nothing
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
