#include "variadic_functions.h"

/**
 * sum_them_all - Read all pass argument and
 *		return their some
 *
 * @n: Constant integer parameter to tell total number of
 *			argument to be call for
 * @...: Elipse sign, C syntax to allows function to take
 *			many argument
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, i = n;
	va_list arg;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	while (i-- > 0)
		sum += va_arg(arg, int);
	va_end(arg);

	return (sum);
}
