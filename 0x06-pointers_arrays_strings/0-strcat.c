#include "main.h"
/**
 * _strcat - returns a char pointer after it concatenates 2 strings
 * @dest: destination parameter
 * @src: src parameter
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j = -1;

	for (i = 0; dest[i] != '\0'; i++)
		;
	do {
		j++;
		dest[i] = src[j];
		i++;
	} while (src[j] != '\0');
	return (dest);
}
