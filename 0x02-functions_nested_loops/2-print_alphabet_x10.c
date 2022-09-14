#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	do {
		while (ch <= 'z')
		{
			char ch = 'a';
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	} while (i < 10);

}
