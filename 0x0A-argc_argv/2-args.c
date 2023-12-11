#include "main.h"

/**
 * main - Prints all command line arguments pass to
 *			the program
 *
 * @argc: Parameter that count and save total argument
 * @argv: Read and save each argument pass as element
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
