#include <stdio.h>
#include "main.h"

/**
 * main - Invoke _pow_recursion()
 *
 * Function: _pow_recursion(), printf()
 *
 * main: Save the return of _pow_recursion() in 'pow'
 *
 * Return: 0
 */

int main(void)
{
	int pow;
	int num, times;

	num = 3;
	times = 3;

	pow = _pow_recursion(num, times);
	printf("%d^%d is: %d\n", num, times, pow);

	times = 0;

	pow = _pow_recursion(num, times);
	printf("%d^%d is: %d\n", num, times, pow);

	times = -3;

	pow = _pow_recursion(num, times);
	printf("%d^%d is: %d\n", num, times, pow);

	return (0);
}
