#include "main.h"

/**
 * main - Program takes argument(s) from the command
 *	line carried out multiplication of the
 *	arguments after converting from string
 *	to integer.
 *
 * @argc: Parameter for argument count
 * @argv: Parameter for array of string for saving
 *			argument as vector/element.
 *
 * Return: 1, if argc < 2
 *		0 if more than 1 argument was passed
 */

int main(int argc, char *argv[])
{
	int i, convert, result = 1;

	if ((argc == 1) && argv[0])
	{
		printf("Error\n");

		return (0);
	}
	
	if (argc == 2)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		convert = atoi(argv[i]);
		result *= convert;
	}

	printf("%d\n", result);

	return (0);
}
