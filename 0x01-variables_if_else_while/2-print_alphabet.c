#include <stdio.h>

/**
 * main - Entry point
 *
 * main - Function: putchar
 * main Data type: char
 *
 * Loop Statement: for
 *
 * main - prints all alphabet in lowercase (small letter)
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar(10);

	return (0);
}
