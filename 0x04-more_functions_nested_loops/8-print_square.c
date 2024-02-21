#include "main.h"

/**
 * print_square - Prints square to the output using '#'
 *
 * @size: Size of square
 */

void print_square(int size)
{
	int l, b;

	if (size > 0)
		for (l = size; l > 0; --l)
		{
			for (b = size; b > 0; --b)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
