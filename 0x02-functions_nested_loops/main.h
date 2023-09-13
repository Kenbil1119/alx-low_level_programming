#ifndef stdio
#define stdio
#include <stdio.h>

void print_putchar(void);
void print_alphabet(void);
void print_alphabet_x10(void);

#endif

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

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar(10);
}

/**
 * print_alphabet_x10 - Alphabet 10 times
 *
 * Function: putchar()
 * Data - type: int, char
 *
 * Loop Statement: for
 *
 * print_alpha_x10 - Call putchar to prints lowercase alphabet
 *		10 times to the standard out and put newline at
 *		the end of each call
 *
 * Return - type: void
 * Return:
 */

void print_alphabet_x10(void)
{
	char alpha;
	int n_times;

	for (n_times = 0; n_times <= 9; n_times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			putchar(alpha);
		putchar(10);
	}
}
