#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer of char (parameter)
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i != -1)
	{
		s--;
		i--;
		_putchar(*s);
	}
	_putchar('\n');

}
