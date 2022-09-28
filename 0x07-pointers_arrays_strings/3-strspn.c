/**
 * _strspn - search a string for a set of bytes
 * @s: char String array
 * @accept: char array to check bytes with
 * Return: number of bytes in the initial segment of 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		found = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 0;
				break;
			}
			j++;
		}
		if (found == 1)
			break;
		i++;
	}
	return (i);
}
