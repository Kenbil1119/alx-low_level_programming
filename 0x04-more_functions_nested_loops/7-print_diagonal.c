#include "main.h"

/**
 * print_diagonal - Print line diagonal line (\)
 *					'n' time(s)
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
		while (n > 0)
		{
			_putchar('\\');
			j += 1;
			if (n != 1)
			{
				_putchar('\n');
				for (i = 1; i <= j; i++)
					_putchar(' ');
			}
			--n;
		}
	}
	_putchar('\n');
}
