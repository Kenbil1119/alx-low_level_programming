#include <stdio.h>

/**
 * main - Entry point
 *
 * main - Function: putchar
 * main Data type: char
 *
 * Loop Statement: for
 *
 * main - prints in reverse all alphabet in lowercase (small letter)
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar(10);

	return (0);
}
