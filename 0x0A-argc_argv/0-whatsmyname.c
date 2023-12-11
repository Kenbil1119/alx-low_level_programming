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
 * Conditional Statement - if: Check if argument was
 *				passed to the code
 *	(The condition is set to silence the compiler
 *	error message for unused variable)
 *
 * Return: 0
 *
 * Author: Usman Saheed .K
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}
