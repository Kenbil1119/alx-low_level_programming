#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Print reverse of a string
 *
 * Function: _putchar(), _print_rev_recursion
 *
 * @s: Character parameter to get string
 *
 * Conditional Statement - if: Check if string get string
 *	terminator else keep invoking _print_rev_recurtion()
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
