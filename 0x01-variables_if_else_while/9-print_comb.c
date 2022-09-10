#include <stdio.h>
/**
 * main - Entry block
 * Description - prints digits 0-9 with comma separated
 * Return: 0
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
