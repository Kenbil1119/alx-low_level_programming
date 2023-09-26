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
	print_rev(str);
	_putchar(10);

	_puts("Reverse of 'end' is:");
	print_rev("end");

	return (0);
}
