#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: length of array;
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	return (dest);
}
