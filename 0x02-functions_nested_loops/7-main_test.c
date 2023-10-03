#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - Call print_last_digit
 *
 * Function: print_last_digit(), _putchar(), _puts()
 *
 * main: Prints last digit by calling the print_last_digit()
 *
 * Return: 0
 */

int main(void)
{
	_puts("Testing 7-print_last_digit.c");

	printf("last digit of -1024 is: ");
	print_last_digit(-1024);
	_putchar(10);

	printf("Last digit of INT_MAX is: ");
	print_last_digit(INT_MAX);
	_putchar(10);

	printf("Last digit of INT_MIN is: ");
	print_last_digit(INT_MIN);
	_putchar(10);

	return (0);
}
