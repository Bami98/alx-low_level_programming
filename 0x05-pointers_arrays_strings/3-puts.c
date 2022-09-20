#include "main.h"
/**
 * _puts - prints a string
 * @str: char pointer
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
