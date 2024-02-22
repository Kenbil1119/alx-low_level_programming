#include "main.h"

/**
 * print_triangle - Print triangle of specified size
 *
 * @size: size of triangle to be printed
 */

void print_triangle(int size)
{
	int space, hash, i;

	i = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (size > 0)
	{
		for (space = size - 1; space > 0; space--)
			_putchar(' ');

		i += 1;

		for (hash = 1; hash <= i; hash++)
			_putchar('#');
		_putchar('\n');
		--size;
	}
}
