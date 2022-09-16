#include "main.h"
#include <math.h>
/**
 * main - main block
 * Description: print the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	int k;
	long num = 612852475143;

	for (k = (int) sqrt(num); k > 2; k++)
	{
		if (num % k == 0)
		{
			printf("%d\n", k);
			break;
		}
	}
	return (0);
}
