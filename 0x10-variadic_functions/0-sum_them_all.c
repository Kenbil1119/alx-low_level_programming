#include "variadic_functions.h"

/**
 * sum_them_all - Program to read more arguments
 *		from the user and return their sum.
 *
 * @n: Constant integer parameter
 *	for total number ofaguments
 * @...: Variadic element
 *	causes program to read more arguments from the user
 *
 * Conditional Statement - if: Check if the first argument
 *			'n' of the program is not 0
 *
 * Loop Statement - for: Iterate 'i' by 1 increament,
 *		to keep iterating for the next argument
 *		read from "..." by va_arg()
 *
 * Macro Function - va_start(): Initialize "par" to 'n'
 *	- va_arg(): Iterate par with other arguments
 *			from "..."
 *	-va_end(): END the iteration of "par"
 *
 * Return: sum_all: The sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum_all = 0;

	va_list par;

	va_start(par, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum_all += va_arg(par, int);
	}

	va_end(par);

	return (sum_all);
}
