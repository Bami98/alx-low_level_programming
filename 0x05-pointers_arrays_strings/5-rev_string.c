#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: char pointer parameter
 */
void rev_string(char *s)
{
	int i, j, l;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, j = 0; j < l / 2; i--, ch++)
	{
		ch = s[j];
		s[j] = s[i];
		s[i] = ch;
	}
}
