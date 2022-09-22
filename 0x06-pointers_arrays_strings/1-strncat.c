#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';

	return (dest);
}
