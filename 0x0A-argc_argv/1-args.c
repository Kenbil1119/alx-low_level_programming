#include "main.h"

/**
 * main - This read and print the number of arguments
 *	pass to the program during runnig on the
 *	command line excluding the program name.
 *
 * @argc: Parameter to count variable
 *		(define in the standard library)
 * @argv: Array of pointer to read each argument pass
 *	to the program as string
 *	(Also deifine in the standard library)
 *
 * Conditional Statement - if: Checks if argv and argc
 *	reads more data
 *	(To silence compiler error messages)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if ((argv[1]) && (argc > 1))
	{
		printf("%d\n", (argc - 1));

		return (0);
	}

	_putchar('0');
	_putchar(10);

	return (0);
}
