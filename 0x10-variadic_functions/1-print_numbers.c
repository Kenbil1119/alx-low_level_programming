#include "variadic_functions.h"

/**
 * print_numbers - Print out set of input numbers
 *
 * @separator: May be anything, inform of string
 * @n: Total number of arguments to be inputs
 * @...: Macro parameter to read more arguments
 *
 * Conditional Statement - (1) if(): Check if separator
 *				is not empty
 *			(2) if(): To limit the times of
 *					printing separator
 *
 * Loop Statement - for(): Iterate 'i' in order to read
 *				arguments, by calling arg()
 *
 * Author: Usman Saheed K.K
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char **ptr_septr;
	va_list num;

	ptr_septr = &separator;

	va_start(num, n);

	if (*ptr_septr == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(num, int));
		}
		_putchar(10);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	_putchar(10);
}
