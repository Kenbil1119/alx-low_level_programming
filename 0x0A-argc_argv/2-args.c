#include <stdio.h>
#include <stdlib.h>

/**
 * main - Gets command line arguments and print each in new line
 *
 * @argc: Integer parameter to read command line arguments
 * @argv: Character array of Pointer parameter to read inputs arguments
 *
 * Function: printf() - Prints each arguments on a new line
 *
 * Return: Exit if Sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	exit(EXIT_SUCCESS);
}
