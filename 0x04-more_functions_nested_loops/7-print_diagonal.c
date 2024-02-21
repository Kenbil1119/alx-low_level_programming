#include "main.h"

/**
 * print_diagonal - Print line (_) 'n' time(s)
 *
 * @n: Numbers of time to print line (_)
 *
 * Description: Line is print for each iteration of while
 *		loop statement, and terminated to print
 *		newline if 'n' is zero
 */

void print_diagonal(int n)
{
	int i, j = 0;

	if (n > 0)
	{
		_putchar('\\');

		while (n > 0)
		{
			_putchar('\n');
			j += 1;
			for (i = 1; i <= j; i++)
				_putchar(' ');
			_putchar('\\');
			--n;
		}
		_putchar('\n');
	}
}
