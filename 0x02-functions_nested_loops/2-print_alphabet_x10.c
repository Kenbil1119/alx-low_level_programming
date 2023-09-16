#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabet
 *
 * Functions: _putchar()
 * Data Type: int, char
 *
 * Loop Statement: for
 *
 * print_alphabet_x10 - Prints all lowercase alphabet 10 times
 *		while calling _putchar() to do that and create
 *		new line for each call in the for-loop statement
 */

void print_alphabet_x10(void)
{
	char alpha;
	int n_times;

	for (n_times = 0; n_times <= 9; n_times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar(10);
	}
}

