#include <stdio.h>
/**
 * main - Entry block
 * Description - prints hexadecimal number values
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
