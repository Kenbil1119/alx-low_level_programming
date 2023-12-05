#include "variadic_functions.h"

/**
 * print_all - Function to print all all arguments in their various format
 *
 * @format: String parameter, define  all format type present
 * @...: C syntax for variadic function declaration
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *str;
	char *separator = ", ";

	va_start(arg, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				break;
			case 'd':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char*);
				if (str == NULL)
				{
					printf("%p", NULL);
					break;
				}
				printf("%s", str);
				break;

			default:
				i++;
		}
		if ((i != strlen(format) - 1) && (format[i] == 'i' || format[i] == 'd' || format[i] == 's' || format[i] == 'f' || format[i] == 'c'))
			printf("%s", separator);
		i++;
	}
	printf("\n");;

	va_end(arg);
}
