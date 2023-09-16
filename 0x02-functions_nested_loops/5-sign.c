#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Checking the character store in 'n'
 *
 * Function: _putchar
 * Data Type: int
 *
 * Conditional Statement: nested if-else
 *
 * @n: integer prototype to be check
 *
 * print_sign: Prints '+' if n is positive, '-' if n is negative
 *			else prints 0 if n is zero
 *
 * Return: 1 if n is positive, -1 if n is negative else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
