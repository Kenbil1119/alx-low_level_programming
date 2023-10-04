#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Check if the alphabet store in 'c' is in lowercase
 *
 * Function: islower()
 * Data Type: int
 *
 * Conditional Statement: if-else
 *
 * @c: integer prototype
 *
 * Return: 1 if it is in lowercase else 0
 */

int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
