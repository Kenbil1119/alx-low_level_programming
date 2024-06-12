#include "main.h"

/**
 * puts_half - Function to print the last half of a
 *					string
 *
 * @str: Store string
 *
 * Description: if the lenght of string is Odd, the last
 *		half should be (length of string - 1) / 2
 */

void puts_half(char *str)
{
	unsigned int n, i, len = strlen(str);

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
