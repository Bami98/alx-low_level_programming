#include "main.h"
/**
 * puts2 - prints every char of a string
 * @str: char pointer
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
