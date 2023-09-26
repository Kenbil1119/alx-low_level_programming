#include <stdio.h>
#include "main.h"

/**
 * main - Call 'print_rev' to print reverse of string
 *
 * Function: _puts(), print_rev()
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "hello";

	_puts("Before string reverse");
	_puts(str);
	_putchar(10);

	_puts("After string reverse");
	rev_string(str);
	_puts(str);

	return (0);
}
