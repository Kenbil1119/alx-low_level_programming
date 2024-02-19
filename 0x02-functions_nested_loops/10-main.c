#include "main.h"

/**
 * main - Call the addition function 'add()' which returns the
 *			sum of two integer numbers
 *
 * Return: 0
 */

int main(void)
{
	int a = 10;
	int b = 54;
	int sum;

	sum = add(a, b);
	printf("%d\n", sum);

	return (0);
}
