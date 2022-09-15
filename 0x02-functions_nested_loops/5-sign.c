#include "main.h"
/**
 * print_sign - checks the sign of a given integer
 * @n: input integer
 * Return: 1 if +ve 0 if 0 and -1 if n is -ve
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
