#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char ch = 'a';

	for (int i = 0; i < 10; i++)
	{
		while (ch != 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
