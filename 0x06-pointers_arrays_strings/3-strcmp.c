#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: pointer s1
 * @s2: pointer s2
 * Return: -ve int if s1 < s2, 0 if equal, and +ve int if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
