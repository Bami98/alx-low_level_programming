#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: fill the first 'n' bytes of memory area pointed by 's'
 * with the constant byte 'b'
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
