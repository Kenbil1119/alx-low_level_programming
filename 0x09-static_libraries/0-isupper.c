#include "main.h"

/**
 * _isupper - Checks if the parameter data
 *		is in uppercase.
 *
 * @c: integer Paramer to check
 *
 * Conditional Statement - if: Check if parameter falls
 *		in the range of 65 through 90
 *		(Range of number for ascii alphabet
 *		in uppercase)
 *
 * Return: 1 if upper, 0 if lower or other character
 *
 * Author: Usman Saheed (uskehinde@gmail.com)
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
