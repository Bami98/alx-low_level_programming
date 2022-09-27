/**
 * _strchr - locates a character in a string
 * @s: string s
 * @c: character to be located
 * Return: pointer to the occurrence of the char c or
 *         NULL if the char is not found
 */
char *_strchr(char *s, char c)
{
	char *p;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			return (p);
		}
		s++;
	}
	return ('\0');
}

