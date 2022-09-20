#include "main.h"
/**
 * swap_int - swap two integers value
 * @a: int pointer parameter
 * @b: int pointer parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
