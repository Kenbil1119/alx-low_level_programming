#ifndef ALPHABET_H
#define ALPHABET_H

#include <stdio.h>

/**
 * print_alphabet - print all alphabet
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
}

#endif
