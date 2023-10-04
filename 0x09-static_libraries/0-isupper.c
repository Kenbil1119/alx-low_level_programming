#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Check if the alphabet store in 'c' is in uppercase
 *
 * Function: isupper()
 *
 * Conditional Statement - if-else: check if return value of is
 *		upper() is 1 (is uppercase)
 *
 * @c: integer prototype
 *
 * Return: 1 if it is in uppercase else 0
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
