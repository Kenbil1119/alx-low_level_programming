#include "main.h"

/**
 * main - Print the sum of command line argument pass to a program
 *		after checking if the arguments match a digit
 *
 * @argc: Parameter to count argument pass (Built-in defined)
 * @argv: Parameter to save arguments as a string
 *						(Built-in defined)
 *
 * Return: 1 if error occur (Argument character is not a digit
 *				0 if successful
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
			if ((argv[i][j] >= '0') && (argv[i][j] <= '9'))
			{
				sum += 0;
			}
			else
			{
				printf("Error\n");

				return (1);
			}

		sum += atoi(argv[i]);
	}

		printf("%d\n", sum);

	return (0);
}
