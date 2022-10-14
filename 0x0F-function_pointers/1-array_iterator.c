#include "function_pointers.h"

/**
 * array_iterator - calls a function pointer on each element of an array
 * @array: array to iterate
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
