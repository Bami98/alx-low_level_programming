#include "main.h"
/**
 * sqt - it helps to solve the _sqt_recursion
 * @i: incrementer to compare if square root
 * @n: integer - the number we want to find the sqrt of
 * Return: the sqrt of the number if found or
 *         -1 if not
 */
int sqt(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		return  (sqt(i + 1, n));
	}
}
/**
 * _sqrt_recursion - returns the sqrt a number n
 * @n: integer = the numbe we want to find the sqrt of
 * Return: the sqrt of the number if found else
 * -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqt(1, n));
}

