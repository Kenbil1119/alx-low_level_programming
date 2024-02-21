#include "main.h"

/**
 * print_line - Print line (_) 'n' time(s)
 *
 * @n: Numbers of time to print line (_)
 *
 * Description: Line is print for each iteration of while
 *		loop statement, and terminated to print
 *		newline if 'n' is zero
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		--n;
	}
	_putchar('\n');
}

