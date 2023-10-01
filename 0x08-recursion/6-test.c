#include <stdio.h>
#include "main.h"

/**
 * main - Call is_prime_number()
 *
 * Function: scanf(), is_prime_number(), printf
 *
 * Conditional Statement: Checks if 'prime' value is 1 or not
 *
 * main: Print if a number is prime or not after checkings in
 *		the is_prime_number()
 *
 * Return: 0
 */

int main(void)
{
	int num, prime;

	scanf("%d", &num);

	prime = is_prime_number(num);

	if (prime == 1)
		printf("%d is a prime number\n", num);
	else
		printf("%d is not a prime number\n", num);

	return (0);
}
