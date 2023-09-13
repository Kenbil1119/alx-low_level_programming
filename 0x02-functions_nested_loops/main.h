#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
void print_putchar(void);
void print_alphabet(void);
void print_alphabet_x10(void);

/**
 * print_putchar - To print "_putchar"
 *
 * function: printf
 *
 * Return:
 */

void print_putchar(void)
{
	printf("_putchar");
}

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
