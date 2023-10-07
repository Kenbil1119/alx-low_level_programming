#include <stdio.h>
#include <stdlib.h>

/**
 * main - Get command line argument and print the first one
 *		(Programe name)
 *
 * @argc: Integer parameter to read number of argument passed
 * @argv: Character pointer parameter to read passed
 *	arguments as a string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
