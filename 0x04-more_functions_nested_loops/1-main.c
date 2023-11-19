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
 */

int main(void)
{
	char c;

	c = '0';

	printf("%c = %d\n", c, _isdigit(c));

	c = 'a';

	printf("%c = %d\n", c, _isdigit(c));

	return (0);
}
