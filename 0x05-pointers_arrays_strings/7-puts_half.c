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

	n = len / 2;
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		n += 1;
	}

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
