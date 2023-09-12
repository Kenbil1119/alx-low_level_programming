#include <stdio.h>

/**
 * main - Entry point
 *
 * main - Function: putchar
 * main Data type: int
 *
 * Loop Statement: for
 *
 * main - prints all alphabet in lowercase (small letter)
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar(10);

	return (0);
}
