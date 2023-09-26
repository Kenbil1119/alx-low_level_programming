#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse with a loop
 *
 * Function: _putchar() strlen()
 *
 * @s: character Pointer parameter pointing to a string
 *
 * Loop Statement - for: To iterate the elements of 's' and
 *		save as a new elements of 'STR'
 */

void print_rev(char *s)
{
	int i, j;

	int n = strlen(s);

	char STR[1024];

	for (i = (n - 1), j = 0; i >= 0; i--, j++)
	{
		STR[j] = s[i];
		_putchar(STR[j]);
	}
	_putchar(10);
}
