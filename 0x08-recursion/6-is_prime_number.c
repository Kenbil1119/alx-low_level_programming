#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Check if a number is prime number
 *
 * @n: Integer number to check
 *
 * Conditional Statemet - if: Put 'n' into check
 *		if it remainder is not equal to 0
 *
 * Return: 0 if condition is true, 1 if condition is false
 */

int is_prime_number(int n)
{
	int i = 0;

	if ((n % 3) != 0)
		return (0);
	return ((i += 1) - is_prime_number(n - 2));
}
