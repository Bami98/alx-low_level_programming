#include "main.h"
/**
 * _islower - checks whether an input character is lowercase or uppercase
 * @c: the character to be checked
 * Return: 1 on success
 * Otherwise 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c >= 122)
	{
		return (1);
	}
	return (0);

}
