#include "main.h"
/**
 * _pow_recursion - returns the y power of x integer
 * @x: is the base integer
 * @y: is the exponent
 * Return: x the power of y but if y is less than zero
 *           it returns -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y >= 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}

