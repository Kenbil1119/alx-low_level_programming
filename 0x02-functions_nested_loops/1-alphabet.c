#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all alphabet in lowercase
 *
 * Function: _putchar()
 * Data Type: char
 *
 * Loop Statement: for
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
