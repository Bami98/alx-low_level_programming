#include "main.h"
/**
 * *_strncpy - copies string
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of cahrs to copy
 * Return: returns pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; n > i; i++)
		dest[i] = '\0';

	return (dest);
}

