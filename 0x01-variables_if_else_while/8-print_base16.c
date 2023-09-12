#include <stdio.h>

/**
 * main - Entry point
 *
 * main - Function: putchar
 * main Data type: char, int
 *
 * Loop Statement: for
 *
 * main - prints all base 16 characters
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char alpha;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar(10);

	return (0);
}
