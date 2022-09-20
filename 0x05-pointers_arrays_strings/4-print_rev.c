#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer of char (parameter)
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (*s != '\0')
	{
		i++;
		j = j + i;
	}
	s = s + j;
	while (j != 0)
	{
		_putchar(*s);
		j--;
		s--;
	}
	_putchar('\n');

}
