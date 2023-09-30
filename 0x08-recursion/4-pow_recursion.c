#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calculate the power of a number
 *
 * @x: Integer parameter to get number to calculate its power
 * @y: Integer parameter to get power of 'x'
 *
 * Return: the value of Power of a number,
 *		return -1 if power is negative (-)
 */

int _pow_recursion(int x, int y)
{
	int n = x;

	if (y > 0)
	{
		return (x * _pow_recursion(n, (y - 1)));
	}
	else
	{
		if (y == 0)
			return (1);
		else
			return (-1);
	}
}

