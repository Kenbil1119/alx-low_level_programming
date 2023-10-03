#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Execute (pld % 10)
 *
 * @last: Integer prototype
 *		to check that input number is 'int' data_type
 *
 * Return: last digit
 */

int print_last_digit(int last)
{
	last %= 10;
	if (last < 0)
		return (last * -1);
	return (last);
}
