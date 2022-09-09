#include <stdio.h>
/**
 * main - Entry block
 * Description - displays all alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z') 
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
