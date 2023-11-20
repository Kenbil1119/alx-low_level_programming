#include "main.h"

/**
 * main - Test for _sqrt() program
 *
 * Return: 0
 */

int main(void)
{
	puts("Square root of:");

	printf("1 & 0 is: %d & %d\n", _sqrt_recursion(1), _sqrt_recursion(0));
	printf("9 & 25 is: %d & %d\n", _sqrt_recursion(9), _sqrt_recursion(25));
	printf("-1 & -9 is: %d & %d\n", _sqrt_recursion(-1), _sqrt_recursion(-9));

	return (0);
}
