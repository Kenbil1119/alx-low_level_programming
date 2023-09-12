#include <stdio.h>

/**
 * print_alphabet - Prints alphabet
 *
 * function: putchar
 * Data type: char
 * Loop Statement: for
 *
 * print_alphabet - prints all lowercase alphabets in ascending order
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar(10);
}

/**
 * main - Entry point
 *
 * main - Function: print_alphabet
 *
 * main - call print_alphabet to the standard output
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();

	return (0);
}
