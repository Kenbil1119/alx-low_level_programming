#include <stdio.h>
#include <stdlib.h>

/**
 * print_putchar - Print "_putchar"
 *
 * Function: printf
 *
 * Parameter: void
 *
 * print_putchar - prints: print "_putchar" to the standard output
 *
 * Return - type: void
 * Return:
 */

void print_putchar(void)
{
	printf("_putchar");
}

/**
 * print_alphabet - print alphabet "a - z"
 *
 * Function: putchar
 * Data - type: char
 *
 * Loop Statement: for
 *
 * print_alphabet: prints all lowercase characters of alphabet
 *
 * Return - type: void
 * Return:
 */

void print_alphabet(void)
{
	char alpha;
	
	for(alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar(10);
}
