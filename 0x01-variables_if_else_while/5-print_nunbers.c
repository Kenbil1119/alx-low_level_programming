#include <stdio.h>

/**
 * main - Entry point
 *
 * main - Function: putchar, printf
 * main Data type: int
 *
 * Loop Statement: for
 *
 * main - prints all numbers in base 10 from 0
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);

	putchar(10);

	return (0);
}
