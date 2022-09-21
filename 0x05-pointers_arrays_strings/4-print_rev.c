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
	while (i >= 0)
        {
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
