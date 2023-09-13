#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Function: putchar()
 * Data Type: char
 *
 * Loop Statement: for
 *
 * Return Type: void
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
