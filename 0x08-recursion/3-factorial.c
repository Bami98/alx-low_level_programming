#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: integer
 * Return: the factorial of the number and
 *          if the number -ve it returns -1
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}

