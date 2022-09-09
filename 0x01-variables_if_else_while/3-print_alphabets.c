#include <stdio.h>
/**
 * main - Entry block
 * Description - displays all alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char ch_upper = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch_upper <= 'Z')
	{
		putchar(ch_upper);
		ch_upper++;
	}
		putchar('\n');

	return (0);
}
