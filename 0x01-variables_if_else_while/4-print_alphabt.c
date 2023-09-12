#include <stdio.h>

/**
 * main - Entry point
 *
 * main - Function: putchar
 * main Data type: char
 *
 * Loop Statement: for
 * Conditional Statement: if
 *
 * Keyword: "continue" for skipping step
 *
 * main - prints all alphabet in lowercase (small letter) except
 *						'e' and 'q'
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha == 'e') | (alpha == 'q'))
			continue;
		putchar(alpha);
	}

	putchar(10);

	return (0);
}
