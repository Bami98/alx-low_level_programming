#include "main.h"
/**
 * check - it is helper function, to take recursive step
 * @num: the number to be checked
 * @i: incrementor divisor
 * Return: 0 if not prime, 1 if prime
 */
int check(i, num)
{
	if (num == i)
		return (1);
	else if (num % i == 0)
		return (0);
	else
		return (check(i + 1, num));
}

/**
 * is_prime_number - check if a number is prime
 * @n: integer - number to be checked
 * Return: 1 if it is prime , 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (check(2, n));
}

