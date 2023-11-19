#include "main.h"

/**
 * _isdigit - Checks if the parameter data is digit
 *
 * @c: integer Paramer to check
 *
 * Conditional Statement - if: Check if parameter falls
 *		in the range of 0 through 9
 *		(Range of number for ascii alphabet
 *		in uppercase)
 *
 * Return: 1 if is digit, 0 if not a digit or other
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
