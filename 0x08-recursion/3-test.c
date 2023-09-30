#include <stdio.h>
#include "main.h"

/**
 * main - Invoke factorial()
 *
 * Function: factorial(), _putchar
 *
 * main(): Get the return of factroil of a number and save it as
 *			a right value of 'facto'
 *
 * Return: 0
 */

int main(void)
{
	int facto;

	facto = factorial(5);
	printf("%i\n", facto);

	facto = factorial(0);
	printf("%i\n", facto);

	facto = factorial(-5);
	printf("%i\n", facto);

	return (0);
}
