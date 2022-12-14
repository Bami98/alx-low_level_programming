#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string - name to be printed
 * @f: a pointer function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
