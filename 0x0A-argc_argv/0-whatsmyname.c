#include "main.h"

/**
 * main - Program to test the usage of command line
 *			arguments in C
 *
 * @argc: Integer Parameter to count total number of
 *		arguments pass to the program
 * @argv: Integer pointer parameter of array
 *	pointing to each arguments pass to the program
 *	on the command line and save it as an element
 *	of array.
 *
 * Return: 0
 *
 * Author: Usman Saheed .K
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
