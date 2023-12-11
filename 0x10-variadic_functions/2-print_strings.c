#include "variadic_functions.h"

/**
 * print_strings - Print strings separated by another strings
 *
 * @separator: String that separate other string
 * @n: Total number of arguments needed
 * @...: C syntax for variadic function declaration
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list str;

	if (n <= 0)
		printf("\n");

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char*);

		if (i == (n - 1))
		{
			if (string == NULL)
				printf("%p\n", NULL);
			else
				printf("%s\n", string);
		}
		else
		{
			if (separator == NULL)
			{
				if (string == NULL)
					printf("%p", NULL);
				else
					printf("%s", string);
			}
			else
				printf("%s%s", string, separator);
		}
	}
}
