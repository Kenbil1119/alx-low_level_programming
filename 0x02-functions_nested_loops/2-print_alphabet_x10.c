#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Function: putchar()
 * Data Type: int, char
 *
 * Loop Statement: for
 */

void print_alphabet_x10(void)
{
	int n_times;
	char alpha;

	for (n_times = 0; n_times <= 9; n_times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			putchar(alpha);
		putchar(10);
	}
}

/**
 * main - Entry point
 *
 * main - Function: print_alphabet_x10()
 *
 * main - call print_alphabet to the standard output
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}
