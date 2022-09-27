#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: fill the first 'n' bytes of memory area pointed by 's'
 * with the constant byte 'b'
 * Return: popinter to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
