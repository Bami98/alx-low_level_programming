#include <stdio.h>
/**
 * main - Entry block
 * Description - prints digits 0-10
 * Return: 0
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
