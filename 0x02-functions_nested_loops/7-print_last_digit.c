#include <stdio.h>

/**
 * print_last_digit - Execute (pld % 10)
 *
 * @pld: integer prototype to check its last digit
 *
 * Return: last digit
 */

int print_last_digit(int pld)
{
	pld = (pld % 10);

	return(pld);
}
