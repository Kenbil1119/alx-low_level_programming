#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - Print every other character of a string starting from
 *			the first character
 *
 * Function: _putchar
 *
 * @str: Character pointer parameter to get string
 *
 * Loop Statement - for: iterate 'i' to get each elememts of str
 */

void puts2(char *str)
{
	int i = 0;
	int n = strlen(str);

	for (i = 0; i <= n; (i += 2))
		_putchar(str[i]);

	_putchar(10);
}
