#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number entered
 * Return: @n's last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit > 0)
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		_putchar('0' + -last_digit);
		return (-last_digit);
	}
}
