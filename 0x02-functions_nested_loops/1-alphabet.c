#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all alphabet
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
 * main - Function: print_alphabet, putchar
 *
 * main - call print_alphabet to prints all lowercase alphabet
 *			to the standard output
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();

	return (0);
}
