#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the sum of two inputs integer
 *				command line arguments
 *
 * @argc: Read number of inputs arguments
 * @argv: Read inputs arguments
 *
 * Function: printf() - prints sum of two integer
 *	atoi: Convert input string to integer
 *
 * Return: 1 if argc is lesss than 1, else exit with success
 */

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	printf("Error\n");

	return (1);
}
