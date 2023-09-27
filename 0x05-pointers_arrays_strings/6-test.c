#include <stdio.h>
#include "main.h"

/**
 * main - Call 'puts2()'
 *
 * Function: _puts(), puts2(), _putchar()
 *
 * main: To print a string in a sequence of skipping
 *
 * Return: 0
 */

int main(void)
{
	char s1[] = "0123456789";
	char s2[100] = "H e l l o ,   W o r l d ! ";

	_puts("Before puts2() call, s1[] prints:");
	_puts(s1);

	_puts("After puts2() call, s2[] prints:");
	puts2(s1);

	_putchar(10);

	_puts("Before puts2() call, s2[] prints:");
	_puts(s2);

	_puts("After puts2() call:");
	puts2(s2);

	return (0);
}
