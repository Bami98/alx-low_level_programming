#include "main.h"
/**
 * create_array - create an array of 'size' chars with a specific char 'c'
 * @size: the array size
 * @c: the input char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	if (size == NULL)
	{
		return (NULL);
	}
	else
	{
		ptArray = malloc(size * sizeof(char));
		for (count = 0; count < size; count++)
		{
			ptArray[count] = c;
		}
	}
	return (ptArray);
}
