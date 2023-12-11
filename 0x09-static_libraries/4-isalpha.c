#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Check if the character store in 'c'
 *			is in an alphabet
 *
 * Function: isalpha()
 * Data Type: int
 *
 * Conditional Statement: if-else
 *
 * @c: integer prototype to be check
 *
 * Return: 1 if c is alphabet (lowercase || uppercase) else 0
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
