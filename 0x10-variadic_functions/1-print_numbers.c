#include "variadic_functions.h"

/**
 * print_numbers - Function print numbers separated by a
 *							string
 *
 * @separator: Pointer parameter of string constant
 * @n: Constant parameter of integer that specified total
 *			number of arguments to be pass
 * @...: C syntax for variadic function to take more arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	if (n <= 0)
		printf(" \n");

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", va_arg(num, int));
		else
		{
			if (separator == NULL)
				printf("%d", va_arg(num, int));
			else
				printf("%d%s", va_arg(num, int), separator);
		}
	}
}
