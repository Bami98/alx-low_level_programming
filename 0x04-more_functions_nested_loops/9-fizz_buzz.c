#include "main.h"
/**
 * main - entry block, it prints all number from 1 to 100
 * Description: it prints Fizz , Buzz and  FizzBuzz for multiple of 3, 5, 15
 * Return: 0;
 */
int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
