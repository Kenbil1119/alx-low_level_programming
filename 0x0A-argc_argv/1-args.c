#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the number of arguments from pass from
 *		the command line
 *
 * @argc: Integer parameter, reads number of arguments
 * @argv: Character pointer array parameter to save
 *					arguments passed
 *
 * Function - _putchar(): Call to print 'argc'
 *				(number of arguments)
 *
 * Return: Exit with sucess
 */

int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
