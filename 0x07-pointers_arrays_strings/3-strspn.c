/**
 * _strspn - search a string for a set of bytes
 * @s: char String array
 * @accept: char array to check bytes with
 * Return: number of bytes in the initial segment of 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (len);
}

