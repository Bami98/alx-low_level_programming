#include <stdio.h>
/**
 * main - Entry block
 * Description - displays all alphabet in lowercase in reverse order
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
