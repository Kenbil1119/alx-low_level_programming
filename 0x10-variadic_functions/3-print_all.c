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
				check_string(str);
				break;

			default:
				i++;
		}
		check_format(format, i);
		i++;
	}
	printf("\n");

	va_end(arg);
}

/**
 * check_string - Check if parameter is not empty: "NULL"
 * if not empty, string is print to the standard output
 *
 * @str: String Parameter
 *
 * Return: Number of string print out
 */

int check_string(char *str)
{
	if (str == NULL)
	{
		printf("%p", NULL);

		return (0);
	}

	printf("%s", str);

	return (strlen(str));
}

/**
 * check_format - Checks if "format[i]" is not the last
 *	character and if "format[i]" is a format specifier.
 *
 * @format: String parameter
 * @i: Integer parameter that increase to interate
 *		format character
 *
 * Return: 0 if condition is true else return -1
 */

int check_format(const char *format, unsigned int i)
{
	unsigned int n = (strlen(format) - 1);
	char ch = format[i];

	if (i != n && (ch == 'i' || ch == 'd' || ch == 'c' || ch == 'f' || ch == 's'))

	{
		printf(", ");
		return (0);
	}
	return (0);
}
