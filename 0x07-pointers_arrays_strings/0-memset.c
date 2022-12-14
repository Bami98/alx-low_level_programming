#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

