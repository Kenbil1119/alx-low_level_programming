#ifndef MAIN_H
#define MAIN_H

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
