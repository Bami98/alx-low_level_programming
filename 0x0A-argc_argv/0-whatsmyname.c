#include <stdio.h>
/**
 * main - Entry block, it prints the first argv value
 * @argc: no of command line argument passed by the user
 * @argv: is an array of pointer to arrays of char objects
 * Return: 1
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (1);
}
