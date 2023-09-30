#include <stdio.h>
#include "main.h"

/**
 * factorial - Invoke itself (recursion)
 *
 * @n: Integer parameter to get a number
 *
 * Function: factorial()
 *
 * Return: The factorial of a number, 1 and -1 if 'n' is equal
 *			and less to 0 respectively
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		if (n == 0)
			return (1);
		else
			return (-1);
	}
}
